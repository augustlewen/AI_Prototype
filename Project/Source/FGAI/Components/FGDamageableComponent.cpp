#include "FGDamageableComponent.h"

UFGDamageableComponent::UFGDamageableComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UFGDamageableComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
}

void UFGDamageableComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UFGDamageableComponent::TakeDamage(int Damage)
{
	OnDamageTaken.Broadcast(Damage);
	CurrentHealth -= Damage;
	
	if(CurrentHealth <= 0)
	{
		CurrentHealth = 0;
		OnKilled.Broadcast();
	}
}

void UFGDamageableComponent::SetMaxHealth(int Health)
{
	MaxHealth = Health;
}



