#include "FGVisionSensingTargetComponent.h"
#include "GameFramework/Actor.h"

TArray<UFGVisionSensingTargetComponent*> UFGVisionSensingTargetComponent::TargetsList;

void UFGVisionSensingTargetComponent::BeginPlay()
{
	Super::BeginPlay();

	TargetsList.Add(this);
}

void UFGVisionSensingTargetComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	TargetsList.Remove(this);

	Super::OnComponentDestroyed(bDestroyingHierarchy);
}

FVector UFGVisionSensingTargetComponent::GetTargetOrigin() const
{
	return GetOwner()->GetActorLocation();
}

void UFGVisionSensingTargetComponent::GetSensingTargets(TArray<UFGVisionSensingTargetComponent*>& OutTargets, const FVector& Origin, float DistanceMin)
{
	const float DistanceMinSq = FMath::Square(DistanceMin);

	for (UFGVisionSensingTargetComponent* Target : TargetsList)
	{
		if (Target == nullptr)
			continue;

		float DistanceSq = FVector::DistSquared(Target->GetOwner()->GetActorLocation(), Origin);
		if (DistanceSq < DistanceMinSq)
		{
			OutTargets.Add(Target);
		}
	}
}
