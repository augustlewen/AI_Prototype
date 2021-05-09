#include "FGAIStateBase.h"

void UFGAIStateBase::Setup()
{
	BP_Setup();
}

FName UFGAIStateBase::TickActive(float DeltaTime)
{
	BP_TickActive(DeltaTime);

	return PendingStateName;
}

void UFGAIStateBase::OnActivated()
{
	
	BP_OnActivated();
}

void UFGAIStateBase::OnDeactivated()
{
	PendingStateName = NAME_None;

	BP_OnDeactivated();
}

void UFGAIStateBase::OnRemoved()
{
	BP_OnRemoved();
}

void UFGAIStateBase::ChangeState(FName NewPendingStateName)
{
	PendingStateName = NewPendingStateName;
}

AActor* UFGAIStateBase::GetOwner() const
{
	return Owner;
}
