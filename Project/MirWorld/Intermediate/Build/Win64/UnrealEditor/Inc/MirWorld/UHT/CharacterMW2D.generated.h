// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterMW2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRWORLD_CharacterMW2D_generated_h
#error "CharacterMW2D.generated.h already included, missing '#pragma once' in CharacterMW2D.h"
#endif
#define MIRWORLD_CharacterMW2D_generated_h

#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_SPARSE_DATA
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExtractBunch); \
	DECLARE_FUNCTION(execSetID); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execIsWorking);


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterMW2D(); \
	friend struct Z_Construct_UClass_ACharacterMW2D_Statics; \
public: \
	DECLARE_CLASS(ACharacterMW2D, AMobBase2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MirWorld"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMW2D)


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterMW2D(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterMW2D(ACharacterMW2D&&); \
	NO_API ACharacterMW2D(const ACharacterMW2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterMW2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterMW2D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterMW2D) \
	NO_API virtual ~ACharacterMW2D();


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_18_PROLOG
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_SPARSE_DATA \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_INCLASS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRWORLD_API UClass* StaticClass<class ACharacterMW2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
