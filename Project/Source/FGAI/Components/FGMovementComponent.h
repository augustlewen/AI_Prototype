#pragma once

#include "GameFramework/MovementComponent.h"
#include "FGMovementComponent.generated.h"

struct FFGFrameMovement;

UCLASS()
class UFGMovementComponent : public UMovementComponent
{
	GENERATED_BODY()
public:
	UFGMovementComponent();
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	FFGFrameMovement CreateFrameMovement() const;

	void RequestJump();

	void MoveFrameMovement(FFGFrameMovement& FrameMovement);

	FRotator GetFacingRotation() const { return FacingRotationCurrent; }
	FVector GetFacingDirection() const { return FacingRotationCurrent.Vector(); }
	FVector GetVelocity() const { return Velocity; }

	void SetFacingRotation(const FRotator& InFacingRotation, float InRotationSpeed = -1.0f);
	void SetFacingRotation(const FQuat& InFacingRotation, float InRotationSpeed = -1.0f);
	void SetFacingDirection(const FVector& InFacingDirection, float InRotationSpeed = -1.0f);

	FVector BlockingNormal;

	float MoveForward;
	float MoveRight;

private:
	void Move(float DeltaTime);
	void Rotate(float DeltaTime);
	void Jump();
	void GroundCheck();
	FVector HandleFriction();
	FVector CreateAlignedInputVector(FVector Normal);
	FVector GetWallForward(FVector Normal);
	FVector GetWallForward(FVector Normal, int& Direction);
	
	void Internal_SetFacingRotation(const FRotator& InFacingRotation, float InRotationSpeed);
	
	bool IsGrounded;
	bool IsWalled;
	bool IsJumpRequested;

	UPROPERTY(EditAnywhere, Category = Movement)
	float AccelerationSpeed = 10000.f;
	UPROPERTY(EditAnywhere, Category = Movement)
	float AirAccelerationSpeed = 1000.f;

	UPROPERTY(EditAnywhere, Category = Friction)
	float SpeedFriction = 10.f;
	UPROPERTY(EditAnywhere, Category = Friction)
	float TurningFriction = 10.f;
	UPROPERTY(EditAnywhere, Category = Friction)
	float AirTurningFriction = 1.f;
	UPROPERTY(EditAnywhere, Category = Friction)
	float StopFriction = 10.f;

	UPROPERTY(EditAnywhere, Category = GroundCheck)
	float GroundDot = 0.8f;
	UPROPERTY(EditAnywhere, Category = GroundCheck)
	float GroundCheckLength = 1.5f;
	UPROPERTY(EditAnywhere, Category = Gravity)
	float Gravity = 981.0f;

	UPROPERTY(EditAnywhere, Category = Jump)
	float JumpStrength = 750.f;
	UPROPERTY(EditAnywhere, Category = Jump)
	float WallJumpStrength = 750.f;
	UPROPERTY(EditAnywhere, Category = Jump)
	float JumpRequestDuration = 0.5f;
	UPROPERTY(EditAnywhere, Category = Jump)
	float WallJumpUpWeight = 2.f;
	UPROPERTY(EditAnywhere, Category = Jump)
	float WallJumpOutWeight = 2.f;
	UPROPERTY(EditAnywhere, Category = Jump)
	float WallJumpLookWeight = 1.f;
	
	UPROPERTY(EditAnywhere, Category = WallRun)
	float WallRunDuration = 2.f;
	UPROPERTY(EditAnywhere, Category = WallRun)
	float WallRunningGravityMultiplier = 0.f;
	UPROPERTY(EditAnywhere, Category = WallRun)
	float RequiredSqrWallMagnitude = 300000.f;
	UPROPERTY(EditAnywhere, Category = WallRun)
	float RequiredWallLookAlignment = 0.5f;
	UPROPERTY(EditAnywhere, Category = WallRun)
	float StartOfWallRunSlowdown = 1.f;
	UPROPERTY(EditAnywhere, Category = WallRun)
	float SlowdownAmountPerSecond = 5000.f;

	FVector InputVector;
	FVector Velocity;
	FVector GroundNormal;
	FVector WallNormal;

	bool JumpRequested = false;
	float TimeOfJumpRequestExpiry = 0.f;

	bool HasFallen = false;
	float TimeOfWallRunExpiry = 0.f;

	FRotator FacingRotationCurrent;
	FRotator FacingRotationTarget;
	float FacingRotationSpeed;
};