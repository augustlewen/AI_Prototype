// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAI_init() {}
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature();
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature();
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGKilledDelegate__DelegateSignature();
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGDamageTakenDelegate__DelegateSignature();
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature();
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature();
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FGAI()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FGAI_FGNoiseSensingDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FGAI_FGKilledDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FGAI_FGDamageTakenDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FGAI_FGProjectileHitDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FGAI_FGShotFiredDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FGAI_FGShotHitDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/FGAI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x890631BE,
				0x5BC4F694,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
