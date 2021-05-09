#pragma once

#include "CoreMinimal.h"

class AActor;
class USceneComponent;

struct FFGFrameMovement
{
	FFGFrameMovement(const FVector& InStartLocation) :
		StartLocation(InStartLocation) {}

	FFGFrameMovement(AActor* InActor);
	FFGFrameMovement(USceneComponent* InSceneComponent);

	void AddDelta(const FVector& InDelta);
	void AddLateralDelta(const float GravityToApply) { LateralDelta += GravityToApply; }

	bool ShouldApplyLateral() const { return !FMath::IsNearlyZero(LateralDelta); }

	FVector GetMovementDelta() const { return MovementDelta; }

	FHitResult Hit;

	FVector FinalLocation = FVector::ZeroVector;

	FVector GetStartLocation() const { return StartLocation; }
	FVector GetLateral() const { return FVector(0.0f, 0.0f, LateralDelta); }

private:
	FVector MovementDelta = FVector::ZeroVector;
	FVector StartLocation = FVector::ZeroVector;
	float LateralDelta = 0.0f;
};
