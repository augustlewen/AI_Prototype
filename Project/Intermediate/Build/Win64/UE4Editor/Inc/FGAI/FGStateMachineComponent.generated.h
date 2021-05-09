// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGAI_FGStateMachineComponent_generated_h
#error "FGStateMachineComponent.generated.h already included, missing '#pragma once' in FGStateMachineComponent.h"
#endif
#define FGAI_FGStateMachineComponent_generated_h

#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_SPARSE_DATA
#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_RPC_WRAPPERS
#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGStateMachineComponent(); \
	friend struct Z_Construct_UClass_UFGStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(UFGStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGStateMachineComponent)


#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUFGStateMachineComponent(); \
	friend struct Z_Construct_UClass_UFGStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(UFGStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGStateMachineComponent)


#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGStateMachineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGStateMachineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGStateMachineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGStateMachineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGStateMachineComponent(UFGStateMachineComponent&&); \
	NO_API UFGStateMachineComponent(const UFGStateMachineComponent&); \
public:


#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGStateMachineComponent(UFGStateMachineComponent&&); \
	NO_API UFGStateMachineComponent(const UFGStateMachineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGStateMachineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGStateMachineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGStateMachineComponent)


#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIStateMachineSheet() { return STRUCT_OFFSET(UFGStateMachineComponent, AIStateMachineSheet); } \
	FORCEINLINE static uint32 __PPO__AIStates() { return STRUCT_OFFSET(UFGStateMachineComponent, AIStates); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(UFGStateMachineComponent, CurrentState); }


#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_9_PROLOG
#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_SPARSE_DATA \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_RPC_WRAPPERS \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_INCLASS \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_SPARSE_DATA \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UFGStateMachineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_AI_StateMachine_FGStateMachineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
