#pragma once

#include "Engine/DataAsset.h"
#include "FGVisionSensingSettings.generated.h"

UCLASS()
class UFGVisionSensingSettings : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = Sensing)
	float Angle = 180.0f;

	UPROPERTY(EditAnywhere, Category = Sensing)
	float DistanceMinimum = 8000.0f;
};
