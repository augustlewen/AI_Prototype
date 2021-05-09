// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/StateMachine/FGAIStateMachineSheet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAIStateMachineSheet() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UFGAIStateMachineSheet_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGAIStateMachineSheet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FGAI_API UClass* Z_Construct_UClass_UFGAIStateBase_NoRegister();
// End Cross Module References
	void UFGAIStateMachineSheet::StaticRegisterNativesUFGAIStateMachineSheet()
	{
	}
	UClass* Z_Construct_UClass_UFGAIStateMachineSheet_NoRegister()
	{
		return UFGAIStateMachineSheet::StaticClass();
	}
	struct Z_Construct_UClass_UFGAIStateMachineSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAIStateMachineSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAIStateMachineSheet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/StateMachine/FGAIStateMachineSheet.h" },
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateMachineSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_AIStates_Inner = { "AIStates", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGAIStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_AIStates_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateMachineSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_AIStates = { "AIStates", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAIStateMachineSheet, AIStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_AIStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_AIStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_StartingState_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateMachineSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_StartingState = { "StartingState", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAIStateMachineSheet, StartingState), Z_Construct_UClass_UFGAIStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_StartingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_StartingState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAIStateMachineSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_AIStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_AIStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAIStateMachineSheet_Statics::NewProp_StartingState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAIStateMachineSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAIStateMachineSheet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAIStateMachineSheet_Statics::ClassParams = {
		&UFGAIStateMachineSheet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGAIStateMachineSheet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIStateMachineSheet_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGAIStateMachineSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIStateMachineSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAIStateMachineSheet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAIStateMachineSheet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAIStateMachineSheet, 3535283328);
	template<> FGAI_API UClass* StaticClass<UFGAIStateMachineSheet>()
	{
		return UFGAIStateMachineSheet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAIStateMachineSheet(Z_Construct_UClass_UFGAIStateMachineSheet, &UFGAIStateMachineSheet::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGAIStateMachineSheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAIStateMachineSheet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
