#pragma once

#include "Engine/DataAsset.h"
#include "FGAIStateMachineSheet.generated.h"

class UFGAIStateBase;

UCLASS()
class UFGAIStateMachineSheet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = AI)
	TArray<TSubclassOf<UFGAIStateBase>> AIStates;

	UPROPERTY(EditDefaultsOnly, Category = AI)
	TSubclassOf<UFGAIStateBase> StartingState;
};
