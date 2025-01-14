// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MobBase2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MIRWORLD_MobBase2D_generated_h
#error "MobBase2D.generated.h already included, missing '#pragma once' in MobBase2D.h"
#endif
#define MIRWORLD_MobBase2D_generated_h

#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_SPARSE_DATA
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTileSize); \
	DECLARE_FUNCTION(execSetStartPos); \
	DECLARE_FUNCTION(execDoAction); \
	DECLARE_FUNCTION(execSetAction); \
	DECLARE_FUNCTION(execHasAction); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetPathFromMob); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execGoTo);


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_CALLBACK_WRAPPERS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMobBase2D(); \
	friend struct Z_Construct_UClass_AMobBase2D_Statics; \
public: \
	DECLARE_CLASS(AMobBase2D, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MirWorld"), NO_API) \
	DECLARE_SERIALIZER(AMobBase2D)


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMobBase2D(AMobBase2D&&); \
	NO_API AMobBase2D(const AMobBase2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMobBase2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMobBase2D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMobBase2D) \
	NO_API virtual ~AMobBase2D();


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_18_PROLOG
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_SPARSE_DATA \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_CALLBACK_WRAPPERS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_INCLASS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRWORLD_API UClass* StaticClass<class AMobBase2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
