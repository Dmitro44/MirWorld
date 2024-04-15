// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRWORLD_Generator_generated_h
#error "Generator.generated.h already included, missing '#pragma once' in Generator.h"
#endif
#define MIRWORLD_Generator_generated_h

#define FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_SPARSE_DATA
#define FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuildMap);


#define FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_ACCESSORS
#define FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGenerator(); \
	friend struct Z_Construct_UClass_AGenerator_Statics; \
public: \
	DECLARE_CLASS(AGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MirWorld"), NO_API) \
	DECLARE_SERIALIZER(AGenerator)


#define FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGenerator(AGenerator&&); \
	NO_API AGenerator(const AGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGenerator) \
	NO_API virtual ~AGenerator();


#define FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_13_PROLOG
#define FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_SPARSE_DATA \
	FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_ACCESSORS \
	FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_INCLASS_NO_PURE_DECLS \
	FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRWORLD_API UClass* StaticClass<class AGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
