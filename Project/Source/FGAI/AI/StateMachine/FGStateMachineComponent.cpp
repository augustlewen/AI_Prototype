#include "FGStateMachineComponent.h"
#include "FGAIStateBase.h"
#include "FGAIStateMachineSheet.h"

UFGStateMachineComponent::UFGStateMachineComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UFGStateMachineComponent::BeginPlay()
{
	Super::BeginPlay();
	
	LoadSheet();
	
	if (!ensure(CurrentState != nullptr))
		return;

	CurrentState->OnActivated();
}

void UFGStateMachineComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	UnloadSheet();

	Super::EndPlay(EndPlayReason);
}

void UFGStateMachineComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!ensure(CurrentState != nullptr))
		return;

	const FName NewStateName = CurrentState->TickActive(DeltaTime);

	if (NewStateName != NAME_None)
	{
		UFGAIStateBase* NewState = GetStateFromName(NewStateName);

		if (!ensureMsgf(NewState != nullptr, TEXT("Unable to change AI-state because the new state %s could not be found."), *NewStateName.ToString()))
			return;

		CurrentState->OnDeactivated();
		NewState->OnActivated();
		CurrentState = NewState;
	}
}

void UFGStateMachineComponent::SetSheet(UFGAIStateMachineSheet* NewSheet)
{
	AIStateMachineSheet = NewSheet;
	LoadSheet();
}

void UFGStateMachineComponent::LoadSheet()
{
	if (!ensureMsgf(AIStateMachineSheet != nullptr, TEXT("Invalid StateMachineSheet")))
		return;
	
	UnloadSheet();


	for (auto StateClass : AIStateMachineSheet->AIStates)
	{
		UFGAIStateBase* AIState = NewObject<UFGAIStateBase>(GetOwner(), StateClass);
		if (!ensure(AIState != nullptr))
			continue;

		AIState->Owner = GetOwner();
		AIState->Setup();
		AIStates.Add(AIState);
	}

	CurrentState = GetStateFromClass(AIStateMachineSheet->StartingState);
	ensureMsgf(CurrentState != nullptr, TEXT("Unable to find appropriate starting state for the ai state machine."));
}

void UFGStateMachineComponent::UnloadSheet()
{
	for (auto State : AIStates)
	{
		if (State == nullptr)
			continue;

		State->OnRemoved();
	}

	AIStates.Empty();
}

UFGAIStateBase* UFGStateMachineComponent::GetStateFromClass(TSubclassOf<UFGAIStateBase> ClassType) const
{
	for (auto State : AIStates)
	{
		if (State->GetClass() == ClassType)
			return State;
	}

	return nullptr;
}

UFGAIStateBase* UFGStateMachineComponent::GetStateFromName(FName StateName) const
{
	for (auto State : AIStates)
	{
		if (State == nullptr)
			continue;

		if (State->StateName == StateName)
			return State;
	}

	return nullptr;
}

