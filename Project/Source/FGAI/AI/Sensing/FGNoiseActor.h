#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGNoiseActor.generated.h"

USTRUCT(BlueprintType)
struct FNoiseSettings
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	AActor* NoiseInstigator;
	UPROPERTY(BlueprintReadWrite)
	FVector Position;
	UPROPERTY(BlueprintReadWrite)
	float StartRadius;
	UPROPERTY(BlueprintReadWrite)
	float EndRadius;
	UPROPERTY(BlueprintReadWrite)
	float Duration;
};

UCLASS()
class FGAI_API AFGNoiseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AFGNoiseActor();

	UFUNCTION(BlueprintCallable)
	static void SpawnNoise(FNoiseSettings Settings);
	void SetSettings(FNoiseSettings Settings);
	void StartSound();
	float GetCurrentRadius() const;

	UPROPERTY()
	AActor* NoiseInstigator;

	UPROPERTY(EditDefaultsOnly)
	float StartRadius = 200.0f;
	UPROPERTY(EditDefaultsOnly)
	float EndRadius = 1000.0f;
	UPROPERTY(EditDefaultsOnly)
	float Duration = 1.2f;
	

protected:
	UPROPERTY()
	USceneComponent* Root;

	float CurrentRadius;
	float ExpansionRate = 2000.f;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	virtual void Tick(float DeltaTime) override;

};
