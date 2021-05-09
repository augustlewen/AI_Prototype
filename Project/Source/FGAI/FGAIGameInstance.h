#pragma once

#include "CoreMinimal.h"

#include "AI/Sensing/FGNoiseActor.h"
#include "Engine/GameInstance.h"
#include "FGAIGameInstance.generated.h"

UCLASS()
class FGAI_API UFGAIGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	static TArray<AFGNoiseActor*> NoiseActors;
};
