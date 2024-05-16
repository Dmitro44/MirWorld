// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayMW_GameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacterMW2D;
#ifdef MIRWORLD_GameplayMW_GameMode_generated_h
#error "GameplayMW_GameMode.generated.h already included, missing '#pragma once' in GameplayMW_GameMode.h"
#endif
#define MIRWORLD_GameplayMW_GameMode_generated_h

#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_SPARSE_DATA
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGM_StartTask); \
	DECLARE_FUNCTION(execGM_ClearTasks); \
	DECLARE_FUNCTION(execGM_AddTask); \
	DECLARE_FUNCTION(execGM_SetPriorityMatrix);


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_CALLBACK_WRAPPERS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayMW_GameMode(); \
	friend struct Z_Construct_UClass_AGameplayMW_GameMode_Statics; \
public: \
	DECLARE_CLASS(AGameplayMW_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MirWorld"), NO_API) \
	DECLARE_SERIALIZER(AGameplayMW_GameMode)


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayMW_GameMode(AGameplayMW_GameMode&&); \
	NO_API AGameplayMW_GameMode(const AGameplayMW_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayMW_GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayMW_GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameplayMW_GameMode) \
	NO_API virtual ~AGameplayMW_GameMode();


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_18_PROLOG
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_SPARSE_DATA \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_CALLBACK_WRAPPERS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRWORLD_API UClass* StaticClass<class AGameplayMW_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
