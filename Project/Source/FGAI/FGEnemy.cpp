#include "FGEnemy.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AI/Sensing/FGVisionSensingComponent.h"
#include "AI/Movement/FGNavMovementComponent.h"
#include "Components/FGShootComponent.h"
#include "Components/SceneComponent.h"
#include "Components/FGDamageableComponent.h"

AFGEnemy::AFGEnemy()
{
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	RootComponent = Capsule;
	// Set size for collision capsule
	Capsule->InitCapsuleSize(55.f, 96.0f);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	Mesh->SetupAttachment(Capsule);
	Mesh->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));

	VisionSensingComponent = CreateDefaultSubobject<UFGVisionSensingComponent>(TEXT("VisionSensing"));
	NavMovementComponent = CreateDefaultSubobject<UFGNavMovementComponent>(TEXT("NavMovementComponent"));

	ProjectileOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileOrigin"));
	ProjectileOrigin->SetupAttachment(GetRootComponent());

	ShootComponent = CreateDefaultSubobject<UFGShootComponent>(TEXT("ShootComponent"));
	ShootComponent->ProjectileOrigin = ProjectileOrigin;

	DamageableComponent = CreateDefaultSubobject<UFGDamageableComponent>(TEXT("DamageableComponent"));
}

float AFGEnemy::GetDefaultHalfHeight() const
{
	// Don't scale...
	return Capsule->GetScaledCapsuleHalfHeight();
}

void AFGEnemy::BeginPlay()
{
	Super::BeginPlay();

}
