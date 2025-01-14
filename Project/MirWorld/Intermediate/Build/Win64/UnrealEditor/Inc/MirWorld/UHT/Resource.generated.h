// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Resource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRWORLD_Resource_generated_h
#error "Resource.generated.h already included, missing '#pragma once' in Resource.h"
#endif
#define MIRWORLD_Resource_generated_h

#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_SPARSE_DATA
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetResourceType); \
	DECLARE_FUNCTION(execIsPassable); \
	DECLARE_FUNCTION(execGetRandomGenerationNum); \
	DECLARE_FUNCTION(execSetRandomGenerationNum); \
	DECLARE_FUNCTION(execSetDoesExist); \
	DECLARE_FUNCTION(execGetDoesExist); \
	DECLARE_FUNCTION(execSetBiomeType); \
	DECLARE_FUNCTION(execGetBiomeType); \
	DECLARE_FUNCTION(execSetResourceLeft); \
	DECLARE_FUNCTION(execGetResourceLeft); \
	DECLARE_FUNCTION(execGetResourceType); \
	DECLARE_FUNCTION(execExtractRes); \
	DECLARE_FUNCTION(execGiveBunch); \
	DECLARE_FUNCTION(execSetExtractTime); \
	DECLARE_FUNCTION(execSetMineTime); \
	DECLARE_FUNCTION(execExtractTime); \
	DECLARE_FUNCTION(execMineTime);


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_ACCESSORS
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAResource(); \
	friend struct Z_Construct_UClass_AResource_Statics; \
public: \
	DECLARE_CLASS(AResource, ABasicActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MirWorld"), NO_API) \
	DECLARE_SERIALIZER(AResource)


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AResource(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AResource(AResource&&); \
	NO_API AResource(const AResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AResource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AResource) \
	NO_API virtual ~AResource();


#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_11_PROLOG
#define FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_SPARSE_DATA \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_ACCESSORS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_INCLASS_NO_PURE_DECLS \
	FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRWORLD_API UClass* StaticClass<class AResource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
