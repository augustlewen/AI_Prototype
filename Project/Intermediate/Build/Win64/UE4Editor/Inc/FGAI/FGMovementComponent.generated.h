// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGAI_FGMovementComponent_generated_h
#error "FGMovementComponent.generated.h already included, missing '#pragma once' in FGMovementComponent.h"
#endif
#define FGAI_FGMovementComponent_generated_h

#define Project_Source_FGAI_Components_FGMovementComponent_h_11_SPARSE_DATA
#define Project_Source_FGAI_Components_FGMovementComponent_h_11_RPC_WRAPPERS
#define Project_Source_FGAI_Components_FGMovementComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Source_FGAI_Components_FGMovementComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMovementComponent(); \
	friend struct Z_Construct_UClass_UFGMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFGMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGMovementComponent)


#define Project_Source_FGAI_Components_FGMovementComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUFGMovementComponent(); \
	friend struct Z_Construct_UClass_UFGMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFGMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGMovementComponent)


#define Project_Source_FGAI_Components_FGMovementComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMovementComponent(UFGMovementComponent&&); \
	NO_API UFGMovementComponent(const UFGMovementComponent&); \
public:


#define Project_Source_FGAI_Components_FGMovementComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMovementComponent(UFGMovementComponent&&); \
	NO_API UFGMovementComponent(const UFGMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGMovementComponent)


#define Project_Source_FGAI_Components_FGMovementComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AccelerationSpeed() { return STRUCT_OFFSET(UFGMovementComponent, AccelerationSpeed); } \
	FORCEINLINE static uint32 __PPO__AirAccelerationSpeed() { return STRUCT_OFFSET(UFGMovementComponent, AirAccelerationSpeed); } \
	FORCEINLINE static uint32 __PPO__SpeedFriction() { return STRUCT_OFFSET(UFGMovementComponent, SpeedFriction); } \
	FORCEINLINE static uint32 __PPO__TurningFriction() { return STRUCT_OFFSET(UFGMovementComponent, TurningFriction); } \
	FORCEINLINE static uint32 __PPO__AirTurningFriction() { return STRUCT_OFFSET(UFGMovementComponent, AirTurningFriction); } \
	FORCEINLINE static uint32 __PPO__StopFriction() { return STRUCT_OFFSET(UFGMovementComponent, StopFriction); } \
	FORCEINLINE static uint32 __PPO__GroundDot() { return STRUCT_OFFSET(UFGMovementComponent, GroundDot); } \
	FORCEINLINE static uint32 __PPO__GroundCheckLength() { return STRUCT_OFFSET(UFGMovementComponent, GroundCheckLength); } \
	FORCEINLINE static uint32 __PPO__Gravity() { return STRUCT_OFFSET(UFGMovementComponent, Gravity); } \
	FORCEINLINE static uint32 __PPO__JumpStrength() { return STRUCT_OFFSET(UFGMovementComponent, JumpStrength); } \
	FORCEINLINE static uint32 __PPO__WallJumpStrength() { return STRUCT_OFFSET(UFGMovementComponent, WallJumpStrength); } \
	FORCEINLINE static uint32 __PPO__JumpRequestDuration() { return STRUCT_OFFSET(UFGMovementComponent, JumpRequestDuration); } \
	FORCEINLINE static uint32 __PPO__WallJumpUpWeight() { return STRUCT_OFFSET(UFGMovementComponent, WallJumpUpWeight); } \
	FORCEINLINE static uint32 __PPO__WallJumpOutWeight() { return STRUCT_OFFSET(UFGMovementComponent, WallJumpOutWeight); } \
	FORCEINLINE static uint32 __PPO__WallJumpLookWeight() { return STRUCT_OFFSET(UFGMovementComponent, WallJumpLookWeight); } \
	FORCEINLINE static uint32 __PPO__WallRunDuration() { return STRUCT_OFFSET(UFGMovementComponent, WallRunDuration); } \
	FORCEINLINE static uint32 __PPO__WallRunningGravityMultiplier() { return STRUCT_OFFSET(UFGMovementComponent, WallRunningGravityMultiplier); } \
	FORCEINLINE static uint32 __PPO__RequiredSqrWallMagnitude() { return STRUCT_OFFSET(UFGMovementComponent, RequiredSqrWallMagnitude); } \
	FORCEINLINE static uint32 __PPO__RequiredWallLookAlignment() { return STRUCT_OFFSET(UFGMovementComponent, RequiredWallLookAlignment); } \
	FORCEINLINE static uint32 __PPO__StartOfWallRunSlowdown() { return STRUCT_OFFSET(UFGMovementComponent, StartOfWallRunSlowdown); } \
	FORCEINLINE static uint32 __PPO__SlowdownAmountPerSecond() { return STRUCT_OFFSET(UFGMovementComponent, SlowdownAmountPerSecond); }


#define Project_Source_FGAI_Components_FGMovementComponent_h_8_PROLOG
#define Project_Source_FGAI_Components_FGMovementComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_SPARSE_DATA \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_RPC_WRAPPERS \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_INCLASS \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_Components_FGMovementComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_SPARSE_DATA \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_Components_FGMovementComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UFGMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_Components_FGMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
