// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGAI_FGEnemy_generated_h
#error "FGEnemy.generated.h already included, missing '#pragma once' in FGEnemy.h"
#endif
#define FGAI_FGEnemy_generated_h

#define Project_Source_FGAI_FGEnemy_h_17_SPARSE_DATA
#define Project_Source_FGAI_FGEnemy_h_17_RPC_WRAPPERS
#define Project_Source_FGAI_FGEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Source_FGAI_FGEnemy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGEnemy(); \
	friend struct Z_Construct_UClass_AFGEnemy_Statics; \
public: \
	DECLARE_CLASS(AFGEnemy, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGEnemy)


#define Project_Source_FGAI_FGEnemy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGEnemy(); \
	friend struct Z_Construct_UClass_AFGEnemy_Statics; \
public: \
	DECLARE_CLASS(AFGEnemy, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGEnemy)


#define Project_Source_FGAI_FGEnemy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEnemy(AFGEnemy&&); \
	NO_API AFGEnemy(const AFGEnemy&); \
public:


#define Project_Source_FGAI_FGEnemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEnemy(AFGEnemy&&); \
	NO_API AFGEnemy(const AFGEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGEnemy)


#define Project_Source_FGAI_FGEnemy_h_17_PRIVATE_PROPERTY_OFFSET
#define Project_Source_FGAI_FGEnemy_h_14_PROLOG
#define Project_Source_FGAI_FGEnemy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_FGEnemy_h_17_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_FGEnemy_h_17_SPARSE_DATA \
	Project_Source_FGAI_FGEnemy_h_17_RPC_WRAPPERS \
	Project_Source_FGAI_FGEnemy_h_17_INCLASS \
	Project_Source_FGAI_FGEnemy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_FGAI_FGEnemy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_FGAI_FGEnemy_h_17_PRIVATE_PROPERTY_OFFSET \
	Project_Source_FGAI_FGEnemy_h_17_SPARSE_DATA \
	Project_Source_FGAI_FGEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_FGAI_FGEnemy_h_17_INCLASS_NO_PURE_DECLS \
	Project_Source_FGAI_FGEnemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class AFGEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_FGAI_FGEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
