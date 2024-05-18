// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/MobBase2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobBase2D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_AMobBase2D();
	MIRWORLD_API UClass* Z_Construct_UClass_AMobBase2D_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(AMobBase2D::execSetTileSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newTileSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTileSize(Z_Param_newTileSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMobBase2D::execSetStartPos)
	{
		P_GET_STRUCT(FVector,Z_Param_StartPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartPos(Z_Param_StartPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMobBase2D::execDoAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMobBase2D::execSetAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TypeOfAction);
		P_GET_TARRAY(FVector,Z_Param_newTrajectory);
		P_GET_OBJECT(AActor,Z_Param_AimPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAction(Z_Param_TypeOfAction,Z_Param_newTrajectory,Z_Param_AimPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMobBase2D::execHasAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMobBase2D::execGetDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMobBase2D::execStopMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMobBase2D::execFollowTrajectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FollowTrajectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMobBase2D::execSetTrajectory)
	{
		P_GET_TARRAY(FVector,Z_Param_newTrajectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrajectory(Z_Param_newTrajectory);
		P_NATIVE_END;
	}
	void AMobBase2D::StaticRegisterNativesAMobBase2D()
	{
		UClass* Class = AMobBase2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoAction", &AMobBase2D::execDoAction },
			{ "FollowTrajectory", &AMobBase2D::execFollowTrajectory },
			{ "GetDirection", &AMobBase2D::execGetDirection },
			{ "HasAction", &AMobBase2D::execHasAction },
			{ "SetAction", &AMobBase2D::execSetAction },
			{ "SetStartPos", &AMobBase2D::execSetStartPos },
			{ "SetTileSize", &AMobBase2D::execSetTileSize },
			{ "SetTrajectory", &AMobBase2D::execSetTrajectory },
			{ "StopMovement", &AMobBase2D::execStopMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMobBase2D_DoAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobBase2D_DoAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Performs selected task\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performs selected task" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobBase2D_DoAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobBase2D, nullptr, "DoAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_DoAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobBase2D_DoAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMobBase2D_DoAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobBase2D_DoAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMobBase2D_FollowTrajectory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobBase2D_FollowTrajectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Makes the mob follow the set trajectory and DoAction when the trajectory is passed\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Makes the mob follow the set trajectory and DoAction when the trajectory is passed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobBase2D_FollowTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobBase2D, nullptr, "FollowTrajectory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_FollowTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobBase2D_FollowTrajectory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMobBase2D_FollowTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobBase2D_FollowTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMobBase2D_GetDirection_Statics
	{
		struct MobBase2D_eventGetDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobBase2D_eventGetDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the mob direction of moving or (0, 0, 0) if it's not moving\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the mob direction of moving or (0, 0, 0) if it's not moving" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobBase2D, nullptr, "GetDirection", nullptr, nullptr, Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::MobBase2D_eventGetDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::MobBase2D_eventGetDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMobBase2D_GetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobBase2D_GetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMobBase2D_HasAction_Statics
	{
		struct MobBase2D_eventHasAction_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMobBase2D_HasAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MobBase2D_eventHasAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMobBase2D_HasAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MobBase2D_eventHasAction_Parms), &Z_Construct_UFunction_AMobBase2D_HasAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobBase2D_HasAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_HasAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobBase2D_HasAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows if mob is executing any task\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows if mob is executing any task" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobBase2D_HasAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobBase2D, nullptr, "HasAction", nullptr, nullptr, Z_Construct_UFunction_AMobBase2D_HasAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_HasAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMobBase2D_HasAction_Statics::MobBase2D_eventHasAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_HasAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobBase2D_HasAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_HasAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMobBase2D_HasAction_Statics::MobBase2D_eventHasAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMobBase2D_HasAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobBase2D_HasAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMobBase2D_SetAction_Statics
	{
		struct MobBase2D_eventSetAction_Parms
		{
			int32 TypeOfAction;
			TArray<FVector> newTrajectory;
			AActor* AimPtr;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TypeOfAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_newTrajectory_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newTrajectory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMobBase2D_SetAction_Statics::NewProp_TypeOfAction = { "TypeOfAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobBase2D_eventSetAction_Parms, TypeOfAction), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMobBase2D_SetAction_Statics::NewProp_newTrajectory_Inner = { "newTrajectory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMobBase2D_SetAction_Statics::NewProp_newTrajectory = { "newTrajectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobBase2D_eventSetAction_Parms, newTrajectory), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMobBase2D_SetAction_Statics::NewProp_AimPtr = { "AimPtr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobBase2D_eventSetAction_Parms, AimPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobBase2D_SetAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_SetAction_Statics::NewProp_TypeOfAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_SetAction_Statics::NewProp_newTrajectory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_SetAction_Statics::NewProp_newTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_SetAction_Statics::NewProp_AimPtr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobBase2D_SetAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets specific task and the mob starts its\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets specific task and the mob starts its" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobBase2D_SetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobBase2D, nullptr, "SetAction", nullptr, nullptr, Z_Construct_UFunction_AMobBase2D_SetAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMobBase2D_SetAction_Statics::MobBase2D_eventSetAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobBase2D_SetAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMobBase2D_SetAction_Statics::MobBase2D_eventSetAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMobBase2D_SetAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobBase2D_SetAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics
	{
		struct MobBase2D_eventSetStartPos_Parms
		{
			FVector StartPos;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobBase2D_eventSetStartPos_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::NewProp_StartPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets start pos (for current)\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets start pos (for current)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobBase2D, nullptr, "SetStartPos", nullptr, nullptr, Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::MobBase2D_eventSetStartPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::MobBase2D_eventSetStartPos_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMobBase2D_SetStartPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobBase2D_SetStartPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics
	{
		struct MobBase2D_eventSetTileSize_Parms
		{
			float newTileSize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newTileSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::NewProp_newTileSize = { "newTileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobBase2D_eventSetTileSize_Parms, newTileSize), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MobBase2D_eventSetTileSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MobBase2D_eventSetTileSize_Parms), &Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::NewProp_newTileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the size of a tile's side\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the size of a tile's side" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobBase2D, nullptr, "SetTileSize", nullptr, nullptr, Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::MobBase2D_eventSetTileSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::MobBase2D_eventSetTileSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMobBase2D_SetTileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobBase2D_SetTileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics
	{
		struct MobBase2D_eventSetTrajectory_Parms
		{
			TArray<FVector> newTrajectory;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_newTrajectory_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newTrajectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::NewProp_newTrajectory_Inner = { "newTrajectory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::NewProp_newTrajectory = { "newTrajectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobBase2D_eventSetTrajectory_Parms, newTrajectory), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::NewProp_newTrajectory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::NewProp_newTrajectory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the trajectory for the mob movement\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the trajectory for the mob movement" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobBase2D, nullptr, "SetTrajectory", nullptr, nullptr, Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::MobBase2D_eventSetTrajectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::MobBase2D_eventSetTrajectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMobBase2D_SetTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobBase2D_SetTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMobBase2D_StopMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobBase2D_StopMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Makes the mob follow the set trajectory\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Makes the mob follow the set trajectory" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobBase2D_StopMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobBase2D, nullptr, "StopMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobBase2D_StopMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobBase2D_StopMovement_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMobBase2D_StopMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobBase2D_StopMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMobBase2D);
	UClass* Z_Construct_UClass_AMobBase2D_NoRegister()
	{
		return AMobBase2D::StaticClass();
	}
	struct Z_Construct_UClass_AMobBase2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextTile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextTile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTrajectory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrajectory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentTrajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[];
#endif
		static void NewProp_IsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecsForNextTile_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecsForNextTile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionFrameAmount_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_MotionFrameAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealthPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealthPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasTask_MetaData[];
#endif
		static void NewProp_HasTask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMobBase2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMobBase2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMobBase2D_DoAction, "DoAction" }, // 160857523
		{ &Z_Construct_UFunction_AMobBase2D_FollowTrajectory, "FollowTrajectory" }, // 2739747432
		{ &Z_Construct_UFunction_AMobBase2D_GetDirection, "GetDirection" }, // 1101989343
		{ &Z_Construct_UFunction_AMobBase2D_HasAction, "HasAction" }, // 3749647603
		{ &Z_Construct_UFunction_AMobBase2D_SetAction, "SetAction" }, // 1867305002
		{ &Z_Construct_UFunction_AMobBase2D_SetStartPos, "SetStartPos" }, // 2108494187
		{ &Z_Construct_UFunction_AMobBase2D_SetTileSize, "SetTileSize" }, // 2043470816
		{ &Z_Construct_UFunction_AMobBase2D_SetTrajectory, "SetTrajectory" }, // 1047867638
		{ &Z_Construct_UFunction_AMobBase2D_StopMovement, "StopMovement" }, // 3003383083
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Basic class for all mobs and characters in MirWorld\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MobBase2D.h" },
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic class for all mobs and characters in MirWorld" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTile_MetaData[] = {
		{ "Category", "Mob State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tile where mob is located. Tile mob can go back to\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile where mob is located. Tile mob can go back to" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTile = { "CurrentTile", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobBase2D, CurrentTile), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTile_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_NextTile_MetaData[] = {
		{ "Category", "Mob State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tile mob is heading to\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile mob is heading to" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_NextTile = { "NextTile", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobBase2D, NextTile), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_NextTile_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_NextTile_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTrajectory_Inner = { "CurrentTrajectory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTrajectory_MetaData[] = {
		{ "Category", "Mob State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Trajectory of movement\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trajectory of movement" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTrajectory = { "CurrentTrajectory", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobBase2D, CurrentTrajectory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTrajectory_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTrajectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_IsMoving_MetaData[] = {
		{ "Category", "Mob State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows if mob is moving\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows if mob is moving" },
#endif
	};
#endif
	void Z_Construct_UClass_AMobBase2D_Statics::NewProp_IsMoving_SetBit(void* Obj)
	{
		((AMobBase2D*)Obj)->IsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMobBase2D), &Z_Construct_UClass_AMobBase2D_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_IsMoving_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_IsMoving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_SecsForNextTile_MetaData[] = {
		{ "Category", "Mob Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time amount for moving to the next tile\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time amount for moving to the next tile" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_SecsForNextTile = { "SecsForNextTile", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobBase2D, SecsForNextTile), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_SecsForNextTile_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_SecsForNextTile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_MotionFrameAmount_MetaData[] = {
		{ "Category", "Mob Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amount of fraims showing the movement to the next tile\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of fraims showing the movement to the next tile" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_MotionFrameAmount = { "MotionFrameAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobBase2D, MotionFrameAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_MotionFrameAmount_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_MotionFrameAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Mob Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A size of tile's side\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A size of tile's side" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobBase2D, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_TileSize_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_TileSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Mob Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How fast mob moves to the next tile\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast mob moves to the next tile" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobBase2D, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_MovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_MaxHealthPoints_MetaData[] = {
		{ "Category", "Mob Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much health the mob has at maximum\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much health the mob has at maximum" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_MaxHealthPoints = { "MaxHealthPoints", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobBase2D, MaxHealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_MaxHealthPoints_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_MaxHealthPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentHealthPoints_MetaData[] = {
		{ "Category", "Mob State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much health the mob currently has\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much health the mob currently has" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentHealthPoints = { "CurrentHealthPoints", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobBase2D, CurrentHealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentHealthPoints_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentHealthPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobBase2D_Statics::NewProp_HasTask_MetaData[] = {
		{ "Category", "Mob State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows if mob has some incomplete mission\n" },
#endif
		{ "ModuleRelativePath", "MobBase2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows if mob has some incomplete mission" },
#endif
	};
#endif
	void Z_Construct_UClass_AMobBase2D_Statics::NewProp_HasTask_SetBit(void* Obj)
	{
		((AMobBase2D*)Obj)->HasTask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMobBase2D_Statics::NewProp_HasTask = { "HasTask", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMobBase2D), &Z_Construct_UClass_AMobBase2D_Statics::NewProp_HasTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::NewProp_HasTask_MetaData), Z_Construct_UClass_AMobBase2D_Statics::NewProp_HasTask_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMobBase2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_NextTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTrajectory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_IsMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_SecsForNextTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_MotionFrameAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_MaxHealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_CurrentHealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobBase2D_Statics::NewProp_HasTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMobBase2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMobBase2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMobBase2D_Statics::ClassParams = {
		&AMobBase2D::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMobBase2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::Class_MetaDataParams), Z_Construct_UClass_AMobBase2D_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobBase2D_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMobBase2D()
	{
		if (!Z_Registration_Info_UClass_AMobBase2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMobBase2D.OuterSingleton, Z_Construct_UClass_AMobBase2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMobBase2D.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<AMobBase2D>()
	{
		return AMobBase2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMobBase2D);
	AMobBase2D::~AMobBase2D() {}
	struct Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMobBase2D, AMobBase2D::StaticClass, TEXT("AMobBase2D"), &Z_Registration_Info_UClass_AMobBase2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMobBase2D), 3790788223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_2040985828(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_MobBase2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
