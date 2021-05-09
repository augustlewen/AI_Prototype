// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNoiseSettings;
#ifdef FGAI_FGNoiseActor_generated_h
#error "FGNoiseActor.generated.h already included, missing '#pragma once' in FGNoiseActor.h"
#endif
#define FGAI_FGNoiseActor_generated_h

#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNoiseSettings_Statics; \
	FGAI_API static class UScriptStruct* StaticStruct();


template<> FGAI_API UScriptStruct* StaticStruct<struct FNoiseSettings>();

#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_SPARSE_DATA
#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnNoise);


#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnNoise);


#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGNoiseActor(); \
	friend struct Z_Construct_UClass_AFGNoiseActor_Statics; \
public: \
	DECLARE_CLASS(AFGNoiseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGNoiseActor)


#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAFGNoiseActor(); \
	friend struct Z_Construct_UClass_AFGNoiseActor_Statics; \
public: \
	DECLARE_CLASS(AFGNoiseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGNoiseActor)


#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGNoiseActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGNoiseActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNoiseActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNoiseActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNoiseActor(AFGNoiseActor&&); \
	NO_API AFGNoiseActor(const AFGNoiseActor&); \
public:


#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNoiseActor(AFGNoiseActor&&); \
	NO_API AFGNoiseActor(const AFGNoiseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNoiseActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNoiseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGNoiseActor)


#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AFGNoiseActor, Root); }


#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_24_PROLOG
#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_SPARSE_DATA \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_RPC_WRAPPERS \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_INCLASS \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_SPARSE_DATA \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_AI_Sensing_FGNoiseActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class AFGNoiseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_AI_Sensing_FGNoiseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
