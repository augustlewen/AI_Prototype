// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/Components/FGMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMovementComponent() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UFGMovementComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_FGAI();
// End Cross Module References
	void UFGMovementComponent::StaticRegisterNativesUFGMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UFGMovementComponent_NoRegister()
	{
		return UFGMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelerationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirAccelerationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirAccelerationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurningFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirTurningFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirTurningFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundCheckLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundCheckLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallJumpStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallJumpStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpRequestDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpRequestDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallJumpUpWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallJumpUpWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallJumpOutWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallJumpOutWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallJumpLookWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallJumpLookWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallRunDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallRunDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallRunningGravityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallRunningGravityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredSqrWallMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredSqrWallMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredWallLookAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredWallLookAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOfWallRunSlowdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOfWallRunSlowdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowdownAmountPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowdownAmountPerSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/FGMovementComponent.h" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AccelerationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AccelerationSpeed = { "AccelerationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, AccelerationSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AccelerationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AccelerationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirAccelerationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirAccelerationSpeed = { "AirAccelerationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, AirAccelerationSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirAccelerationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirAccelerationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SpeedFriction_MetaData[] = {
		{ "Category", "Friction" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SpeedFriction = { "SpeedFriction", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, SpeedFriction), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SpeedFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SpeedFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_TurningFriction_MetaData[] = {
		{ "Category", "Friction" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_TurningFriction = { "TurningFriction", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, TurningFriction), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_TurningFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_TurningFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirTurningFriction_MetaData[] = {
		{ "Category", "Friction" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirTurningFriction = { "AirTurningFriction", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, AirTurningFriction), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirTurningFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirTurningFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StopFriction_MetaData[] = {
		{ "Category", "Friction" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StopFriction = { "StopFriction", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, StopFriction), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StopFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StopFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundDot_MetaData[] = {
		{ "Category", "GroundCheck" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundDot = { "GroundDot", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, GroundDot), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundCheckLength_MetaData[] = {
		{ "Category", "GroundCheck" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundCheckLength = { "GroundCheckLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, GroundCheckLength), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundCheckLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundCheckLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, Gravity), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpStrength_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpStrength = { "JumpStrength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, JumpStrength), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpStrength_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpStrength = { "WallJumpStrength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, WallJumpStrength), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpRequestDuration_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpRequestDuration = { "JumpRequestDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, JumpRequestDuration), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpRequestDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpRequestDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpUpWeight_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpUpWeight = { "WallJumpUpWeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, WallJumpUpWeight), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpUpWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpUpWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpOutWeight_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpOutWeight = { "WallJumpOutWeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, WallJumpOutWeight), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpOutWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpOutWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpLookWeight_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpLookWeight = { "WallJumpLookWeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, WallJumpLookWeight), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpLookWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpLookWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunDuration_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunDuration = { "WallRunDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, WallRunDuration), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunningGravityMultiplier_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunningGravityMultiplier = { "WallRunningGravityMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, WallRunningGravityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunningGravityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunningGravityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredSqrWallMagnitude_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredSqrWallMagnitude = { "RequiredSqrWallMagnitude", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, RequiredSqrWallMagnitude), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredSqrWallMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredSqrWallMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredWallLookAlignment_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredWallLookAlignment = { "RequiredWallLookAlignment", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, RequiredWallLookAlignment), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredWallLookAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredWallLookAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StartOfWallRunSlowdown_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StartOfWallRunSlowdown = { "StartOfWallRunSlowdown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, StartOfWallRunSlowdown), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StartOfWallRunSlowdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StartOfWallRunSlowdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SlowdownAmountPerSecond_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "Components/FGMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SlowdownAmountPerSecond = { "SlowdownAmountPerSecond", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMovementComponent, SlowdownAmountPerSecond), METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SlowdownAmountPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SlowdownAmountPerSecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AccelerationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirAccelerationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SpeedFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_TurningFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_AirTurningFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StopFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_GroundCheckLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_JumpRequestDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpUpWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpOutWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallJumpLookWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_WallRunningGravityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredSqrWallMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_RequiredWallLookAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_StartOfWallRunSlowdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMovementComponent_Statics::NewProp_SlowdownAmountPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMovementComponent_Statics::ClassParams = {
		&UFGMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMovementComponent, 2551614574);
	template<> FGAI_API UClass* StaticClass<UFGMovementComponent>()
	{
		return UFGMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMovementComponent(Z_Construct_UClass_UFGMovementComponent, &UFGMovementComponent::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
