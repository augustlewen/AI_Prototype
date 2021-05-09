// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGAI_FGDamageableComponent_generated_h
#error "FGDamageableComponent.generated.h already included, missing '#pragma once' in FGDamageableComponent.h"
#endif
#define FGAI_FGDamageableComponent_generated_h

#define Project_Source_FGAI_Components_FGDamageableComponent_h_8_DELEGATE \
struct _Script_FGAI_eventFGDamageTakenDelegate_Parms \
{ \
	int32 DamageTaken; \
}; \
static inline void FFGDamageTakenDelegate_DelegateWrapper(const FMulticastScriptDelegate& FGDamageTakenDelegate, int32 DamageTaken) \
{ \
	_Script_FGAI_eventFGDamageTakenDelegate_Parms Parms; \
	Parms.DamageTaken=DamageTaken; \
	FGDamageTakenDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Project_Source_FGAI_Components_FGDamageableComponent_h_7_DELEGATE \
static inline void FFGKilledDelegate_DelegateWrapper(const FMulticastScriptDelegate& FGKilledDelegate) \
{ \
	FGKilledDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_SPARSE_DATA
#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGDamageableComponent(); \
	friend struct Z_Construct_UClass_UFGDamageableComponent_Statics; \
public: \
	DECLARE_CLASS(UFGDamageableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGDamageableComponent)


#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGDamageableComponent(); \
	friend struct Z_Construct_UClass_UFGDamageableComponent_Statics; \
public: \
	DECLARE_CLASS(UFGDamageableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGDamageableComponent)


#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDamageableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDamageableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDamageableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDamageableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDamageableComponent(UFGDamageableComponent&&); \
	NO_API UFGDamageableComponent(const UFGDamageableComponent&); \
public:


#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDamageableComponent(UFGDamageableComponent&&); \
	NO_API UFGDamageableComponent(const UFGDamageableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDamageableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDamageableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGDamageableComponent)


#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UFGDamageableComponent, MaxHealth); }


#define Project_Source_FGAI_Components_FGDamageableComponent_h_10_PROLOG
#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_SPARSE_DATA \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_RPC_WRAPPERS \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_INCLASS \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_Components_FGDamageableComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_SPARSE_DATA \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_Components_FGDamageableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UFGDamageableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_Components_FGDamageableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
