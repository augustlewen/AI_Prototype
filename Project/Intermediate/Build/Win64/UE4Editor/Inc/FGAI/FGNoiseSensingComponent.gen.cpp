// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/Sensing/FGNoiseSensingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNoiseSensingComponent() {}
// Cross Module References
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FFGNoiseSenseResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGNoiseSensingComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGNoiseSensingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics
	{
		struct _Script_FGAI_eventFGNoiseSensingDelegate_Parms
		{
			FFGNoiseSenseResult SenseResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenseResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::NewProp_SenseResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::NewProp_SenseResult = { "SenseResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FGAI_eventFGNoiseSensingDelegate_Parms, SenseResult), Z_Construct_UScriptStruct_FFGNoiseSenseResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::NewProp_SenseResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::NewProp_SenseResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::NewProp_SenseResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FGAI, nullptr, "FGNoiseSensingDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FGAI_eventFGNoiseSensingDelegate_Parms), Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FFGNoiseSenseResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FGAI_API uint32 Get_Z_Construct_UScriptStruct_FFGNoiseSenseResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGNoiseSenseResult, Z_Construct_UPackage__Script_FGAI(), TEXT("FGNoiseSenseResult"), sizeof(FFGNoiseSenseResult), Get_Z_Construct_UScriptStruct_FFGNoiseSenseResult_Hash());
	}
	return Singleton;
}
template<> FGAI_API UScriptStruct* StaticStruct<FFGNoiseSenseResult>()
{
	return FFGNoiseSenseResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGNoiseSenseResult(FFGNoiseSenseResult::StaticStruct, TEXT("/Script/FGAI"), TEXT("FGNoiseSenseResult"), false, nullptr, nullptr);
static struct FScriptStruct_FGAI_StaticRegisterNativesFFGNoiseSenseResult
{
	FScriptStruct_FGAI_StaticRegisterNativesFFGNoiseSenseResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGNoiseSenseResult")),new UScriptStruct::TCppStructOps<FFGNoiseSenseResult>);
	}
} ScriptStruct_FGAI_StaticRegisterNativesFFGNoiseSenseResult;
	struct Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseSensingComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGNoiseSenseResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::NewProp_SensedActor_MetaData[] = {
		{ "Category", "FGNoiseSenseResult" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::NewProp_SensedActor = { "SensedActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGNoiseSenseResult, SensedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::NewProp_SensedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::NewProp_SensedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::NewProp_SensedActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
		nullptr,
		&NewStructOps,
		"FGNoiseSenseResult",
		sizeof(FFGNoiseSenseResult),
		alignof(FFGNoiseSenseResult),
		Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGNoiseSenseResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGNoiseSenseResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FGAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGNoiseSenseResult"), sizeof(FFGNoiseSenseResult), Get_Z_Construct_UScriptStruct_FFGNoiseSenseResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGNoiseSenseResult_Hash() { return 2059801758U; }
	void UFGNoiseSensingComponent::StaticRegisterNativesUFGNoiseSensingComponent()
	{
	}
	UClass* Z_Construct_UClass_UFGNoiseSensingComponent_NoRegister()
	{
		return UFGNoiseSensingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGNoiseSensingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNoiseSensed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNoiseSensed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SenseRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SenseFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGNoiseSensingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNoiseSensingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/Sensing/FGNoiseSensingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseSensingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_OnNoiseSensed_MetaData[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_OnNoiseSensed = { "OnNoiseSensed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGNoiseSensingComponent, OnNoiseSensed), Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_OnNoiseSensed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_OnNoiseSensed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseRadius_MetaData[] = {
		{ "Category", "FGNoiseSensingComponent" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseRadius = { "SenseRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGNoiseSensingComponent, SenseRadius), METADATA_PARAMS(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseFrequency_MetaData[] = {
		{ "Category", "FGNoiseSensingComponent" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseFrequency = { "SenseFrequency", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGNoiseSensingComponent, SenseFrequency), METADATA_PARAMS(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseFrequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGNoiseSensingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_OnNoiseSensed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_SenseFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGNoiseSensingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGNoiseSensingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGNoiseSensingComponent_Statics::ClassParams = {
		&UFGNoiseSensingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGNoiseSensingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGNoiseSensingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGNoiseSensingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGNoiseSensingComponent, 2693780168);
	template<> FGAI_API UClass* StaticClass<UFGNoiseSensingComponent>()
	{
		return UFGNoiseSensingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGNoiseSensingComponent(Z_Construct_UClass_UFGNoiseSensingComponent, &UFGNoiseSensingComponent::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGNoiseSensingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGNoiseSensingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
