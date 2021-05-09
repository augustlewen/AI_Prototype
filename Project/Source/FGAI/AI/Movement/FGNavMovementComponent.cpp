#include "FGNavMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "NavigationSystem.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

UFGNavMovementComponent::UFGNavMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UFGNavMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bHasRequestedVelocity)
		return;

	GetOwner()->AddActorWorldOffset(RequestedVelocity * DeltaTime);
	
	FVector Direction = RequestedVelocity;
	Direction.Z = 0;
	FRotator TargetRot = UKismetMathLibrary::MakeRotFromX(Direction);
	FRotator NewRot = UKismetMathLibrary::RInterpTo_Constant(GetOwner()->GetActorRotation(), TargetRot, DeltaTime, 270.f);
	GetOwner()->SetActorRotation(NewRot);

	// Then place ourselves on the navmesh floor
	FNavLocation NavFloorLocation;
	if (FindNavFloor(GetOwner()->GetActorLocation(), NavFloorLocation))
	{
		float FloorHeight = NavFloorLocation.Location.Z;
		FVector CurrentLocation = GetOwner()->GetActorLocation();
		CurrentLocation.Z = FloorHeight + GetPawnOwner()->GetDefaultHalfHeight();
		GetOwner()->SetActorLocation(CurrentLocation);
	}
}

void UFGNavMovementComponent::RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed)
{
	RequestedVelocity = MoveVelocity.GetSafeNormal() * MovementSpeed;
	bHasRequestedVelocity = true;
}

void UFGNavMovementComponent::RequestPathMove(const FVector& MoveInput)
{
	
}

bool UFGNavMovementComponent::CanStartPathFollowing() const
{
	return true;
}

bool UFGNavMovementComponent::CanStopPathFollowing() const
{
	return true;
}

void UFGNavMovementComponent::StopActiveMovement()
{
	Super::StopActiveMovement();

	RequestedVelocity = FVector::ZeroVector;
	bHasRequestedVelocity = false;
}

float UFGNavMovementComponent::GetPathFollowingBrakingDistance(float MaxSpeed) const
{
	return 1.0f;
}

const INavigationDataInterface* UFGNavMovementComponent::GetNavData() const
{
	const UWorld* World = GetWorld();
	if (World == nullptr || World->GetNavigationSystem() == nullptr)
	{
		return nullptr;
	}

	const INavigationDataInterface* NavData = FNavigationSystem::GetNavDataForActor(*GetOwner());

	return NavData;
}

bool UFGNavMovementComponent::FindNavFloor(const FVector& TestLocation, FNavLocation& NavFloorLocation) const
{
	const INavigationDataInterface* NavData = GetNavData();
	if (NavData == nullptr)
	{
		return false;
	}

	const FNavAgentProperties& AgentProps = GetPawnOwner()->GetNavAgentPropertiesRef();
	const float SearchRadius = AgentProps.AgentRadius * 2.0f;
	const float SearchHeight = AgentProps.AgentHeight * AgentProps.NavWalkingSearchHeightScale;

	return NavData->ProjectPoint(TestLocation - FVector(0.0f, 0.0f, GetPawnOwner()->GetDefaultHalfHeight()), NavFloorLocation, FVector(SearchRadius, SearchRadius, SearchHeight));
}

bool UFGNavMovementComponent::IsMoving() const
{
	return bHasRequestedVelocity;
}
