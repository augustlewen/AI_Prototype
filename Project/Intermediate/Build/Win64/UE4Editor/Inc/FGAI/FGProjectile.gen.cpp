// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/FGProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGProjectile() {}
// Cross Module References
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FFGProjectileHitResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FGAI_API UClass* Z_Construct_UClass_AFGProjectile_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_AFGProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics
	{
		struct _Script_FGAI_eventFGProjectileHitDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FGAI_eventFGProjectileHitDelegate_Parms, HitResult), Z_Construct_UScriptStruct_FFGProjectileHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FGAI, nullptr, "FGProjectileHitDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FGAI_eventFGProjectileHitDelegate_Parms), Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FFGProjectileHitResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FGAI_API uint32 Get_Z_Construct_UScriptStruct_FFGProjectileHitResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGProjectileHitResult, Z_Construct_UPackage__Script_FGAI(), TEXT("FGProjectileHitResult"), sizeof(FFGProjectileHitResult), Get_Z_Construct_UScriptStruct_FFGProjectileHitResult_Hash());
	}
	return Singleton;
}
template<> FGAI_API UScriptStruct* StaticStruct<FFGProjectileHitResult>()
{
	return FFGProjectileHitResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGProjectileHitResult(FFGProjectileHitResult::StaticStruct, TEXT("/Script/FGAI"), TEXT("FGProjectileHitResult"), false, nullptr, nullptr);
static struct FScriptStruct_FGAI_StaticRegisterNativesFFGProjectileHitResult
{
	FScriptStruct_FGAI_StaticRegisterNativesFFGProjectileHitResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGProjectileHitResult")),new UScriptStruct::TCppStructOps<FFGProjectileHitResult>);
	}
} ScriptStruct_FGAI_StaticRegisterNativesFFGProjectileHitResult;
	struct Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDamageable_MetaData[];
#endif
		static void NewProp_HitDamageable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HitDamageable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGProjectileHitResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitActor_MetaData[] = {
		{ "Category", "FGProjectileHitResult" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGProjectileHitResult, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "FGProjectileHitResult" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGProjectileHitResult, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitDamageable_MetaData[] = {
		{ "Category", "FGProjectileHitResult" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitDamageable_SetBit(void* Obj)
	{
		((FFGProjectileHitResult*)Obj)->HitDamageable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitDamageable = { "HitDamageable", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFGProjectileHitResult), &Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitDamageable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitDamageable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitDamageable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::NewProp_HitDamageable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
		nullptr,
		&NewStructOps,
		"FGProjectileHitResult",
		sizeof(FFGProjectileHitResult),
		alignof(FFGProjectileHitResult),
		Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGProjectileHitResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGProjectileHitResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FGAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGProjectileHitResult"), sizeof(FFGProjectileHitResult), Get_Z_Construct_UScriptStruct_FFGProjectileHitResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGProjectileHitResult_Hash() { return 1624746074U; }
	void AFGProjectile::StaticRegisterNativesAFGProjectile()
	{
	}
	UClass* Z_Construct_UClass_AFGProjectile_NoRegister()
	{
		return AFGProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AFGProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProjectileHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGProjectile.h" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_OnProjectileHit_MetaData[] = {
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_OnProjectileHit = { "OnProjectileHit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, OnProjectileHit), Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_OnProjectileHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_OnProjectileHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "FGProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "FGProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_InitialVelocity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, InitialVelocity), METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_InitialVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_InitialVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, Gravity), METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, Damage), METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_OnProjectileHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_Sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_InitialVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGProjectile_Statics::ClassParams = {
		&AFGProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGProjectile, 4133400064);
	template<> FGAI_API UClass* StaticClass<AFGProjectile>()
	{
		return AFGProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGProjectile(Z_Construct_UClass_AFGProjectile, &AFGProjectile::StaticClass, TEXT("/Script/FGAI"), TEXT("AFGProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
