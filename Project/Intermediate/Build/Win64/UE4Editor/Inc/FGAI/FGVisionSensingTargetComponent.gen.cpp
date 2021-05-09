// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/Sensing/FGVisionSensingTargetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVisionSensingTargetComponent() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingTargetComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingTargetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FGAI();
// End Cross Module References
	void UFGVisionSensingTargetComponent::StaticRegisterNativesUFGVisionSensingTargetComponent()
	{
	}
	UClass* Z_Construct_UClass_UFGVisionSensingTargetComponent_NoRegister()
	{
		return UFGVisionSensingTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGVisionSensingTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGVisionSensingTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/Sensing/FGVisionSensingTargetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingTargetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGVisionSensingTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGVisionSensingTargetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGVisionSensingTargetComponent_Statics::ClassParams = {
		&UFGVisionSensingTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingTargetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingTargetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGVisionSensingTargetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGVisionSensingTargetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGVisionSensingTargetComponent, 3070807396);
	template<> FGAI_API UClass* StaticClass<UFGVisionSensingTargetComponent>()
	{
		return UFGVisionSensingTargetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGVisionSensingTargetComponent(Z_Construct_UClass_UFGVisionSensingTargetComponent, &UFGVisionSensingTargetComponent::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGVisionSensingTargetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGVisionSensingTargetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
