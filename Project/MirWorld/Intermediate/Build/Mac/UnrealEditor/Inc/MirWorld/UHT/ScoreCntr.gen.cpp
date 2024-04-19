// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/ScoreCntr.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreCntr() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MIRWORLD_API UClass* Z_Construct_UClass_AScoreCntr();
	MIRWORLD_API UClass* Z_Construct_UClass_AScoreCntr_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(AScoreCntr::execLoseTheGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoseTheGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScoreCntr::execWinTheGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WinTheGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScoreCntr::execUpdateDecrease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDecrease();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScoreCntr::execDecreaseScore_T)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseScore_T();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScoreCntr::execDecreaseScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_dScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseScore(Z_Param_dScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScoreCntr::execIncreaseScoreByExtracting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Banch);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResourceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseScoreByExtracting(Z_Param_Banch,Z_Param_ResourceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScoreCntr::execIncreaseScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_dScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseScore(Z_Param_dScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScoreCntr::execCheckScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckScore();
		P_NATIVE_END;
	}
	void AScoreCntr::StaticRegisterNativesAScoreCntr()
	{
		UClass* Class = AScoreCntr::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckScore", &AScoreCntr::execCheckScore },
			{ "DecreaseScore", &AScoreCntr::execDecreaseScore },
			{ "DecreaseScore_T", &AScoreCntr::execDecreaseScore_T },
			{ "IncreaseScore", &AScoreCntr::execIncreaseScore },
			{ "IncreaseScoreByExtracting", &AScoreCntr::execIncreaseScoreByExtracting },
			{ "LoseTheGame", &AScoreCntr::execLoseTheGame },
			{ "UpdateDecrease", &AScoreCntr::execUpdateDecrease },
			{ "WinTheGame", &AScoreCntr::execWinTheGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScoreCntr_CheckScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoreCntr_CheckScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks the score for victory or defeat\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks the score for victory or defeat" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreCntr_CheckScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreCntr, nullptr, "CheckScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_CheckScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreCntr_CheckScore_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AScoreCntr_CheckScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreCntr_CheckScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics
	{
		struct ScoreCntr_eventDecreaseScore_Parms
		{
			int32 dScore;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_dScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::NewProp_dScore = { "dScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreCntr_eventDecreaseScore_Parms, dScore), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::NewProp_dScore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decreases score\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decreases score" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreCntr, nullptr, "DecreaseScore", nullptr, nullptr, Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::ScoreCntr_eventDecreaseScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::ScoreCntr_eventDecreaseScore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AScoreCntr_DecreaseScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreCntr_DecreaseScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScoreCntr_DecreaseScore_T_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoreCntr_DecreaseScore_T_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decreases score cyclically\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decreases score cyclically" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreCntr_DecreaseScore_T_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreCntr, nullptr, "DecreaseScore_T", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_DecreaseScore_T_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreCntr_DecreaseScore_T_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AScoreCntr_DecreaseScore_T()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreCntr_DecreaseScore_T_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics
	{
		struct ScoreCntr_eventIncreaseScore_Parms
		{
			int32 dScore;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_dScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::NewProp_dScore = { "dScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreCntr_eventIncreaseScore_Parms, dScore), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::NewProp_dScore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increases score\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increases score" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreCntr, nullptr, "IncreaseScore", nullptr, nullptr, Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::ScoreCntr_eventIncreaseScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::ScoreCntr_eventIncreaseScore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AScoreCntr_IncreaseScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreCntr_IncreaseScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics
	{
		struct ScoreCntr_eventIncreaseScoreByExtracting_Parms
		{
			int32 Banch;
			int32 ResourceType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Banch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::NewProp_Banch = { "Banch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreCntr_eventIncreaseScoreByExtracting_Parms, Banch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreCntr_eventIncreaseScoreByExtracting_Parms, ResourceType), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::NewProp_Banch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::NewProp_ResourceType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increases score when resources are extracted\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increases score when resources are extracted" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreCntr, nullptr, "IncreaseScoreByExtracting", nullptr, nullptr, Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::ScoreCntr_eventIncreaseScoreByExtracting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::ScoreCntr_eventIncreaseScoreByExtracting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScoreCntr_LoseTheGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoreCntr_LoseTheGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the \n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreCntr_LoseTheGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreCntr, nullptr, "LoseTheGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_LoseTheGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreCntr_LoseTheGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AScoreCntr_LoseTheGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreCntr_LoseTheGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScoreCntr_UpdateDecrease_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoreCntr_UpdateDecrease_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updates score decreasement value\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates score decreasement value" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreCntr_UpdateDecrease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreCntr, nullptr, "UpdateDecrease", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_UpdateDecrease_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreCntr_UpdateDecrease_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AScoreCntr_UpdateDecrease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreCntr_UpdateDecrease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScoreCntr_WinTheGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoreCntr_WinTheGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the game is won\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the game is won" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreCntr_WinTheGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreCntr, nullptr, "WinTheGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCntr_WinTheGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreCntr_WinTheGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AScoreCntr_WinTheGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreCntr_WinTheGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScoreCntr);
	UClass* Z_Construct_UClass_AScoreCntr_NoRegister()
	{
		return AScoreCntr::StaticClass();
	}
	struct Z_Construct_UClass_AScoreCntr_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreDecrease_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreDecrease;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecreaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecreaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VictoryValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VictoryValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResourceMultiplier_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourceMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScoreCntr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AScoreCntr_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScoreCntr_CheckScore, "CheckScore" }, // 1705209645
		{ &Z_Construct_UFunction_AScoreCntr_DecreaseScore, "DecreaseScore" }, // 3024866344
		{ &Z_Construct_UFunction_AScoreCntr_DecreaseScore_T, "DecreaseScore_T" }, // 3103852550
		{ &Z_Construct_UFunction_AScoreCntr_IncreaseScore, "IncreaseScore" }, // 2284042891
		{ &Z_Construct_UFunction_AScoreCntr_IncreaseScoreByExtracting, "IncreaseScoreByExtracting" }, // 1916298014
		{ &Z_Construct_UFunction_AScoreCntr_LoseTheGame, "LoseTheGame" }, // 2361189093
		{ &Z_Construct_UFunction_AScoreCntr_UpdateDecrease, "UpdateDecrease" }, // 684727980
		{ &Z_Construct_UFunction_AScoreCntr_WinTheGame, "WinTheGame" }, // 3106081493
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCntr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScoreCntr.h" },
		{ "ModuleRelativePath", "ScoreCntr.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCntr_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main metric of success in the game\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main metric of success in the game" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AScoreCntr_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreCntr, Score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::NewProp_Score_MetaData), Z_Construct_UClass_AScoreCntr_Statics::NewProp_Score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCntr_Statics::NewProp_ScoreDecrease_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main metrics of success in the game\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main metrics of success in the game" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AScoreCntr_Statics::NewProp_ScoreDecrease = { "ScoreDecrease", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreCntr, ScoreDecrease), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::NewProp_ScoreDecrease_MetaData), Z_Construct_UClass_AScoreCntr_Statics::NewProp_ScoreDecrease_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCntr_Statics::NewProp_DecreaseTime_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time spot between decreases of the score\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time spot between decreases of the score" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScoreCntr_Statics::NewProp_DecreaseTime = { "DecreaseTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreCntr, DecreaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::NewProp_DecreaseTime_MetaData), Z_Construct_UClass_AScoreCntr_Statics::NewProp_DecreaseTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCntr_Statics::NewProp_VictoryValue_MetaData[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Score value required for victory\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Score value required for victory" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AScoreCntr_Statics::NewProp_VictoryValue = { "VictoryValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreCntr, VictoryValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::NewProp_VictoryValue_MetaData), Z_Construct_UClass_AScoreCntr_Statics::NewProp_VictoryValue_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AScoreCntr_Statics::NewProp_ResourceMultiplier_Inner = { "ResourceMultiplier", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCntr_Statics::NewProp_ResourceMultiplier_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// refers to the value of different resource's types\n" },
#endif
		{ "ModuleRelativePath", "ScoreCntr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "refers to the value of different resource's types" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AScoreCntr_Statics::NewProp_ResourceMultiplier = { "ResourceMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreCntr, ResourceMultiplier), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::NewProp_ResourceMultiplier_MetaData), Z_Construct_UClass_AScoreCntr_Statics::NewProp_ResourceMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoreCntr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCntr_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCntr_Statics::NewProp_ScoreDecrease,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCntr_Statics::NewProp_DecreaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCntr_Statics::NewProp_VictoryValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCntr_Statics::NewProp_ResourceMultiplier_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCntr_Statics::NewProp_ResourceMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScoreCntr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreCntr>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScoreCntr_Statics::ClassParams = {
		&AScoreCntr::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AScoreCntr_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::Class_MetaDataParams), Z_Construct_UClass_AScoreCntr_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCntr_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AScoreCntr()
	{
		if (!Z_Registration_Info_UClass_AScoreCntr.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScoreCntr.OuterSingleton, Z_Construct_UClass_AScoreCntr_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AScoreCntr.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<AScoreCntr>()
	{
		return AScoreCntr::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreCntr);
	AScoreCntr::~AScoreCntr() {}
	struct Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AScoreCntr, AScoreCntr::StaticClass, TEXT("AScoreCntr"), &Z_Registration_Info_UClass_AScoreCntr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoreCntr), 365504380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_2262526597(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_ScoreCntr_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
