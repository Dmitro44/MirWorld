// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScoreCntr.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRWORLD_ScoreCntr_generated_h
#error "ScoreCntr.generated.h already included, missing '#pragma once' in ScoreCntr.h"
#endif
#define MIRWORLD_ScoreCntr_generated_h

#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_SPARSE_DATA
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoseTheGame); \
	DECLARE_FUNCTION(execWinTheGame); \
	DECLARE_FUNCTION(execUpdateDecrease); \
	DECLARE_FUNCTION(execDecreaseScore_T); \
	DECLARE_FUNCTION(execDecreaseScore); \
	DECLARE_FUNCTION(execIncreaseScore); \
	DECLARE_FUNCTION(execCheckScore);


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoreCntr(); \
	friend struct Z_Construct_UClass_AScoreCntr_Statics; \
public: \
	DECLARE_CLASS(AScoreCntr, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MirWorld"), NO_API) \
	DECLARE_SERIALIZER(AScoreCntr)


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScoreCntr(AScoreCntr&&); \
	NO_API AScoreCntr(const AScoreCntr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoreCntr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoreCntr); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoreCntr) \
	NO_API virtual ~AScoreCntr();


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_10_PROLOG
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_SPARSE_DATA \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_INCLASS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRWORLD_API UClass* StaticClass<class AScoreCntr>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS