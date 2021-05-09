#pragma once

#include "GameFramework/Pawn.h"
#include "FGAI/FGProjectile.h"
#include "FGCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCapsuleComponent;
class UCameraComponent;
class UFGMovementComponent;
class UFGShootComponent;
class UFGDamageableComponent;
struct FFGProjectileHitResult;

UCLASS()
class AFGCharacter : public APawn
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleDefaultsOnly, Category=Collision)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, Category = Movement)
	UFGMovementComponent* MovementComponent;

	UPROPERTY(VisibleAnywhere, Category = Shooting)
	USceneComponent* ProjectileOrigin;
	UPROPERTY(VisibleAnywhere, Category = Shooting)
	UFGShootComponent* ShootComponent;

	UPROPERTY(VisibleAnywhere, Category = Health)
	UFGDamageableComponent* DamageableComponent;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	AFGCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay();

	UFUNCTION()
	void OnShotHitResponse(const FFGProjectileHitResult& Result);
	UFUNCTION()
	void OnDamageTakenResponse(int Damage);

	UPROPERTY(EditAnywhere, Category = Shooting)
	float VelocityCarriedOver = 0.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Bullets)
	int MaxBullets = 5;
	UPROPERTY(BlueprintReadOnly)
	int CurrentBullets;

	FVector InputVector = FVector::ZeroVector;
	FVector LookVector = FVector::ZeroVector;

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	void OnFire();

	void OnJump();
	
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

public:
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	UCapsuleComponent* GetCapsule() const { return Capsule; }

};

