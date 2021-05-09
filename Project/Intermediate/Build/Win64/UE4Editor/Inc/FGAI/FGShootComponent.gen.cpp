// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/Components/FGShootComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGShootComponent() {}
// Cross Module References
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FFGProjectileHitResult();
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature();
	FGAI_API UClass* Z_Construct_UClass_UFGShootComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGShootComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FGAI_API UClass* Z_Construct_UClass_AFGProjectile_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics
	{
		struct _Script_FGAI_eventFGShotHitDelegate_Parms
		{
			FFGProjectileHitResult HitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FGAI_eventFGShotHitDelegate_Parms, HitResult), Z_Construct_UScriptStruct_FFGProjectileHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/FGShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FGAI, nullptr, "FGShotHitDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FGAI_eventFGShotHitDelegate_Parms), Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/FGShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FGAI, nullptr, "FGShotFiredDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFGShootComponent::execOnProjectileHitResponse)
	{
		P_GET_STRUCT_REF(FFGProjectileHitResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileHitResponse(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFGShootComponent::execShootAt)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootAt(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFGShootComponent::execShootProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootProjectile();
		P_NATIVE_END;
	}
	void UFGShootComponent::StaticRegisterNativesUFGShootComponent()
	{
		UClass* Class = UFGShootComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectileHitResponse", &UFGShootComponent::execOnProjectileHitResponse },
			{ "ShootAt", &UFGShootComponent::execShootAt },
			{ "ShootProjectile", &UFGShootComponent::execShootProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics
	{
		struct FGShootComponent_eventOnProjectileHitResponse_Parms
		{
			FFGProjectileHitResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGShootComponent_eventOnProjectileHitResponse_Parms, Result), Z_Construct_UScriptStruct_FFGProjectileHitResult, METADATA_PARAMS(Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/FGShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGShootComponent, nullptr, "OnProjectileHitResponse", nullptr, nullptr, sizeof(FGShootComponent_eventOnProjectileHitResponse_Parms), Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics
	{
		struct FGShootComponent_eventShootAt_Parms
		{
			AActor* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGShootComponent_eventShootAt_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/FGShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGShootComponent, nullptr, "ShootAt", nullptr, nullptr, sizeof(FGShootComponent_eventShootAt_Parms), Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGShootComponent_ShootAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGShootComponent_ShootAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGShootComponent_ShootProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGShootComponent_ShootProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/FGShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGShootComponent_ShootProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGShootComponent, nullptr, "ShootProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGShootComponent_ShootProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGShootComponent_ShootProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGShootComponent_ShootProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGShootComponent_ShootProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGShootComponent_NoRegister()
	{
		return UFGShootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGShootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShotFired_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShotFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShotHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShotHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGShootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGShootComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGShootComponent_OnProjectileHitResponse, "OnProjectileHitResponse" }, // 3851127836
		{ &Z_Construct_UFunction_UFGShootComponent_ShootAt, "ShootAt" }, // 2596609687
		{ &Z_Construct_UFunction_UFGShootComponent_ShootProjectile, "ShootProjectile" }, // 3587644689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGShootComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/FGShootComponent.h" },
		{ "ModuleRelativePath", "Components/FGShootComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotFired_MetaData[] = {
		{ "ModuleRelativePath", "Components/FGShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotFired = { "OnShotFired", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGShootComponent, OnShotFired), Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotHit_MetaData[] = {
		{ "ModuleRelativePath", "Components/FGShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotHit = { "OnShotHit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGShootComponent, OnShotHit), Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGShootComponent_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "FGShootComponent" },
		{ "ModuleRelativePath", "Components/FGShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGShootComponent_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGShootComponent, Projectile), Z_Construct_UClass_AFGProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGShootComponent_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGShootComponent_Statics::NewProp_Projectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGShootComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGShootComponent_Statics::NewProp_OnShotHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGShootComponent_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGShootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGShootComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGShootComponent_Statics::ClassParams = {
		&UFGShootComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGShootComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGShootComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGShootComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGShootComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGShootComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGShootComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGShootComponent, 3509414414);
	template<> FGAI_API UClass* StaticClass<UFGShootComponent>()
	{
		return UFGShootComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGShootComponent(Z_Construct_UClass_UFGShootComponent, &UFGShootComponent::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGShootComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGShootComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
