#pragma once

#include "Components/ActorComponent.h"
#include "FGVisionSensingComponent.generated.h"

class AActor;
class UFGVisionSensingTargetComponent;
class UFGVisionSensingSettings;

USTRUCT()
struct FTargetStruct
{
	GENERATED_BODY()
	
	FTraceHandle TraceHandle;
	float TimeOfNextTrace;
	bool IsSensed;
	bool BeenChecked;
};

USTRUCT(BlueprintType)
struct FFGVisionSensingResults
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	AActor* SensedActor = nullptr;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGVisionSensingDelegate, const FFGVisionSensingResults&, Results);

UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class UFGVisionSensingComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UFGVisionSensingComponent();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool IsPointInViewCone(const FVector& PointToTest, const FVector& Origin, const FVector& Direction, float DistanceMinimum) const;

	UPROPERTY(EditAnywhere, Category = Sensing)
	float SenseFrequency = 0.1f;
	UPROPERTY(Transient)
	TMap<UFGVisionSensingTargetComponent*, FTargetStruct> Targets;
	

	float GetVisionInRadians() const;

	UPROPERTY(BlueprintAssignable)
	FFGVisionSensingDelegate OnTargetSensed;

	UPROPERTY(BlueprintAssignable)
	FFGVisionSensingDelegate OnTargetLost;

	UPROPERTY(EditAnywhere, Category = Sensing)
	UFGVisionSensingSettings* SensingSettings = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sensing)
	TEnumAsByte<ETraceTypeQuery> TraceType;

	UPROPERTY(EditAnywhere, Category = Debug)
	bool bDebugDrawVision = false;

protected:
	FTraceHandle RequestTrace(FVector Start, FVector End);
};
