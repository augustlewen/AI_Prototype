// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFGProjectileHitResult;
#ifdef FGAI_FGCharacter_generated_h
#error "FGCharacter.generated.h already included, missing '#pragma once' in FGCharacter.h"
#endif
#define FGAI_FGCharacter_generated_h

#define Project_Source_FGAI_FGCharacter_h_19_SPARSE_DATA
#define Project_Source_FGAI_FGCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDamageTakenResponse); \
	DECLARE_FUNCTION(execOnShotHitResponse);


#define Project_Source_FGAI_FGCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDamageTakenResponse); \
	DECLARE_FUNCTION(execOnShotHitResponse);


#define Project_Source_FGAI_FGCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCharacter(); \
	friend struct Z_Construct_UClass_AFGCharacter_Statics; \
public: \
	DECLARE_CLASS(AFGCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGCharacter)


#define Project_Source_FGAI_FGCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFGCharacter(); \
	friend struct Z_Construct_UClass_AFGCharacter_Statics; \
public: \
	DECLARE_CLASS(AFGCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGCharacter)


#define Project_Source_FGAI_FGCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCharacter(AFGCharacter&&); \
	NO_API AFGCharacter(const AFGCharacter&); \
public:


#define Project_Source_FGAI_FGCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCharacter(AFGCharacter&&); \
	NO_API AFGCharacter(const AFGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGCharacter)


#define Project_Source_FGAI_FGCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VelocityCarriedOver() { return STRUCT_OFFSET(AFGCharacter, VelocityCarriedOver); } \
	FORCEINLINE static uint32 __PPO__MaxBullets() { return STRUCT_OFFSET(AFGCharacter, MaxBullets); } \
	FORCEINLINE static uint32 __PPO__CurrentBullets() { return STRUCT_OFFSET(AFGCharacter, CurrentBullets); }


#define Project_Source_FGAI_FGCharacter_h_16_PROLOG
#define Project_Source_FGAI_FGCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_FGCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_FGCharacter_h_19_SPARSE_DATA \
	Project_Source_FGAI_FGCharacter_h_19_RPC_WRAPPERS \
	Project_Source_FGAI_FGCharacter_h_19_INCLASS \
	Project_Source_FGAI_FGCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_FGCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_FGCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_FGCharacter_h_19_SPARSE_DATA \
	Project_Source_FGAI_FGCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_FGCharacter_h_19_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_FGCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class AFGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_FGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
