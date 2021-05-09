// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/FGAIGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAIGameInstance() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UFGAIGameInstance_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGAIGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_FGAI();
// End Cross Module References
	void UFGAIGameInstance::StaticRegisterNativesUFGAIGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UFGAIGameInstance_NoRegister()
	{
		return UFGAIGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFGAIGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAIGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAIGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGAIGameInstance.h" },
		{ "ModuleRelativePath", "FGAIGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAIGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAIGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAIGameInstance_Statics::ClassParams = {
		&UFGAIGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFGAIGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAIGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAIGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAIGameInstance, 50178973);
	template<> FGAI_API UClass* StaticClass<UFGAIGameInstance>()
	{
		return UFGAIGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAIGameInstance(Z_Construct_UClass_UFGAIGameInstance, &UFGAIGameInstance::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGAIGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAIGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
