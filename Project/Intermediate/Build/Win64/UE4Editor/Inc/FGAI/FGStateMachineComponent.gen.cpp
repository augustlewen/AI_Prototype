// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/StateMachine/FGStateMachineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGStateMachineComponent() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UFGStateMachineComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGStateMachineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	FGAI_API UClass* Z_Construct_UClass_UFGAIStateMachineSheet_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGAIStateBase_NoRegister();
// End Cross Module References
	void UFGStateMachineComponent::StaticRegisterNativesUFGStateMachineComponent()
	{
	}
	UClass* Z_Construct_UClass_UFGStateMachineComponent_NoRegister()
	{
		return UFGStateMachineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGStateMachineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIStateMachineSheet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIStateMachineSheet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGStateMachineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGStateMachineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "AI/StateMachine/FGStateMachineComponent.h" },
		{ "ModuleRelativePath", "AI/StateMachine/FGStateMachineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStateMachineSheet_MetaData[] = {
		{ "Category", "FGStateMachineComponent" },
		{ "ModuleRelativePath", "AI/StateMachine/FGStateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStateMachineSheet = { "AIStateMachineSheet", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGStateMachineComponent, AIStateMachineSheet), Z_Construct_UClass_UFGAIStateMachineSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStateMachineSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStateMachineSheet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStates_Inner = { "AIStates", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGAIStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStates_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/StateMachine/FGStateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStates = { "AIStates", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGStateMachineComponent, AIStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_CurrentState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/StateMachine/FGStateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGStateMachineComponent, CurrentState), Z_Construct_UClass_UFGAIStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGStateMachineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStateMachineSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_AIStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGStateMachineComponent_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGStateMachineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGStateMachineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGStateMachineComponent_Statics::ClassParams = {
		&UFGStateMachineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGStateMachineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGStateMachineComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGStateMachineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGStateMachineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGStateMachineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGStateMachineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGStateMachineComponent, 58059181);
	template<> FGAI_API UClass* StaticClass<UFGStateMachineComponent>()
	{
		return UFGStateMachineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGStateMachineComponent(Z_Construct_UClass_UFGStateMachineComponent, &UFGStateMachineComponent::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGStateMachineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGStateMachineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
