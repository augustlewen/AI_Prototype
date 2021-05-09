#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGNoiseSensingComponent.generated.h"

class AFGNoiseActor;

USTRUCT(BlueprintType)
struct FFGNoiseSenseResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	AActor* SensedActor;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGNoiseSensingDelegate, const FFGNoiseSenseResult&, SenseResult);

UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class FGAI_API UFGNoiseSensingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFGNoiseSensingComponent();

	UPROPERTY(BlueprintAssignable)
	FFGNoiseSensingDelegate OnNoiseSensed;

	UPROPERTY(EditDefaultsOnly)
	float SenseRadius = 2000.0f;
	UPROPERTY(EditDefaultsOnly)
	float SenseFrequency = 0.1f;

protected:
	virtual void BeginPlay() override;

	float SenseTimer = 0;

	TArray<AFGNoiseActor*> SensedActors;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
