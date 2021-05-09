// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/StateMachine/FGAIStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAIStateBase() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UFGAIStateBase_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGAIStateBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFGAIStateBase::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFGAIStateBase::execChangeState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewPendingStateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeState(Z_Param_NewPendingStateName);
		P_NATIVE_END;
	}
	static FName NAME_UFGAIStateBase_BP_OnActivated = FName(TEXT("BP_OnActivated"));
	void UFGAIStateBase::BP_OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGAIStateBase_BP_OnActivated),NULL);
	}
	static FName NAME_UFGAIStateBase_BP_OnDeactivated = FName(TEXT("BP_OnDeactivated"));
	void UFGAIStateBase::BP_OnDeactivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGAIStateBase_BP_OnDeactivated),NULL);
	}
	static FName NAME_UFGAIStateBase_BP_OnRemoved = FName(TEXT("BP_OnRemoved"));
	void UFGAIStateBase::BP_OnRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGAIStateBase_BP_OnRemoved),NULL);
	}
	static FName NAME_UFGAIStateBase_BP_Setup = FName(TEXT("BP_Setup"));
	void UFGAIStateBase::BP_Setup()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGAIStateBase_BP_Setup),NULL);
	}
	static FName NAME_UFGAIStateBase_BP_TickActive = FName(TEXT("BP_TickActive"));
	void UFGAIStateBase::BP_TickActive(float DeltaTime)
	{
		FGAIStateBase_eventBP_TickActive_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UFGAIStateBase_BP_TickActive),&Parms);
	}
	void UFGAIStateBase::StaticRegisterNativesUFGAIStateBase()
	{
		UClass* Class = UFGAIStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeState", &UFGAIStateBase::execChangeState },
			{ "GetOwner", &UFGAIStateBase::execGetOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGAIStateBase_BP_OnActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAIStateBase_BP_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAIStateBase_BP_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAIStateBase, nullptr, "BP_OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAIStateBase_BP_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_BP_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAIStateBase_BP_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAIStateBase_BP_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAIStateBase_BP_OnDeactivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAIStateBase_BP_OnDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAIStateBase_BP_OnDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAIStateBase, nullptr, "BP_OnDeactivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAIStateBase_BP_OnDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_BP_OnDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAIStateBase_BP_OnDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAIStateBase_BP_OnDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAIStateBase_BP_OnRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAIStateBase_BP_OnRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAIStateBase_BP_OnRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAIStateBase, nullptr, "BP_OnRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAIStateBase_BP_OnRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_BP_OnRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAIStateBase_BP_OnRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAIStateBase_BP_OnRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAIStateBase_BP_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAIStateBase_BP_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAIStateBase_BP_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAIStateBase, nullptr, "BP_Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAIStateBase_BP_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_BP_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAIStateBase_BP_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAIStateBase_BP_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAIStateBase_eventBP_TickActive_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAIStateBase, nullptr, "BP_TickActive", nullptr, nullptr, sizeof(FGAIStateBase_eventBP_TickActive_Parms), Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAIStateBase_BP_TickActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAIStateBase_BP_TickActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics
	{
		struct FGAIStateBase_eventChangeState_Parms
		{
			FName NewPendingStateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewPendingStateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::NewProp_NewPendingStateName = { "NewPendingStateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAIStateBase_eventChangeState_Parms, NewPendingStateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::NewProp_NewPendingStateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAIStateBase, nullptr, "ChangeState", nullptr, nullptr, sizeof(FGAIStateBase_eventChangeState_Parms), Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAIStateBase_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAIStateBase_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics
	{
		struct FGAIStateBase_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAIStateBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAIStateBase, nullptr, "GetOwner", nullptr, nullptr, sizeof(FGAIStateBase_eventGetOwner_Parms), Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAIStateBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAIStateBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGAIStateBase_NoRegister()
	{
		return UFGAIStateBase::StaticClass();
	}
	struct Z_Construct_UClass_UFGAIStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAIStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGAIStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGAIStateBase_BP_OnActivated, "BP_OnActivated" }, // 2773756889
		{ &Z_Construct_UFunction_UFGAIStateBase_BP_OnDeactivated, "BP_OnDeactivated" }, // 2073606758
		{ &Z_Construct_UFunction_UFGAIStateBase_BP_OnRemoved, "BP_OnRemoved" }, // 3333339212
		{ &Z_Construct_UFunction_UFGAIStateBase_BP_Setup, "BP_Setup" }, // 3445076488
		{ &Z_Construct_UFunction_UFGAIStateBase_BP_TickActive, "BP_TickActive" }, // 2598922890
		{ &Z_Construct_UFunction_UFGAIStateBase_ChangeState, "ChangeState" }, // 1094347184
		{ &Z_Construct_UFunction_UFGAIStateBase_GetOwner, "GetOwner" }, // 4286821313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAIStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/StateMachine/FGAIStateBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_StateName_MetaData[] = {
		{ "Category", "FGAIStateBase" },
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAIStateBase, StateName), METADATA_PARAMS(Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_StateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAIStateBase, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAIStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAIStateBase_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAIStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAIStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAIStateBase_Statics::ClassParams = {
		&UFGAIStateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGAIStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIStateBase_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGAIStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAIStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAIStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAIStateBase, 2785676393);
	template<> FGAI_API UClass* StaticClass<UFGAIStateBase>()
	{
		return UFGAIStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAIStateBase(Z_Construct_UClass_UFGAIStateBase, &UFGAIStateBase::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGAIStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAIStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
