#include "FGNoiseSensingComponent.h"

#include "FGNoiseActor.h"
#include "FGAI/FGAIGameInstance.h"
#include "Kismet/KismetSystemLibrary.h"

UFGNoiseSensingComponent::UFGNoiseSensingComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UFGNoiseSensingComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UFGNoiseSensingComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                             FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector Position = GetOwner()->GetActorLocation();

	UKismetSystemLibrary::DrawDebugSphere(GetOwner(), Position, SenseRadius, 12, FLinearColor::Red);

	SenseTimer += DeltaTime;
	if(SenseTimer < SenseFrequency)
		return;
	SenseTimer = 0;

	for(int i = SensedActors.Num() - 1; i >= 0; i--)
	{
		if(SensedActors[i] == nullptr|| (SensedActors[i] != nullptr && SensedActors[i]->IsActorBeingDestroyed()))
			SensedActors.RemoveAt(i);
	}
	
	for(AFGNoiseActor* NoiseActor : GetWorld()->GetGameInstance<UFGAIGameInstance>()->NoiseActors)
	{
		if(NoiseActor == nullptr || SensedActors.Contains(NoiseActor))
			return;
		
		float DistanceToNoiseSq = FVector::DistSquared(Position, NoiseActor->GetActorLocation());
		float NoiseRange = NoiseActor->GetCurrentRadius();
		if(DistanceToNoiseSq < FMath::Square(NoiseRange + SenseRadius))
		{
			SensedActors.Add(NoiseActor);
			FFGNoiseSenseResult Result;
			Result.SensedActor = NoiseActor->NoiseInstigator;

			OnNoiseSensed.Broadcast(Result);
		}
	}
}

