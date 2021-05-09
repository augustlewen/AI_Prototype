#pragma once

#include "Components/ActorComponent.h"
#include "FGStateMachineComponent.generated.h"

class UFGAIStateBase;
class UFGAIStateMachineSheet;

UCLASS(meta = (BlueprintSpawnableComponent))
class UFGStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UFGStateMachineComponent();

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetSheet(UFGAIStateMachineSheet* NewSheet);

private:
	void LoadSheet();
	void UnloadSheet();

	UFGAIStateBase* GetStateFromClass(TSubclassOf<UFGAIStateBase> ClassType) const;
	UFGAIStateBase* GetStateFromName(FName StateName) const;

	UPROPERTY(EditAnywhere)
	UFGAIStateMachineSheet* AIStateMachineSheet = nullptr;

	UPROPERTY(Transient)
	TArray<UFGAIStateBase*> AIStates;

	UPROPERTY(Transient)
	UFGAIStateBase* CurrentState = nullptr;
};
