#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "FGProjectile.generated.h"

class USphereComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FFGProjectileHitResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	AActor* HitActor;
	UPROPERTY(BlueprintReadOnly)
	FVector Location;
	UPROPERTY(BlueprintReadOnly)
	bool HitDamageable;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGProjectileHitDelegate, const FFGProjectileHitResult&, HitResult);

UCLASS()
class FGAI_API AFGProjectile : public AActor
{
	GENERATED_BODY()

public:
	AFGProjectile();
	virtual void Tick(float DeltaTime) override;

	void AddVelocity(FVector AddedVelocity);

	UPROPERTY(BlueprintAssignable)
	FFGProjectileHitDelegate OnProjectileHit;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* Sphere;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	float InitialVelocity = 10000.f;
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	float Gravity = 981.f;
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	int Damage = 1;
	
	FVector Velocity;
};
