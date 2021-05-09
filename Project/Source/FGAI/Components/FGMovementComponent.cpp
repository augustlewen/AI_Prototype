#include "FGMovementComponent.h"
#include "../FGMovementStatics.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

UFGMovementComponent::UFGMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UFGMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	GroundCheck();
	Jump();
	Move(DeltaTime);
	Rotate(DeltaTime);

	if(IsWalled && GetWorld()->GetTimeSeconds() >= TimeOfWallRunExpiry)
	{
		HasFallen = true;
		IsWalled = true;
	}
	
	GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Yellow, FString::Printf(TEXT("SqrMagnitude: %f"), Velocity.SizeSquared()));
	GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Yellow, FString::Printf(TEXT("IsGrounded: %s"), IsGrounded ? TEXT("true") : TEXT("false")));
	GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Yellow, FString::Printf(TEXT("IsWalled: %s"), IsWalled ? TEXT("true") : TEXT("false")));
}

void UFGMovementComponent::Move(float DeltaTime)
{
	InputVector = CreateAlignedInputVector(GroundNormal);

	FVector Acceleration = InputVector * (IsGrounded || IsWalled ? AccelerationSpeed : AirAccelerationSpeed);
	FVector GravityAcceleration = FVector(0.f, 0.f, -Gravity);
	if(IsWalled)
	{
		float TimeSinceWallRunStart = TimeOfWallRunExpiry - GetWorld()->GetTimeSeconds();
		float CurrentSlowdown = SlowdownAmountPerSecond * UKismetMathLibrary::FClamp(StartOfWallRunSlowdown - TimeSinceWallRunStart, 0, WallRunDuration);
		Acceleration -= InputVector * CurrentSlowdown;
		GravityAcceleration *= WallRunningGravityMultiplier;
	}
	if(IsGrounded)
		GravityAcceleration = FVector::ZeroVector;

	FVector Friction = HandleFriction();

	Velocity += (Acceleration + GravityAcceleration + Friction) * DeltaTime;
	FVector DeltaToMove = Velocity * DeltaTime;

	bool SomethingWasHit = true;
	int CurrentIteration = 0;
	const int MaxIteration = 5;
	while (CurrentIteration < MaxIteration && SomethingWasHit)
	{
		FHitResult HitResult;
		SafeMoveUpdatedComponent(DeltaToMove, UpdatedComponent->GetComponentQuat(), true, HitResult);
		if (HitResult.bBlockingHit && HitResult.Component != nullptr)
		{
			CurrentIteration++;
			SomethingWasHit = true;
			
			FVector ImpactVelocity = FVector::DotProduct(Velocity, HitResult.Normal) * HitResult.Normal;
			Velocity -= ImpactVelocity;
			
			DeltaToMove -= FVector::DotProduct(DeltaToMove, HitResult.Normal) * HitResult.Normal;
			
		} else
		{
			SomethingWasHit = false;
		}
	}
}

void UFGMovementComponent::Rotate(float DeltaTime)
{
	FacingRotationCurrent = FQuat::Slerp(FacingRotationCurrent.Quaternion(), FacingRotationTarget.Quaternion(), FacingRotationSpeed * DeltaTime).Rotator();

	if (FacingRotationCurrent.Equals(FacingRotationTarget))
	{
		FacingRotationCurrent = FacingRotationTarget;
	}

	FacingRotationSpeed = 1.0f;
}

void UFGMovementComponent::Jump()
{
	if(JumpRequested)
	{
		if(IsGrounded)
		{
			Velocity += FVector::UpVector * JumpStrength;
			JumpRequested = false;
		}
		else if(IsWalled)
		{
			UCapsuleComponent* Capsule = StaticCast<UCapsuleComponent*>(UpdatedComponent);
			Velocity += (FVector::UpVector * WallJumpUpWeight +
				WallNormal * WallJumpOutWeight +
				Capsule->GetForwardVector() * WallJumpLookWeight
				).GetSafeNormal() *	WallJumpStrength;
			JumpRequested = false;
		}
		else if(GetWorld()->GetRealTimeSeconds() >= TimeOfJumpRequestExpiry)
			JumpRequested = false;
	}
}

FVector UFGMovementComponent::HandleFriction()
{
	FVector Friction = FVector::ZeroVector;

	if(!InputVector.IsNearlyZero())
	{
		FVector ParallelVelocity = FVector::DotProduct(Velocity, InputVector) * InputVector;
		if (FVector::DotProduct(Velocity, InputVector) < 0.f)
		{
			Friction += -ParallelVelocity * (IsGrounded ? TurningFriction : AirTurningFriction);
		} else
		{
			Friction += -ParallelVelocity * (IsGrounded || IsWalled ? SpeedFriction : SpeedFriction / AccelerationSpeed * AirAccelerationSpeed);
		}

		FVector InputRightVector = FVector::CrossProduct(FVector::UpVector, InputVector);
		FVector PerpendicularVelocity = FVector::DotProduct(Velocity, InputRightVector) * InputRightVector;
		Friction += -PerpendicularVelocity * (IsGrounded ? TurningFriction : AirTurningFriction);
	}
	else if(IsGrounded)
	{
		Friction += -Velocity * StopFriction;
	}
	
	return Friction;
}


