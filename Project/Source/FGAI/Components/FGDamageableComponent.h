#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGDamageableComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFGKilledDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGDamageTakenDelegate, int, DamageTaken);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FGAI_API UFGDamageableComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UFGDamageableComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void TakeDamage(int Damage);

	void SetMaxHealth(int Health);

	UPROPERTY(BlueprintAssignable)
	FFGKilledDelegate OnKilled;
	UPROPERTY(BlueprintAssignable)
	FFGDamageTakenDelegate OnDamageTaken;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	int MaxHealth = 1;
	int CurrentHealth;
};
