// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResourceStorage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRWORLD_ResourceStorage_generated_h
#error "ResourceStorage.generated.h already included, missing '#pragma once' in ResourceStorage.h"
#endif
#define MIRWORLD_ResourceStorage_generated_h

#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_SPARSE_DATA
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddResource); \
	DECLARE_FUNCTION(execSubResource); \
	DECLARE_FUNCTION(execGetResourceAmnt);


#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_ACCESSORS
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAResourceStorage(); \
	friend struct Z_Construct_UClass_AResourceStorage_Statics; \
public: \
	DECLARE_CLASS(AResourceStorage, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MirWorld"), NO_API) \
	DECLARE_SERIALIZER(AResourceStorage)


#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AResourceStorage(AResourceStorage&&); \
	NO_API AResourceStorage(const AResourceStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AResourceStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AResourceStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AResourceStorage) \
	NO_API virtual ~AResourceStorage();


#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_11_PROLOG
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_SPARSE_DATA \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_ACCESSORS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRWORLD_API UClass* StaticClass<class AResourceStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
