// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MobBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MIRWORLD_MobBase_generated_h
#error "MobBase.generated.h already included, missing '#pragma once' in MobBase.h"
#endif
#define MIRWORLD_MobBase_generated_h

#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_SPARSE_DATA
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTileSize); \
	DECLARE_FUNCTION(execSetStartPos); \
	DECLARE_FUNCTION(execDoAction); \
	DECLARE_FUNCTION(execSetAction); \
	DECLARE_FUNCTION(execHasAction); \
	DECLARE_FUNCTION(execStopMovement); \
	DECLARE_FUNCTION(execFollowTrajectory); \
	DECLARE_FUNCTION(execSetTrajectory);


#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_ACCESSORS
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMobBase(); \
	friend struct Z_Construct_UClass_AMobBase_Statics; \
public: \
	DECLARE_CLASS(AMobBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MirWorld"), NO_API) \
	DECLARE_SERIALIZER(AMobBase)


#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMobBase(AMobBase&&); \
	NO_API AMobBase(const AMobBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMobBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMobBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMobBase) \
	NO_API virtual ~AMobBase();


#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_11_PROLOG
#define FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_SPARSE_DATA \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_ACCESSORS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRWORLD_API UClass* StaticClass<class AMobBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
