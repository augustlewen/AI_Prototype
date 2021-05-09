#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGAI/FGProjectile.h"

#include "FGShootComponent.generated.h"

class AFGProjectile;
class USceneComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFGShotFiredDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGShotHitDelegate, const FFGProjectileHitResult&, HitResult);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FGAI_API UFGShootComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFGShootComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void ShootProjectile();
	void ShootProjectile(FVector AddedVelocity);
	UFUNCTION(BlueprintCallable)
	void ShootAt(AActor* Target);

	UPROPERTY(BlueprintAssignable)
	FFGShotFiredDelegate OnShotFired;
	UPROPERTY(BlueprintAssignable)
	FFGShotHitDelegate OnShotHit;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AFGProjectile> Projectile;
	USceneComponent* ProjectileOrigin;

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnProjectileHitResponse(const FFGProjectileHitResult& Result);
};