void UFGMovementComponent::GroundCheck()
{
	UCapsuleComponent* Capsule = StaticCast<UCapsuleComponent*>(UpdatedComponent);
	FCollisionShape Sphere = FCollisionShape::MakeCapsule(Capsule->GetScaledCapsuleRadius() + 2, Capsule->GetScaledCapsuleHalfHeight() + 2);
	FVector Location = Capsule->GetComponentLocation();
	FVector End = Location + FVector::DownVector * 0.1f;
	TArray<FHitResult> HitResults;
	FComponentQueryParams Params = FComponentQueryParams();
	Params.AddIgnoredActor(GetOwner());
	Params.bIgnoreTouches = false;

	bool IsHit = GetWorld()->SweepMultiByChannel(HitResults, Location, End, Capsule->GetComponentQuat(), ECC_Pawn, Sphere, Params);
	
	GroundNormal = FVector::ZeroVector;
	WallNormal = FVector::ZeroVector;
	bool NewIsGrounded = false;
	bool NewIsWalled = false;
	
	for(FHitResult HitResult : HitResults)
	{
		if(FVector::DotProduct(FVector::UpVector, HitResult.Normal) > GroundDot)
		{
			GroundNormal += HitResult.Normal;
			NewIsGrounded = true;
			NewIsWalled = false;
			HasFallen = false;
		}
		else if(!NewIsGrounded &&  !HasFallen && FVector::DotProduct(FVector::UpVector, HitResult.Normal) < 0.1f)
		{
			if(!IsWalled)
			{
				FVector WallForward = GetWallForward(HitResult.Normal);
				
				if(FVector::DotProduct(WallForward, Capsule->GetForwardVector()) < RequiredWallLookAlignment &&
				UKismetMathLibrary::Square(FVector::DotProduct(Velocity, WallForward)) < RequiredSqrWallMagnitude)
					continue;
			}
			WallNormal = HitResult.Normal;
			NewIsWalled = true;
		}
	}

	if(NewIsWalled && NewIsWalled != IsWalled)
	{
		TimeOfWallRunExpiry = GetWorld()->GetTimeSeconds() + WallRunDuration;
		Velocity.Z = 0.f;
	}

	IsGrounded = NewIsGrounded;
	IsWalled = NewIsWalled;

	GEngine->AddOnScreenDebugMessage(-1, GetWorld()->DeltaTimeSeconds, FColor::Yellow, FString::Printf(TEXT("Number of hits : %d"), HitResults.Num()));
}

FVector UFGMovementComponent::CreateAlignedInputVector(FVector Normal)
{
	UCapsuleComponent* Capsule = StaticCast<UCapsuleComponent*>(UpdatedComponent);
	
	FVector NewInputVector;
	FVector Forward = Capsule->GetForwardVector();
	FVector Right = Capsule->GetRightVector();

	if (IsGrounded)
	{
		FVector GroundNormalRight = FVector::CrossProduct(GroundNormal, Forward);
		FVector GroundNormalForward = FVector::CrossProduct(GroundNormalRight, GroundNormal);
		NewInputVector = MoveForward * GroundNormalForward + MoveRight * GroundNormalRight;
	}
	else if (IsWalled)
	{
		int Direction;
		FVector WallForward = GetWallForward(WallNormal, Direction);
		NewInputVector = 1 * WallForward + 0 * WallNormal * Direction;
	}
	else
	{
		FVector AlignedRight = FVector::CrossProduct(FVector::UpVector, Forward);
		FVector AlignedForward = FVector::CrossProduct(AlignedRight, FVector::UpVector);
		NewInputVector = MoveForward * AlignedForward + MoveRight * AlignedRight;
	}
	NewInputVector.Normalize();
	
	return NewInputVector;
}

void UFGMovementComponent::RequestJump()
{
	JumpRequested = true;
	TimeOfJumpRequestExpiry = GetWorld()->GetRealTimeSeconds() + JumpRequestDuration;
}

FVector UFGMovementComponent::GetWallForward(FVector Normal)
{
	FVector WallAlignedVector = FVector::CrossProduct(Normal, FVector::UpVector);
	float Direction = UKismetMathLibrary::SignOfFloat(FVector::DotProduct(Velocity, WallAlignedVector));
	return WallAlignedVector * Direction;
}

FVector UFGMovementComponent::GetWallForward(FVector Normal, int& Direction)
{
	FVector WallAlignedVector = FVector::CrossProduct(Normal, FVector::UpVector);
	Direction = UKismetMathLibrary::SignOfFloat(FVector::DotProduct(Velocity, WallAlignedVector));
	return WallAlignedVector * Direction;
}

void UFGMovementComponent::SetFacingRotation(const FRotator& InFacingRotation, float InRotationSpeed)
{
	Internal_SetFacingRotation(InFacingRotation, InRotationSpeed);
}

void UFGMovementComponent::SetFacingRotation(const FQuat& InFacingRotation, float InRotationSpeed)
{
	Internal_SetFacingRotation(InFacingRotation.Rotator(), InRotationSpeed);
}

void UFGMovementComponent::SetFacingDirection(const FVector& InFacingDirection, float InRotationSpeed)
{
	Internal_SetFacingRotation(InFacingDirection.Rotation(), InRotationSpeed);
}

void UFGMovementComponent::Internal_SetFacingRotation(const FRotator& InFacingRotation, float InRotationSpeed)
{
	FRotator NewRotation = InFacingRotation;
	NewRotation.Roll = 0.0f;
	NewRotation.Pitch = 0.0f;
	FacingRotationTarget = NewRotation;

	if (InRotationSpeed < 0.0f)
	{
		FacingRotationCurrent = NewRotation;
		SetComponentTickEnabled(false);
	}
	else
	{
		SetComponentTickEnabled(true);
		FacingRotationSpeed = InRotationSpeed;
	}
}