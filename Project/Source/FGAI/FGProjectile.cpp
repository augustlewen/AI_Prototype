#include "FGProjectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/FGDamageableComponent.h"

AFGProjectile::AFGProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetCollisionProfileName("BlockAllDynamic");
	RootComponent = Sphere;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Sphere);
	Mesh->SetCollisionProfileName("NoCollision");
}

void AFGProjectile::BeginPlay()
{
	Super::BeginPlay();

	Velocity = Sphere->GetForwardVector() * InitialVelocity;
}

void AFGProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Velocity += FVector::DownVector * Gravity * DeltaTime;
	FHitResult HitResult;
	
	AddActorWorldOffset(Velocity * DeltaTime, true, &HitResult);
	if(HitResult.bBlockingHit)
	{
		FFGProjectileHitResult Result;
		Result.HitActor = HitResult.GetActor();
		Result.Location = HitResult.Location;

		UFGDamageableComponent* DamageableComponent = nullptr;
		if(Result.HitActor != nullptr)
			DamageableComponent = Result.HitActor->FindComponentByClass<UFGDamageableComponent>();
		
		if(DamageableComponent != nullptr)
		{
			Result.HitDamageable = true;
			DamageableComponent->TakeDamage(Damage);
		}
		else
			Result.HitDamageable = false;
		
		OnProjectileHit.Broadcast(Result);
		Destroy();
	}
}

void AFGProjectile::AddVelocity(FVector AddedVelocity)
{
	Velocity += AddedVelocity;
}

