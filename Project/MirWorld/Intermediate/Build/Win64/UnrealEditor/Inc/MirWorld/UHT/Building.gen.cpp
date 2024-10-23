// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/Building.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilding() {}
// Cross Module References
	MIRWORLD_API UClass* Z_Construct_UClass_ABasicActor();
	MIRWORLD_API UClass* Z_Construct_UClass_ABuilding();
	MIRWORLD_API UClass* Z_Construct_UClass_ABuilding_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(ABuilding::execGetReadinessPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReadinessPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuilding::execSetIsReady)
	{
		P_GET_UBOOL(Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsReady(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuilding::execGetIsReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuilding::execGetBuildingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBuildingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuilding::execBuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Build();
		P_NATIVE_END;
	}
	static FName NAME_ABuilding_BecomeReady = FName(TEXT("BecomeReady"));
	void ABuilding::BecomeReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABuilding_BecomeReady),NULL);
	}
	void ABuilding::StaticRegisterNativesABuilding()
	{
		UClass* Class = ABuilding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Build", &ABuilding::execBuild },
			{ "GetBuildingTime", &ABuilding::execGetBuildingTime },
			{ "GetIsReady", &ABuilding::execGetIsReady },
			{ "GetReadinessPercentage", &ABuilding::execGetReadinessPercentage },
			{ "SetIsReady", &ABuilding::execSetIsReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuilding_BecomeReady_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilding_BecomeReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// implemented in BPs\n" },
#endif
		{ "ModuleRelativePath", "Building.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "implemented in BPs" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilding_BecomeReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilding, nullptr, "BecomeReady", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_BecomeReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuilding_BecomeReady_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABuilding_BecomeReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuilding_BecomeReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuilding_Build_Statics
	{
		struct Building_eventBuild_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABuilding_Build_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Building_eventBuild_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuilding_Build_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_Build_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilding_Build_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Commit one time for building\n" },
#endif
		{ "ModuleRelativePath", "Building.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Commit one time for building" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilding_Build_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilding, nullptr, "Build", nullptr, nullptr, Z_Construct_UFunction_ABuilding_Build_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_Build_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABuilding_Build_Statics::Building_eventBuild_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_Build_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuilding_Build_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_Build_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABuilding_Build_Statics::Building_eventBuild_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABuilding_Build()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuilding_Build_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics
	{
		struct Building_eventGetBuildingTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Building_eventGetBuildingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilding, nullptr, "GetBuildingTime", nullptr, nullptr, Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::Building_eventGetBuildingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::Building_eventGetBuildingTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABuilding_GetBuildingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuilding_GetBuildingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuilding_GetIsReady_Statics
	{
		struct Building_eventGetIsReady_Parms
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
	void Z_Construct_UFunction_ABuilding_GetIsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Building_eventGetIsReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuilding_GetIsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Building_eventGetIsReady_Parms), &Z_Construct_UFunction_ABuilding_GetIsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuilding_GetIsReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_GetIsReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilding_GetIsReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilding_GetIsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilding, nullptr, "GetIsReady", nullptr, nullptr, Z_Construct_UFunction_ABuilding_GetIsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_GetIsReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABuilding_GetIsReady_Statics::Building_eventGetIsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_GetIsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuilding_GetIsReady_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_GetIsReady_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABuilding_GetIsReady_Statics::Building_eventGetIsReady_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABuilding_GetIsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuilding_GetIsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics
	{
		struct Building_eventGetReadinessPercentage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Building_eventGetReadinessPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilding, nullptr, "GetReadinessPercentage", nullptr, nullptr, Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::Building_eventGetReadinessPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::Building_eventGetReadinessPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABuilding_GetReadinessPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuilding_GetReadinessPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuilding_SetIsReady_Statics
	{
		struct Building_eventSetIsReady_Parms
		{
			bool NewState;
		};
		static void NewProp_NewState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABuilding_SetIsReady_Statics::NewProp_NewState_SetBit(void* Obj)
	{
		((Building_eventSetIsReady_Parms*)Obj)->NewState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuilding_SetIsReady_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Building_eventSetIsReady_Parms), &Z_Construct_UFunction_ABuilding_SetIsReady_Statics::NewProp_NewState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuilding_SetIsReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_SetIsReady_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilding_SetIsReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilding_SetIsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilding, nullptr, "SetIsReady", nullptr, nullptr, Z_Construct_UFunction_ABuilding_SetIsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_SetIsReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABuilding_SetIsReady_Statics::Building_eventSetIsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_SetIsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuilding_SetIsReady_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_SetIsReady_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABuilding_SetIsReady_Statics::Building_eventSetIsReady_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABuilding_SetIsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuilding_SetIsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilding);
	UClass* Z_Construct_UClass_ABuilding_NoRegister()
	{
		return ABuilding::StaticClass();
	}
	struct Z_Construct_UClass_ABuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimesRequiredBuilding_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimesRequiredBuilding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuilding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuilding_BecomeReady, "BecomeReady" }, // 2505183922
		{ &Z_Construct_UFunction_ABuilding_Build, "Build" }, // 2429025959
		{ &Z_Construct_UFunction_ABuilding_GetBuildingTime, "GetBuildingTime" }, // 1218268819
		{ &Z_Construct_UFunction_ABuilding_GetIsReady, "GetIsReady" }, // 1723924404
		{ &Z_Construct_UFunction_ABuilding_GetReadinessPercentage, "GetReadinessPercentage" }, // 1913725808
		{ &Z_Construct_UFunction_ABuilding_SetIsReady, "SetIsReady" }, // 692177475
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Building.h" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingTime_MetaData[] = {
		{ "Category", "Building" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// One \"portion\"\n" },
#endif
		{ "ModuleRelativePath", "Building.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One \"portion\"" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingTime = { "BuildingTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilding, BuildingTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingTime_MetaData), Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_TimesRequiredBuilding_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_TimesRequiredBuilding = { "TimesRequiredBuilding", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilding, TimesRequiredBuilding), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_TimesRequiredBuilding_MetaData), Z_Construct_UClass_ABuilding_Statics::NewProp_TimesRequiredBuilding_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_TimesRequiredBuilding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilding_Statics::ClassParams = {
		&ABuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuilding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABuilding()
	{
		if (!Z_Registration_Info_UClass_ABuilding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilding.OuterSingleton, Z_Construct_UClass_ABuilding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuilding.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<ABuilding>()
	{
		return ABuilding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilding);
	ABuilding::~ABuilding() {}
	struct Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuilding, ABuilding::StaticClass, TEXT("ABuilding"), &Z_Registration_Info_UClass_ABuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilding), 2340959616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_1594801473(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
