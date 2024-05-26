// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/GameplayMW_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayMW_GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MIRWORLD_API UClass* Z_Construct_UClass_ACharacterMW2D_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_AGameplayMW_GameMode();
	MIRWORLD_API UClass* Z_Construct_UClass_AGameplayMW_GameMode_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_UTaskManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(AGameplayMW_GameMode::execGM_StartTask)
	{
		P_GET_OBJECT(ACharacterMW2D,Z_Param_Char);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GM_StartTask(Z_Param_Char);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayMW_GameMode::execGM_ClearTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GM_ClearTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayMW_GameMode::execGM_AddTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TaskType);
		P_GET_OBJECT(AActor,Z_Param_Aim);
		P_GET_TSET(int32,Z_Param_IDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GM_AddTask(Z_Param_TaskType,Z_Param_Aim,Z_Param_IDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayMW_GameMode::execGM_SetPriorityMatrix)
	{
		P_GET_TARRAY(int32,Z_Param_NewMatrix);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GM_SetPriorityMatrix(Z_Param_NewMatrix,Z_Param_ID);
		P_NATIVE_END;
	}
	static FName NAME_AGameplayMW_GameMode_EndGame_Defeat = FName(TEXT("EndGame_Defeat"));
	void AGameplayMW_GameMode::EndGame_Defeat()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayMW_GameMode_EndGame_Defeat),NULL);
	}
	static FName NAME_AGameplayMW_GameMode_EndGame_Victory = FName(TEXT("EndGame_Victory"));
	void AGameplayMW_GameMode::EndGame_Victory()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayMW_GameMode_EndGame_Victory),NULL);
	}
	static FName NAME_AGameplayMW_GameMode_UpdateScore = FName(TEXT("UpdateScore"));
	void AGameplayMW_GameMode::UpdateScore()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayMW_GameMode_UpdateScore),NULL);
	}
	void AGameplayMW_GameMode::StaticRegisterNativesAGameplayMW_GameMode()
	{
		UClass* Class = AGameplayMW_GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GM_AddTask", &AGameplayMW_GameMode::execGM_AddTask },
			{ "GM_ClearTasks", &AGameplayMW_GameMode::execGM_ClearTasks },
			{ "GM_SetPriorityMatrix", &AGameplayMW_GameMode::execGM_SetPriorityMatrix },
			{ "GM_StartTask", &AGameplayMW_GameMode::execGM_StartTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements the logic of defeat\n/// implemented in BPs\n" },
#endif
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the logic of defeat\nimplemented in BPs" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "EndGame_Defeat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::Function_MetaDataParams[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements the logic of victory\n/// implemented in BPs\n" },
#endif
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the logic of victory\nimplemented in BPs" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "EndGame_Victory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics
	{
		struct GameplayMW_GameMode_eventGM_AddTask_Parms
		{
			int32 TaskType;
			AActor* Aim;
			TSet<int32> IDs;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TaskType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Aim;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IDs_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_IDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayMW_GameMode_eventGM_AddTask_Parms, TaskType), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::NewProp_Aim = { "Aim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayMW_GameMode_eventGM_AddTask_Parms, Aim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::NewProp_IDs_ElementProp = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayMW_GameMode_eventGM_AddTask_Parms, IDs), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::NewProp_TaskType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::NewProp_Aim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::NewProp_IDs_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::NewProp_IDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tasks" },
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "GM_AddTask", nullptr, nullptr, Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::GameplayMW_GameMode_eventGM_AddTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::GameplayMW_GameMode_eventGM_AddTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_GM_ClearTasks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_GM_ClearTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tasks" },
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_ClearTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "GM_ClearTasks", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_ClearTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_GM_ClearTasks_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_GM_ClearTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_GM_ClearTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics
	{
		struct GameplayMW_GameMode_eventGM_SetPriorityMatrix_Parms
		{
			TArray<int32> NewMatrix;
			int32 ID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewMatrix_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewMatrix;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::NewProp_NewMatrix_Inner = { "NewMatrix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::NewProp_NewMatrix = { "NewMatrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayMW_GameMode_eventGM_SetPriorityMatrix_Parms, NewMatrix), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayMW_GameMode_eventGM_SetPriorityMatrix_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::NewProp_NewMatrix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::NewProp_NewMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tasks" },
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "GM_SetPriorityMatrix", nullptr, nullptr, Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::GameplayMW_GameMode_eventGM_SetPriorityMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::GameplayMW_GameMode_eventGM_SetPriorityMatrix_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics
	{
		struct GameplayMW_GameMode_eventGM_StartTask_Parms
		{
			ACharacterMW2D* Char;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Char;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::NewProp_Char = { "Char", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayMW_GameMode_eventGM_StartTask_Parms, Char), Z_Construct_UClass_ACharacterMW2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayMW_GameMode_eventGM_StartTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayMW_GameMode_eventGM_StartTask_Parms), &Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::NewProp_Char,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tasks" },
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "GM_StartTask", nullptr, nullptr, Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::GameplayMW_GameMode_eventGM_StartTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::GameplayMW_GameMode_eventGM_StartTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the UI score cntr\n/// implemented in BPs\n" },
#endif
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the UI score cntr\nimplemented in BPs" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "UpdateScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayMW_GameMode);
	UClass* Z_Construct_UClass_AGameplayMW_GameMode_NoRegister()
	{
		return AGameplayMW_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayMW_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayMW_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayMW_GameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayMW_GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat, "EndGame_Defeat" }, // 2444742473
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory, "EndGame_Victory" }, // 4203716490
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_GM_AddTask, "GM_AddTask" }, // 2272874848
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_GM_ClearTasks, "GM_ClearTasks" }, // 1573394295
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_GM_SetPriorityMatrix, "GM_SetPriorityMatrix" }, // 431896826
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_GM_StartTask, "GM_StartTask" }, // 3374168614
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore, "UpdateScore" }, // 1998281312
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayMW_GameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayMW_GameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameplayMW_GameMode.h" },
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayMW_GameMode_Statics::NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayMW_GameMode_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayMW_GameMode, Manager), Z_Construct_UClass_UTaskManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayMW_GameMode_Statics::NewProp_Manager_MetaData), Z_Construct_UClass_AGameplayMW_GameMode_Statics::NewProp_Manager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayMW_GameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayMW_GameMode_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayMW_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayMW_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayMW_GameMode_Statics::ClassParams = {
		&AGameplayMW_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameplayMW_GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayMW_GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayMW_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayMW_GameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayMW_GameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGameplayMW_GameMode()
	{
		if (!Z_Registration_Info_UClass_AGameplayMW_GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayMW_GameMode.OuterSingleton, Z_Construct_UClass_AGameplayMW_GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayMW_GameMode.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<AGameplayMW_GameMode>()
	{
		return AGameplayMW_GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayMW_GameMode);
	AGameplayMW_GameMode::~AGameplayMW_GameMode() {}
	struct Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayMW_GameMode, AGameplayMW_GameMode::StaticClass, TEXT("AGameplayMW_GameMode"), &Z_Registration_Info_UClass_AGameplayMW_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayMW_GameMode), 871730805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_3446669850(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
