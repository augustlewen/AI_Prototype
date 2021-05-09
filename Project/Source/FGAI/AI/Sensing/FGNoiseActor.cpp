#include "FGNoiseActor.h"

#include "FGAI/FGAIGameInstance.h"
#include "Kismet/KismetSystemLibrary.h"

AFGNoiseActor::AFGNoiseActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
}

void AFGNoiseActor::SpawnNoise(FNoiseSettings Settings)
{
	FActorSpawnParameters SpawnParameters;
	FRotator Rotation(0.f, 0.f, 0.f);
	
	AFGNoiseActor* NoiseActor = Settings.NoiseInstigator->GetWorld()->SpawnActor<AFGNoiseActor>(Settings.Position, Rotation, SpawnParameters);
	NoiseActor->SetSettings(Settings);
	NoiseActor->StartSound();
}

void AFGNoiseActor::SetSettings(FNoiseSettings Settings)
{
	NoiseInstigator = Settings.NoiseInstigator;
	StartRadius = Settings.StartRadius;
	EndRadius  = Settings.EndRadius;
	Duration = Settings.Duration;
}

void AFGNoiseActor::StartSound()
{
	SetLifeSpan(Duration);
	CurrentRadius = StartRadius;
	
	UFGAIGameInstance* GameInstance = GetWorld()->GetGameInstance<UFGAIGameInstance>();
	if(GameInstance != nullptr)
		GameInstance->NoiseActors.Add(this);
	
	int Count = GameInstance->NoiseActors.Num();
}

float AFGNoiseActor::GetCurrentRadius() const
{
	return CurrentRadius;
}

void AFGNoiseActor::BeginPlay()
{
	Super::BeginPlay();
}

void AFGNoiseActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UWorld* World = GetWorld();
	if(World == nullptr)
		return;
	
	UFGAIGameInstance* GameInstance = World->GetGameInstance<UFGAIGameInstance>();
	if(GameInstance != nullptr)
	{
		GameInstance->NoiseActors.Remove(this);
		int Count = GameInstance->NoiseActors.Num();
	}
}

void AFGNoiseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(CurrentRadius < EndRadius)
	{
		CurrentRadius += ExpansionRate * DeltaTime;
		if(CurrentRadius > EndRadius)
			CurrentRadius = EndRadius;
	}
}

