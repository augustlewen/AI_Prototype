// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFGProjectileHitResult;
class AActor;
#ifdef FGAI_FGShootComponent_generated_h
#error "FGShootComponent.generated.h already included, missing '#pragma once' in FGShootComponent.h"
#endif
#define FGAI_FGShootComponent_generated_h

#define Project_Source_FGAI_Components_FGShootComponent_h_13_DELEGATE \
struct _Script_FGAI_eventFGShotHitDelegate_Parms \
{ \
	FFGProjectileHitResult HitResult; \
}; \
static inline void FFGShotHitDelegate_DelegateWrapper(const FMulticastScriptDelegate& FGShotHitDelegate, FFGProjectileHitResult const& HitResult) \
{ \
	_Script_FGAI_eventFGShotHitDelegate_Parms Parms; \
	Parms.HitResult=HitResult; \
	FGShotHitDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Project_Source_FGAI_Components_FGShootComponent_h_12_DELEGATE \
static inline void FFGShotFiredDelegate_DelegateWrapper(const FMulticastScriptDelegate& FGShotFiredDelegate) \
{ \
	FGShotFiredDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Project_Source_FGAI_Components_FGShootComponent_h_18_SPARSE_DATA
#define Project_Source_FGAI_Components_FGShootComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileHitResponse); \
	DECLARE_FUNCTION(execShootAt); \
	DECLARE_FUNCTION(execShootProjectile);


#define Project_Source_FGAI_Components_FGShootComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileHitResponse); \
	DECLARE_FUNCTION(execShootAt); \
	DECLARE_FUNCTION(execShootProjectile);


#define Project_Source_FGAI_Components_FGShootComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGShootComponent(); \
	friend struct Z_Construct_UClass_UFGShootComponent_Statics; \
public: \
	DECLARE_CLASS(UFGShootComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGShootComponent)


#define Project_Source_FGAI_Components_FGShootComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFGShootComponent(); \
	friend struct Z_Construct_UClass_UFGShootComponent_Statics; \
public: \
	DECLARE_CLASS(UFGShootComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGShootComponent)


#define Project_Source_FGAI_Components_FGShootComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGShootComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGShootComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGShootComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGShootComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGShootComponent(UFGShootComponent&&); \
	NO_API UFGShootComponent(const UFGShootComponent&); \
public:


#define Project_Source_FGAI_Components_FGShootComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGShootComponent(UFGShootComponent&&); \
	NO_API UFGShootComponent(const UFGShootComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGShootComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGShootComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGShootComponent)


#define Project_Source_FGAI_Components_FGShootComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define Project_Source_FGAI_Components_FGShootComponent_h_15_PROLOG
#define Project_Source_FGAI_Components_FGShootComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_Components_FGShootComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_Components_FGShootComponent_h_18_SPARSE_DATA \
	Project_Source_FGAI_Components_FGShootComponent_h_18_RPC_WRAPPERS \
	Project_Source_FGAI_Components_FGShootComponent_h_18_INCLASS \
	Project_Source_FGAI_Components_FGShootComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_Components_FGShootComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_Components_FGShootComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_Components_FGShootComponent_h_18_SPARSE_DATA \
	Project_Source_FGAI_Components_FGShootComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_Components_FGShootComponent_h_18_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_Components_FGShootComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UFGShootComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_Components_FGShootComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
