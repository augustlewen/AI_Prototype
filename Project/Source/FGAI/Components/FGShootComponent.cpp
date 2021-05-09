#include "FGShootComponent.h"
#include "FGAI/FGProjectile.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"

UFGShootComponent::UFGShootComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UFGShootComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UFGShootComponent::OnProjectileHitResponse(const FFGProjectileHitResult& Result)
{
	OnShotHit.Broadcast(Result);
}


void UFGShootComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                      FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UFGShootComponent::ShootProjectile()
{
	OnShotFired.Broadcast();
	AFGProjectile* NewProjectile = GetWorld()->SpawnActor<AFGProjectile>(Projectile, ProjectileOrigin->GetComponentTransform());

	NewProjectile->OnProjectileHit.AddDynamic(this, &UFGShootComponent::OnProjectileHitResponse);
}

void UFGShootComponent::ShootProjectile(FVector AddedVelocity)
{
	OnShotFired.Broadcast();
	AFGProjectile* NewProjectile = GetWorld()->SpawnActor<AFGProjectile>(Projectile, ProjectileOrigin->GetComponentTransform());

	NewProjectile->OnProjectileHit.AddDynamic(this, &UFGShootComponent::OnProjectileHitResponse);
	NewProjectile->AddVelocity(AddedVelocity);
}

void UFGShootComponent::ShootAt(AActor* Target)
{
	OnShotFired.Broadcast();
	FTransform ProjectileTransform = ProjectileOrigin->GetComponentTransform();
	
	FVector Direction = Target->GetActorLocation() - ProjectileOrigin->GetComponentLocation();
	FRotator NewRot = UKismetMathLibrary::MakeRotFromX(Direction);
	ProjectileTransform.SetRotation(NewRot.Quaternion());
	
	AFGProjectile* NewProjectile = GetWorld()->SpawnActor<AFGProjectile>(Projectile, ProjectileTransform);

	NewProjectile->OnProjectileHit.AddDynamic(this, &UFGShootComponent::OnProjectileHitResponse);
}

