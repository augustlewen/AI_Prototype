// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFGProjectileHitResult;
#ifdef FGAI_FGProjectile_generated_h
#error "FGProjectile.generated.h already included, missing '#pragma once' in FGProjectile.h"
#endif
#define FGAI_FGProjectile_generated_h

#define Project_Source_FGAI_FGProjectile_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFGProjectileHitResult_Statics; \
	FGAI_API static class UScriptStruct* StaticStruct();


template<> FGAI_API UScriptStruct* StaticStruct<struct FFGProjectileHitResult>();

#define Project_Source_FGAI_FGProjectile_h_24_DELEGATE \
struct _Script_FGAI_eventFGProjectileHitDelegate_Parms \
{ \
	FFGProjectileHitResult HitResult; \
}; \
static inline void FFGProjectileHitDelegate_DelegateWrapper(const FMulticastScriptDelegate& FGProjectileHitDelegate, FFGProjectileHitResult const& HitResult) \
{ \
	_Script_FGAI_eventFGProjectileHitDelegate_Parms Parms; \
	Parms.HitResult=HitResult; \
	FGProjectileHitDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Project_Source_FGAI_FGProjectile_h_29_SPARSE_DATA
#define Project_Source_FGAI_FGProjectile_h_29_RPC_WRAPPERS
#define Project_Source_FGAI_FGProjectile_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Source_FGAI_FGProjectile_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGProjectile(); \
	friend struct Z_Construct_UClass_AFGProjectile_Statics; \
public: \
	DECLARE_CLASS(AFGProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGProjectile)


#define Project_Source_FGAI_FGProjectile_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAFGProjectile(); \
	friend struct Z_Construct_UClass_AFGProjectile_Statics; \
public: \
	DECLARE_CLASS(AFGProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGProjectile)


#define Project_Source_FGAI_FGProjectile_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGProjectile(AFGProjectile&&); \
	NO_API AFGProjectile(const AFGProjectile&); \
public:


#define Project_Source_FGAI_FGProjectile_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGProjectile(AFGProjectile&&); \
	NO_API AFGProjectile(const AFGProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGProjectile)


#define Project_Source_FGAI_FGProjectile_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(AFGProjectile, Sphere); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AFGProjectile, Mesh); } \
	FORCEINLINE static uint32 __PPO__InitialVelocity() { return STRUCT_OFFSET(AFGProjectile, InitialVelocity); } \
	FORCEINLINE static uint32 __PPO__Gravity() { return STRUCT_OFFSET(AFGProjectile, Gravity); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AFGProjectile, Damage); }


#define Project_Source_FGAI_FGProjectile_h_26_PROLOG
#define Project_Source_FGAI_FGProjectile_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_FGProjectile_h_29_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_FGProjectile_h_29_SPARSE_DATA \
	Project_Source_FGAI_FGProjectile_h_29_RPC_WRAPPERS \
	Project_Source_FGAI_FGProjectile_h_29_INCLASS \
	Project_Source_FGAI_FGProjectile_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_FGProjectile_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_FGProjectile_h_29_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_FGProjectile_h_29_SPARSE_DATA \
	Project_Source_FGAI_FGProjectile_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_FGProjectile_h_29_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_FGProjectile_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class AFGProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_FGProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
