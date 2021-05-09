#include "FGCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/FGMovementComponent.h"
#include "Components/FGShootComponent.h"
#include "Components/SceneComponent.h"
#include "Components/FGDamageableComponent.h"

AFGCharacter::AFGCharacter()
{
	PrimaryActorTick.bStartWithTickEnabled = true;

	bUseControllerRotationPitch = true;
	bUseControllerRotationYaw = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->InitCapsuleSize(55.f, 96.0f);
	RootComponent = Capsule;

	// set our turn rates for input
	BaseTurnRate = 2.5f;
	BaseLookUpRate = 2.5f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(Capsule);
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	Mesh->SetOnlyOwnerSee(true);
	Mesh->SetupAttachment(FirstPersonCameraComponent);
	Mesh->bCastDynamicShadow = false;
	Mesh->CastShadow = false;
	Mesh->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	MovementComponent = CreateDefaultSubobject<UFGMovementComponent>(TEXT("MovementComponent"));
	MovementComponent->SetUpdatedComponent(Capsule);

	ProjectileOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileOrigin"));
	ProjectileOrigin->SetupAttachment(GetRootComponent());

	ShootComponent = CreateDefaultSubobject<UFGShootComponent>(TEXT("ShootComponent"));
	ShootComponent->ProjectileOrigin = ProjectileOrigin;
	ShootComponent->OnShotHit.AddDynamic(this, &AFGCharacter::OnShotHitResponse);

	DamageableComponent = CreateDefaultSubobject<UFGDamageableComponent>(TEXT("DamageableComponent"));
	DamageableComponent->SetMaxHealth(MaxBullets);
	DamageableComponent->OnDamageTaken.AddDynamic(this, &AFGCharacter::OnDamageTakenResponse);
}

void AFGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentBullets = MaxBullets;
	DamageableComponent->SetMaxHealth(MaxBullets);
}

void AFGCharacter::OnShotHitResponse(const FFGProjectileHitResult& Result)
{
	//I know this is cursed. Bullet is returned on hit, but will be negated by taking damage if the shot missed.
	CurrentBullets++;
	if(!Result.HitDamageable)
		DamageableComponent->TakeDamage(1);
}

void AFGCharacter::OnDamageTakenResponse(int Damage)
{
	CurrentBullets -= Damage;
}

void AFGCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);


	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFGCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFGCharacter::MoveRight);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFGCharacter::OnFire);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFGCharacter::OnJump);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently

	PlayerInputComponent->BindAxis("Turn", this, &AFGCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AFGCharacter::LookUpAtRate);
}

void AFGCharacter::OnFire()
{
	if(CurrentBullets == 0)
		return;
	
	if(VelocityCarriedOver == 0)
		ShootComponent->ShootProjectile();
	else
		ShootComponent->ShootProjectile(MovementComponent->GetVelocity() * VelocityCarriedOver);

	CurrentBullets--;
}

void AFGCharacter::OnJump()
{
	MovementComponent->RequestJump();
}

void AFGCharacter::MoveForward(float Value)
{
	MovementComponent->MoveForward = Value;
}

void AFGCharacter::MoveRight(float Value)
{
	MovementComponent->MoveRight = Value;
}

void AFGCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate);
}

void AFGCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate);
}
