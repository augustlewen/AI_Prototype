// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/Sensing/FGNoiseActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNoiseActor() {}
// Cross Module References
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FNoiseSettings();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FGAI_API UClass* Z_Construct_UClass_AFGNoiseActor_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_AFGNoiseActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FNoiseSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FGAI_API uint32 Get_Z_Construct_UScriptStruct_FNoiseSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoiseSettings, Z_Construct_UPackage__Script_FGAI(), TEXT("NoiseSettings"), sizeof(FNoiseSettings), Get_Z_Construct_UScriptStruct_FNoiseSettings_Hash());
	}
	return Singleton;
}
template<> FGAI_API UScriptStruct* StaticStruct<FNoiseSettings>()
{
	return FNoiseSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNoiseSettings(FNoiseSettings::StaticStruct, TEXT("/Script/FGAI"), TEXT("NoiseSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FGAI_StaticRegisterNativesFNoiseSettings
{
	FScriptStruct_FGAI_StaticRegisterNativesFNoiseSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NoiseSettings")),new UScriptStruct::TCppStructOps<FNoiseSettings>);
	}
} ScriptStruct_FGAI_StaticRegisterNativesFNoiseSettings;
	struct Z_Construct_UScriptStruct_FNoiseSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoiseSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_NoiseInstigator_MetaData[] = {
		{ "Category", "NoiseSettings" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoiseSettings, NoiseInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_NoiseInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_NoiseInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "NoiseSettings" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoiseSettings, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_StartRadius_MetaData[] = {
		{ "Category", "NoiseSettings" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_StartRadius = { "StartRadius", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoiseSettings, StartRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_StartRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_StartRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_EndRadius_MetaData[] = {
		{ "Category", "NoiseSettings" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_EndRadius = { "EndRadius", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoiseSettings, EndRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_EndRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_EndRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "NoiseSettings" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoiseSettings, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoiseSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_NoiseInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_StartRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_EndRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseSettings_Statics::NewProp_Duration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoiseSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
		nullptr,
		&NewStructOps,
		"NoiseSettings",
		sizeof(FNoiseSettings),
		alignof(FNoiseSettings),
		Z_Construct_UScriptStruct_FNoiseSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoiseSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNoiseSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FGAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NoiseSettings"), sizeof(FNoiseSettings), Get_Z_Construct_UScriptStruct_FNoiseSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNoiseSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNoiseSettings_Hash() { return 3740478888U; }
	DEFINE_FUNCTION(AFGNoiseActor::execSpawnNoise)
	{
		P_GET_STRUCT(FNoiseSettings,Z_Param_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		AFGNoiseActor::SpawnNoise(Z_Param_Settings);
		P_NATIVE_END;
	}
	void AFGNoiseActor::StaticRegisterNativesAFGNoiseActor()
	{
		UClass* Class = AFGNoiseActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnNoise", &AFGNoiseActor::execSpawnNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics
	{
		struct FGNoiseActor_eventSpawnNoise_Parms
		{
			FNoiseSettings Settings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGNoiseActor_eventSpawnNoise_Parms, Settings), Z_Construct_UScriptStruct_FNoiseSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNoiseActor, nullptr, "SpawnNoise", nullptr, nullptr, sizeof(FGNoiseActor_eventSpawnNoise_Parms), Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNoiseActor_SpawnNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNoiseActor_SpawnNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGNoiseActor_NoRegister()
	{
		return AFGNoiseActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGNoiseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGNoiseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGNoiseActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGNoiseActor_SpawnNoise, "SpawnNoise" }, // 1623490501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Sensing/FGNoiseActor.h" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator_MetaData[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNoiseActor, NoiseInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius_MetaData[] = {
		{ "Category", "FGNoiseActor" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius = { "StartRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNoiseActor, StartRadius), METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_EndRadius_MetaData[] = {
		{ "Category", "FGNoiseActor" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_EndRadius = { "EndRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNoiseActor, EndRadius), METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_EndRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_EndRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "FGNoiseActor" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNoiseActor, Duration), METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNoiseActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGNoiseActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_EndRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGNoiseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGNoiseActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGNoiseActor_Statics::ClassParams = {
		&AFGNoiseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGNoiseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGNoiseActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGNoiseActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGNoiseActor, 864316588);
	template<> FGAI_API UClass* StaticClass<AFGNoiseActor>()
	{
		return AFGNoiseActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGNoiseActor(Z_Construct_UClass_AFGNoiseActor, &AFGNoiseActor::StaticClass, TEXT("/Script/FGAI"), TEXT("AFGNoiseActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGNoiseActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
