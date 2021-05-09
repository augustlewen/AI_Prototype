#pragma once

#include "Components/ActorComponent.h"
#include "FGVisionSensingTargetComponent.generated.h"

UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class UFGVisionSensingTargetComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

	FVector GetTargetOrigin() const;

	static void GetSensingTargets(TArray<UFGVisionSensingTargetComponent*>& OutTargets, const FVector& Origin, float DistanceMin);

private:
	// Don't do this
	static TArray<UFGVisionSensingTargetComponent*> TargetsList;
};
