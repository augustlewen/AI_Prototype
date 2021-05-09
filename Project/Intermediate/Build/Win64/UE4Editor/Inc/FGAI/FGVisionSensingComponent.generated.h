// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFGVisionSensingResults;
#ifdef FGAI_FGVisionSensingComponent_generated_h
#error "FGVisionSensingComponent.generated.h already included, missing '#pragma once' in FGVisionSensingComponent.h"
#endif
#define FGAI_FGVisionSensingComponent_generated_h

#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics; \
	FGAI_API static class UScriptStruct* StaticStruct();


template<> FGAI_API UScriptStruct* StaticStruct<struct FFGVisionSensingResults>();

#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTargetStruct_Statics; \
	FGAI_API static class UScriptStruct* StaticStruct();


template<> FGAI_API UScriptStruct* StaticStruct<struct FTargetStruct>();

#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_30_DELEGATE \
struct _Script_FGAI_eventFGVisionSensingDelegate_Parms \
{ \
	FFGVisionSensingResults Results; \
}; \
static inline void FFGVisionSensingDelegate_DelegateWrapper(const FMulticastScriptDelegate& FGVisionSensingDelegate, FFGVisionSensingResults const& Results) \
{ \
	_Script_FGAI_eventFGVisionSensingDelegate_Parms Parms; \
	Parms.Results=Results; \
	FGVisionSensingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_SPARSE_DATA
#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_RPC_WRAPPERS
#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGVisionSensingComponent(); \
	friend struct Z_Construct_UClass_UFGVisionSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UFGVisionSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGVisionSensingComponent)


#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUFGVisionSensingComponent(); \
	friend struct Z_Construct_UClass_UFGVisionSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UFGVisionSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGVisionSensingComponent)


#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGVisionSensingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGVisionSensingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVisionSensingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVisionSensingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVisionSensingComponent(UFGVisionSensingComponent&&); \
	NO_API UFGVisionSensingComponent(const UFGVisionSensingComponent&); \
public:


#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVisionSensingComponent(UFGVisionSensingComponent&&); \
	NO_API UFGVisionSensingComponent(const UFGVisionSensingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVisionSensingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVisionSensingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGVisionSensingComponent)


#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_PRIVATE_PROPERTY_OFFSET
#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_32_PROLOG
#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_SPARSE_DATA \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_RPC_WRAPPERS \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_INCLASS \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_SPARSE_DATA \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UFGVisionSensingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_AI_Sensing_FGVisionSensingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
