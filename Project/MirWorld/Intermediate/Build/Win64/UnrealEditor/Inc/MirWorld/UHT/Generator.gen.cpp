// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/Generator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerator() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_AGenerator();
	MIRWORLD_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_AResource_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_ATile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(AGenerator::execGetTrajectory)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_Aim);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetTrajectory(Z_Param_Start,Z_Param_Aim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execClearTiles)
	{
		P_GET_TARRAY(FVector,Z_Param_Tiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTiles(Z_Param_Tiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execGetStartPositions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetStartPositions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execTileIsBuildable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TileIsBuildable(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execTileIsPassable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TileIsPassable(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execBuildMap)
	{
		P_GET_STRUCT(FVector,Z_Param_CenteredLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildMap(Z_Param_CenteredLocation,Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execGetIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execSetIsLoaded)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLoaded(Z_Param_value);
		P_NATIVE_END;
	}
	void AGenerator::StaticRegisterNativesAGenerator()
	{
		UClass* Class = AGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildMap", &AGenerator::execBuildMap },
			{ "ClearTiles", &AGenerator::execClearTiles },
			{ "GetIsLoaded", &AGenerator::execGetIsLoaded },
			{ "GetStartPositions", &AGenerator::execGetStartPositions },
			{ "GetTrajectory", &AGenerator::execGetTrajectory },
			{ "SetIsLoaded", &AGenerator::execSetIsLoaded },
			{ "TileIsBuildable", &AGenerator::execTileIsBuildable },
			{ "TileIsPassable", &AGenerator::execTileIsPassable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGenerator_BuildMap_Statics
	{
		struct Generator_eventBuildMap_Parms
		{
			FVector CenteredLocation;
			int32 X;
			int32 Y;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenteredLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenteredLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_CenteredLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_CenteredLocation = { "CenteredLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventBuildMap_Parms, CenteredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_CenteredLocation_MetaData), Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_CenteredLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventBuildMap_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_X_MetaData), Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventBuildMap_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_Y_MetaData), Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_Y_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_BuildMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_CenteredLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_BuildMap_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_BuildMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_BuildMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "BuildMap", nullptr, nullptr, Z_Construct_UFunction_AGenerator_BuildMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_BuildMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_BuildMap_Statics::Generator_eventBuildMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_BuildMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_BuildMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_BuildMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_BuildMap_Statics::Generator_eventBuildMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_BuildMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_BuildMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_ClearTiles_Statics
	{
		struct Generator_eventClearTiles_Parms
		{
			TArray<FVector> Tiles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerator_ClearTiles_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGenerator_ClearTiles_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventClearTiles_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_ClearTiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_ClearTiles_Statics::NewProp_Tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_ClearTiles_Statics::NewProp_Tiles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_ClearTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_ClearTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "ClearTiles", nullptr, nullptr, Z_Construct_UFunction_AGenerator_ClearTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_ClearTiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_ClearTiles_Statics::Generator_eventClearTiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_ClearTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_ClearTiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_ClearTiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_ClearTiles_Statics::Generator_eventClearTiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_ClearTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_ClearTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics
	{
		struct Generator_eventGetIsLoaded_Parms
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
	void Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Generator_eventGetIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Generator_eventGetIsLoaded_Parms), &Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "GetIsLoaded", nullptr, nullptr, Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::Generator_eventGetIsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::Generator_eventGetIsLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_GetIsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_GetIsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_GetStartPositions_Statics
	{
		struct Generator_eventGetStartPositions_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGetStartPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "GetStartPositions", nullptr, nullptr, Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::Generator_eventGetStartPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::Generator_eventGetStartPositions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_GetStartPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_GetStartPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_GetTrajectory_Statics
	{
		struct Generator_eventGetTrajectory_Parms
		{
			FVector Start;
			FVector Aim;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aim;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGetTrajectory_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::NewProp_Aim = { "Aim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGetTrajectory_Parms, Aim), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGetTrajectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::NewProp_Aim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the trajectory from Start to Aim or NO_WAY = \n" },
#endif
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the trajectory from Start to Aim or NO_WAY =" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "GetTrajectory", nullptr, nullptr, Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::Generator_eventGetTrajectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::Generator_eventGetTrajectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_GetTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_GetTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics
	{
		struct Generator_eventSetIsLoaded_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::NewProp_value_SetBit(void* Obj)
	{
		((Generator_eventSetIsLoaded_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Generator_eventSetIsLoaded_Parms), &Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "SetIsLoaded", nullptr, nullptr, Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::Generator_eventSetIsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::Generator_eventSetIsLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_SetIsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_SetIsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics
	{
		struct Generator_eventTileIsBuildable_Parms
		{
			int32 X;
			int32 Y;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventTileIsBuildable_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_X_MetaData), Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventTileIsBuildable_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_Y_MetaData), Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_Y_MetaData) };
	void Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Generator_eventTileIsBuildable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Generator_eventTileIsBuildable_Parms), &Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "TileIsBuildable", nullptr, nullptr, Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::Generator_eventTileIsBuildable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::Generator_eventTileIsBuildable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_TileIsBuildable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_TileIsBuildable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_TileIsPassable_Statics
	{
		struct Generator_eventTileIsPassable_Parms
		{
			int32 X;
			int32 Y;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventTileIsPassable_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_X_MetaData), Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventTileIsPassable_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_Y_MetaData), Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_Y_MetaData) };
	void Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Generator_eventTileIsPassable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Generator_eventTileIsPassable_Parms), &Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "TileIsPassable", nullptr, nullptr, Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::Generator_eventTileIsPassable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::Generator_eventTileIsPassable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_TileIsPassable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_TileIsPassable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGenerator);
	UClass* Z_Construct_UClass_AGenerator_NoRegister()
	{
		return AGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoaded_MetaData[];
#endif
		static void NewProp_bIsLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapSize;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TileMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TileMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TileType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeType_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TreeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoneType_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_StoneType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ObjectType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGenerator_BuildMap, "BuildMap" }, // 2181011163
		{ &Z_Construct_UFunction_AGenerator_ClearTiles, "ClearTiles" }, // 819188836
		{ &Z_Construct_UFunction_AGenerator_GetIsLoaded, "GetIsLoaded" }, // 404968099
		{ &Z_Construct_UFunction_AGenerator_GetStartPositions, "GetStartPositions" }, // 3431098489
		{ &Z_Construct_UFunction_AGenerator_GetTrajectory, "GetTrajectory" }, // 3933290406
		{ &Z_Construct_UFunction_AGenerator_SetIsLoaded, "SetIsLoaded" }, // 2904779625
		{ &Z_Construct_UFunction_AGenerator_TileIsBuildable, "TileIsBuildable" }, // 1546904854
		{ &Z_Construct_UFunction_AGenerator_TileIsPassable, "TileIsPassable" }, // 444847072
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Generator.h" },
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_bIsLoaded_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	void Z_Construct_UClass_AGenerator_Statics::NewProp_bIsLoaded_SetBit(void* Obj)
	{
		((AGenerator*)Obj)->bIsLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_bIsLoaded = { "bIsLoaded", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGenerator), &Z_Construct_UClass_AGenerator_Statics::NewProp_bIsLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_bIsLoaded_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_bIsLoaded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_MapSize_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map Properties\n" },
#endif
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map Properties" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_MapSize = { "MapSize", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, MapSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_MapSize_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_MapSize_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_TileMap_Inner = { "TileMap", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_TileMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Container which contains Tiles, displayed in the world\n" },
#endif
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container which contains Tiles, displayed in the world" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_TileMap = { "TileMap", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, TileMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_TileMap_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_TileMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_TileType_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------\n//Actors' inherited objects\n//Class which contains info about tile we want to create than it which will be located to MapTiles  \n" },
#endif
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actors' inherited objects\nClass which contains info about tile we want to create than it which will be located to MapTiles" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, TileType), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_TileType_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_TileType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_TreeType_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_TreeType = { "TreeType", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, TreeType), Z_Construct_UClass_AResource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_TreeType_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_TreeType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_StoneType_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_StoneType = { "StoneType", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, StoneType), Z_Construct_UClass_AResource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_StoneType_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_StoneType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, ObjectType), Z_Construct_UClass_AResource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_ObjectType_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_ObjectType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_bIsLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_MapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_TileMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_TileMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_TileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_TreeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_StoneType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_ObjectType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGenerator_Statics::ClassParams = {
		&AGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGenerator()
	{
		if (!Z_Registration_Info_UClass_AGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGenerator.OuterSingleton, Z_Construct_UClass_AGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGenerator.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<AGenerator>()
	{
		return AGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenerator);
	AGenerator::~AGenerator() {}
	struct Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGenerator, AGenerator::StaticClass, TEXT("AGenerator"), &Z_Registration_Info_UClass_AGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGenerator), 2340545519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_2217098508(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Generator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
