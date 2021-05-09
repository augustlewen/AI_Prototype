#pragma once

#include "GameFramework/Pawn.h"
#include "FGEnemy.generated.h"

class USkeletalMeshComponent;
class UCapsuleComponent;
class UCameraComponent;
class UFGVisionSensingComponent;
class UFGNavMovementComponent;
class UFGShootComponent;
class UFGDamageableComponent;

UCLASS()
class AFGEnemy : public APawn
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleDefaultsOnly, Category=Collision)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Vision)
	UFGVisionSensingComponent* VisionSensingComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
	UFGNavMovementComponent* NavMovementComponent;

	UPROPERTY(VisibleAnywhere, Category = Shooting)
	USceneComponent* ProjectileOrigin;
	UPROPERTY(VisibleAnywhere, Category = Shooting)
	UFGShootComponent* ShootComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Health)
	UFGDamageableComponent* DamageableComponent;

	AFGEnemy();

	virtual float GetDefaultHalfHeight() const override;

protected:
	virtual void BeginPlay();

	UCapsuleComponent* GetCapsule() const { return Capsule; }
};

