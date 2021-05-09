// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFGNoiseSenseResult;
#ifdef FGAI_FGNoiseSensingComponent_generated_h
#error "FGNoiseSensingComponent.generated.h already included, missing '#pragma once' in FGNoiseSensingComponent.h"
#endif
#define FGAI_FGNoiseSensingComponent_generated_h

#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFGNoiseSenseResult_Statics; \
	FGAI_API static class UScriptStruct* StaticStruct();


template<> FGAI_API UScriptStruct* StaticStruct<struct FFGNoiseSenseResult>();

#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_18_DELEGATE \
struct _Script_FGAI_eventFGNoiseSensingDelegate_Parms \
{ \
	FFGNoiseSenseResult SenseResult; \
}; \
static inline void FFGNoiseSensingDelegate_DelegateWrapper(const FMulticastScriptDelegate& FGNoiseSensingDelegate, FFGNoiseSenseResult const& SenseResult) \
{ \
	_Script_FGAI_eventFGNoiseSensingDelegate_Parms Parms; \
	Parms.SenseResult=SenseResult; \
	FGNoiseSensingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_SPARSE_DATA
#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_RPC_WRAPPERS
#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGNoiseSensingComponent(); \
	friend struct Z_Construct_UClass_UFGNoiseSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UFGNoiseSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGNoiseSensingComponent)


#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFGNoiseSensingComponent(); \
	friend struct Z_Construct_UClass_UFGNoiseSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UFGNoiseSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGNoiseSensingComponent)


#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGNoiseSensingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGNoiseSensingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGNoiseSensingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGNoiseSensingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGNoiseSensingComponent(UFGNoiseSensingComponent&&); \
	NO_API UFGNoiseSensingComponent(const UFGNoiseSensingComponent&); \
public:


#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGNoiseSensingComponent(UFGNoiseSensingComponent&&); \
	NO_API UFGNoiseSensingComponent(const UFGNoiseSensingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGNoiseSensingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGNoiseSensingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGNoiseSensingComponent)


#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_20_PROLOG
#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_SPARSE_DATA \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_RPC_WRAPPERS \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_INCLASS \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_SPARSE_DATA \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UFGNoiseSensingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_AI_Sensing_FGNoiseSensingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
