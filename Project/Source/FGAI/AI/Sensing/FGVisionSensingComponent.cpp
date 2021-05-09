#include "FGVisionSensingComponent.h"
#include "FGVisionSensingSettings.h"
#include "FGVisionSensingTargetComponent.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"

UFGVisionSensingComponent::UFGVisionSensingComponent()
{
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.bCanEverTick = true;
}

void UFGVisionSensingComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (SensingSettings == nullptr)
		return;

	const FVector Direction = GetOwner()->GetActorForwardVector();
	const FVector Origin = GetOwner()->GetActorLocation();

	if (bDebugDrawVision)
	{
		FVector Right = Direction.RotateAngleAxis(SensingSettings->Angle, FVector::UpVector);
		FVector Left = Direction.RotateAngleAxis(-SensingSettings->Angle, FVector::UpVector);
		UKismetSystemLibrary::DrawDebugLine(GetWorld(), Origin, Origin + Right * SensingSettings->DistanceMinimum, FLinearColor::Red);
		UKismetSystemLibrary::DrawDebugLine(GetWorld(), Origin, Origin + Left * SensingSettings->DistanceMinimum, FLinearColor::Green);
	}

	TArray<UFGVisionSensingTargetComponent*> TargetComponents;
	Targets.GetKeys(TargetComponents);
	for (UFGVisionSensingTargetComponent* Target : TargetComponents)
	{
		if (Target == nullptr || (Target != nullptr && Target->IsBeingDestroyed()))
		{
			Targets.Remove(Target);
			continue;
		}

		if (!IsPointInViewCone(Target->GetTargetOrigin(), Origin, Direction, SensingSettings->DistanceMinimum))
		{
			if(Targets[Target].IsSensed)
			{
				FFGVisionSensingResults Results;
				Results.SensedActor = Target->GetOwner();
				OnTargetLost.Broadcast(Results);
			}
			Targets.Remove(Target);
			continue;
		}

		FTraceDatum Data;
		FTargetStruct& TargetStruct = Targets[Target];
		if(TargetStruct.BeenChecked && GetWorld()->GetRealTimeSeconds() >= TargetStruct.TimeOfNextTrace)
		{
			TargetStruct.TraceHandle = RequestTrace(GetOwner()->GetActorLocation(), Target->GetOwner()->GetActorLocation());
			TargetStruct.BeenChecked = false;
		}
		else if(!TargetStruct.BeenChecked && GetWorld()->QueryTraceData(TargetStruct.TraceHandle, Data))
		{
			TargetStruct.TimeOfNextTrace = GetWorld()->GetRealTimeSeconds() + SenseFrequency;
			TargetStruct.BeenChecked = true;

			bool NewIsSensed = false;
			AActor* TargetActor = Target->GetOwner();
			for(FHitResult Hit : Data.OutHits)
			{
				if(Hit.Actor == TargetActor)
				{
					NewIsSensed = true;
				}
			}
			
			if(NewIsSensed && !TargetStruct.IsSensed)
			{
				FFGVisionSensingResults Results;
				Results.SensedActor = TargetActor;
				OnTargetSensed.Broadcast(Results);
			}
			else if(!NewIsSensed && TargetStruct.IsSensed)
			{
				FFGVisionSensingResults Results;
				Results.SensedActor = TargetActor;
				OnTargetLost.Broadcast(Results);
			}
			TargetStruct.IsSensed = NewIsSensed;
		}
	}

	TArray<UFGVisionSensingTargetComponent*> ListOfTargets;
	
	UFGVisionSensingTargetComponent::GetSensingTargets(ListOfTargets, GetOwner()->GetActorLocation(), SensingSettings->DistanceMinimum);

	for (UFGVisionSensingTargetComponent* Target : ListOfTargets)
	{
		if (!Targets.Contains(Target) &&
			IsPointInViewCone(Target->GetTargetOrigin(), Origin, Direction, SensingSettings->DistanceMinimum))
		{
			Targets.Add(Target);
			FTargetStruct& TargetStruct = Targets[Target];
			TargetStruct.TraceHandle = RequestTrace(GetOwner()->GetActorLocation(), Target->GetOwner()->GetActorLocation());
			TargetStruct.IsSensed = false;
		}
	}
}

bool UFGVisionSensingComponent::IsPointInViewCone(const FVector& PointToTest, const FVector& Origin, const FVector& Direction, float DistanceMinimum) const
{
	if (SensingSettings == nullptr)
		return false;

	float DistanceMinimumSq = FMath::Square(DistanceMinimum);

	if (FVector::DistSquared(Origin, PointToTest) > DistanceMinimumSq)
	{
		return false;
	}

	const FVector DirectionToTarget = (PointToTest - Origin).GetSafeNormal();

	const float AsHalfRad = FMath::Cos(FMath::DegreesToRadians(SensingSettings->Angle));
	const float Dot = FVector::DotProduct(Direction, DirectionToTarget);
	
	if(Dot <= AsHalfRad)
		return false;

	const bool bIsValid = Dot > AsHalfRad;

	return bIsValid;
}

float UFGVisionSensingComponent::GetVisionInRadians() const
{
	if (SensingSettings == nullptr)
		return 0.0;

	return FMath::Cos(FMath::DegreesToRadians(SensingSettings->Angle));
}

FTraceHandle UFGVisionSensingComponent::RequestTrace(FVector Start, FVector End)
{
	UWorld* World = GetWorld();
	if(World == nullptr)
		return FTraceHandle();

	ECollisionChannel Channel = UEngineTypes::ConvertToCollisionChannel(TraceType);

	FCollisionQueryParams Params = FCollisionQueryParams::DefaultQueryParam;
	Params.bTraceComplex = false;
	Params.AddIgnoredActor(GetOwner());

	 return World->AsyncLineTraceByChannel(EAsyncTraceType::Single,
	 	Start, End,
	 	Channel,
	 	Params);
}

