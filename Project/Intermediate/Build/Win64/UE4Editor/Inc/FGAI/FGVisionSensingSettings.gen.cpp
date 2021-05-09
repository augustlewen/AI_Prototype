// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/Sensing/FGVisionSensingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVisionSensingSettings() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingSettings_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_FGAI();
// End Cross Module References
	void UFGVisionSensingSettings::StaticRegisterNativesUFGVisionSensingSettings()
	{
	}
	UClass* Z_Construct_UClass_UFGVisionSensingSettings_NoRegister()
	{
		return UFGVisionSensingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGVisionSensingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMinimum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceMinimum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGVisionSensingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Sensing/FGVisionSensingSettings.h" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Sensing" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVisionSensingSettings, Angle), METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_DistanceMinimum_MetaData[] = {
		{ "Category", "Sensing" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_DistanceMinimum = { "DistanceMinimum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVisionSensingSettings, DistanceMinimum), METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_DistanceMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_DistanceMinimum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGVisionSensingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVisionSensingSettings_Statics::NewProp_DistanceMinimum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGVisionSensingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGVisionSensingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGVisionSensingSettings_Statics::ClassParams = {
		&UFGVisionSensingSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGVisionSensingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGVisionSensingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGVisionSensingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGVisionSensingSettings, 1735688765);
	template<> FGAI_API UClass* StaticClass<UFGVisionSensingSettings>()
	{
		return UFGVisionSensingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGVisionSensingSettings(Z_Construct_UClass_UFGVisionSensingSettings, &UFGVisionSensingSettings::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGVisionSensingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGVisionSensingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
