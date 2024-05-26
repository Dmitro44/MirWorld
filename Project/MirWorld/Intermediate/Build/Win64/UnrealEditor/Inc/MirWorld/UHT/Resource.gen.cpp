// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/Resource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResource() {}
// Cross Module References
	MIRWORLD_API UClass* Z_Construct_UClass_ABasicActor();
	MIRWORLD_API UClass* Z_Construct_UClass_AResource();
	MIRWORLD_API UClass* Z_Construct_UClass_AResource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(AResource::execSetResourceType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResourceType(Z_Param_NewType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execGetRandomGenerationNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomGenerationNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execSetRandomGenerationNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRandomGenerationNum(Z_Param_Num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execSetDoesExist)
	{
		P_GET_UBOOL(Z_Param_NewStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDoesExist(Z_Param_NewStatus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execGetDoesExist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDoesExist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execSetBiomeType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBiomeType(Z_Param_NewType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execGetBiomeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBiomeType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execSetResourceLeft)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ResourseLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResourceLeft(Z_Param_ResourseLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execGetResourceLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResourceLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execGetResourceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResourceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execExtractRes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ExtractRes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execGiveBunch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GiveBunch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execSetExtractTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtractTime(Z_Param_NewTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execSetMineTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMineTime(Z_Param_NewTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execExtractTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ExtractTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execMineTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->MineTime();
		P_NATIVE_END;
	}
	void AResource::StaticRegisterNativesAResource()
	{
		UClass* Class = AResource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtractRes", &AResource::execExtractRes },
			{ "ExtractTime", &AResource::execExtractTime },
			{ "GetBiomeType", &AResource::execGetBiomeType },
			{ "GetDoesExist", &AResource::execGetDoesExist },
			{ "GetRandomGenerationNum", &AResource::execGetRandomGenerationNum },
			{ "GetResourceLeft", &AResource::execGetResourceLeft },
			{ "GetResourceType", &AResource::execGetResourceType },
			{ "GiveBunch", &AResource::execGiveBunch },
			{ "MineTime", &AResource::execMineTime },
			{ "SetBiomeType", &AResource::execSetBiomeType },
			{ "SetDoesExist", &AResource::execSetDoesExist },
			{ "SetExtractTime", &AResource::execSetExtractTime },
			{ "SetMineTime", &AResource::execSetMineTime },
			{ "SetRandomGenerationNum", &AResource::execSetRandomGenerationNum },
			{ "SetResourceLeft", &AResource::execSetResourceLeft },
			{ "SetResourceType", &AResource::execSetResourceType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AResource_ExtractRes_Statics
	{
		struct Resource_eventExtractRes_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_ExtractRes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventExtractRes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_ExtractRes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_ExtractRes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_ExtractRes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_ExtractRes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "ExtractRes", nullptr, nullptr, Z_Construct_UFunction_AResource_ExtractRes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_ExtractRes_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_ExtractRes_Statics::Resource_eventExtractRes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_ExtractRes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_ExtractRes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_ExtractRes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_ExtractRes_Statics::Resource_eventExtractRes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_ExtractRes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_ExtractRes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_ExtractTime_Statics
	{
		struct Resource_eventExtractTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AResource_ExtractTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventExtractTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_ExtractTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_ExtractTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_ExtractTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_ExtractTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "ExtractTime", nullptr, nullptr, Z_Construct_UFunction_AResource_ExtractTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_ExtractTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_ExtractTime_Statics::Resource_eventExtractTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_ExtractTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_ExtractTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_ExtractTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_ExtractTime_Statics::Resource_eventExtractTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_ExtractTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_ExtractTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_GetBiomeType_Statics
	{
		struct Resource_eventGetBiomeType_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_GetBiomeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventGetBiomeType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_GetBiomeType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_GetBiomeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_GetBiomeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_GetBiomeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "GetBiomeType", nullptr, nullptr, Z_Construct_UFunction_AResource_GetBiomeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetBiomeType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_GetBiomeType_Statics::Resource_eventGetBiomeType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetBiomeType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_GetBiomeType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetBiomeType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_GetBiomeType_Statics::Resource_eventGetBiomeType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_GetBiomeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_GetBiomeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_GetDoesExist_Statics
	{
		struct Resource_eventGetDoesExist_Parms
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
	void Z_Construct_UFunction_AResource_GetDoesExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Resource_eventGetDoesExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AResource_GetDoesExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Resource_eventGetDoesExist_Parms), &Z_Construct_UFunction_AResource_GetDoesExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_GetDoesExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_GetDoesExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_GetDoesExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_GetDoesExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "GetDoesExist", nullptr, nullptr, Z_Construct_UFunction_AResource_GetDoesExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetDoesExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_GetDoesExist_Statics::Resource_eventGetDoesExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetDoesExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_GetDoesExist_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetDoesExist_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_GetDoesExist_Statics::Resource_eventGetDoesExist_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_GetDoesExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_GetDoesExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics
	{
		struct Resource_eventGetRandomGenerationNum_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventGetRandomGenerationNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "GetRandomGenerationNum", nullptr, nullptr, Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::Resource_eventGetRandomGenerationNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::Resource_eventGetRandomGenerationNum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_GetRandomGenerationNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_GetRandomGenerationNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_GetResourceLeft_Statics
	{
		struct Resource_eventGetResourceLeft_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_GetResourceLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventGetResourceLeft_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_GetResourceLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_GetResourceLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_GetResourceLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_GetResourceLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "GetResourceLeft", nullptr, nullptr, Z_Construct_UFunction_AResource_GetResourceLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetResourceLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_GetResourceLeft_Statics::Resource_eventGetResourceLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetResourceLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_GetResourceLeft_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetResourceLeft_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_GetResourceLeft_Statics::Resource_eventGetResourceLeft_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_GetResourceLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_GetResourceLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_GetResourceType_Statics
	{
		struct Resource_eventGetResourceType_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_GetResourceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventGetResourceType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_GetResourceType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_GetResourceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_GetResourceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_GetResourceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "GetResourceType", nullptr, nullptr, Z_Construct_UFunction_AResource_GetResourceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetResourceType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_GetResourceType_Statics::Resource_eventGetResourceType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetResourceType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_GetResourceType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GetResourceType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_GetResourceType_Statics::Resource_eventGetResourceType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_GetResourceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_GetResourceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_GiveBunch_Statics
	{
		struct Resource_eventGiveBunch_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_GiveBunch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventGiveBunch_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_GiveBunch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_GiveBunch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_GiveBunch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_GiveBunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "GiveBunch", nullptr, nullptr, Z_Construct_UFunction_AResource_GiveBunch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GiveBunch_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_GiveBunch_Statics::Resource_eventGiveBunch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GiveBunch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_GiveBunch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GiveBunch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_GiveBunch_Statics::Resource_eventGiveBunch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_GiveBunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_GiveBunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_MineTime_Statics
	{
		struct Resource_eventMineTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AResource_MineTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventMineTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_MineTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_MineTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_MineTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_MineTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "MineTime", nullptr, nullptr, Z_Construct_UFunction_AResource_MineTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_MineTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_MineTime_Statics::Resource_eventMineTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_MineTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_MineTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_MineTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_MineTime_Statics::Resource_eventMineTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_MineTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_MineTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_SetBiomeType_Statics
	{
		struct Resource_eventSetBiomeType_Parms
		{
			int32 NewType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_SetBiomeType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventSetBiomeType_Parms, NewType), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_SetBiomeType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_SetBiomeType_Statics::NewProp_NewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_SetBiomeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_SetBiomeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "SetBiomeType", nullptr, nullptr, Z_Construct_UFunction_AResource_SetBiomeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetBiomeType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_SetBiomeType_Statics::Resource_eventSetBiomeType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetBiomeType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_SetBiomeType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetBiomeType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_SetBiomeType_Statics::Resource_eventSetBiomeType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_SetBiomeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_SetBiomeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_SetDoesExist_Statics
	{
		struct Resource_eventSetDoesExist_Parms
		{
			bool NewStatus;
		};
		static void NewProp_NewStatus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AResource_SetDoesExist_Statics::NewProp_NewStatus_SetBit(void* Obj)
	{
		((Resource_eventSetDoesExist_Parms*)Obj)->NewStatus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AResource_SetDoesExist_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Resource_eventSetDoesExist_Parms), &Z_Construct_UFunction_AResource_SetDoesExist_Statics::NewProp_NewStatus_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_SetDoesExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_SetDoesExist_Statics::NewProp_NewStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_SetDoesExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_SetDoesExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "SetDoesExist", nullptr, nullptr, Z_Construct_UFunction_AResource_SetDoesExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetDoesExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_SetDoesExist_Statics::Resource_eventSetDoesExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetDoesExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_SetDoesExist_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetDoesExist_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_SetDoesExist_Statics::Resource_eventSetDoesExist_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_SetDoesExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_SetDoesExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_SetExtractTime_Statics
	{
		struct Resource_eventSetExtractTime_Parms
		{
			float NewTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AResource_SetExtractTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventSetExtractTime_Parms, NewTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_SetExtractTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_SetExtractTime_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_SetExtractTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_SetExtractTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "SetExtractTime", nullptr, nullptr, Z_Construct_UFunction_AResource_SetExtractTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetExtractTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_SetExtractTime_Statics::Resource_eventSetExtractTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetExtractTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_SetExtractTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetExtractTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_SetExtractTime_Statics::Resource_eventSetExtractTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_SetExtractTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_SetExtractTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_SetMineTime_Statics
	{
		struct Resource_eventSetMineTime_Parms
		{
			float NewTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AResource_SetMineTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventSetMineTime_Parms, NewTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_SetMineTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_SetMineTime_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_SetMineTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_SetMineTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "SetMineTime", nullptr, nullptr, Z_Construct_UFunction_AResource_SetMineTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetMineTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_SetMineTime_Statics::Resource_eventSetMineTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetMineTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_SetMineTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetMineTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_SetMineTime_Statics::Resource_eventSetMineTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_SetMineTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_SetMineTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics
	{
		struct Resource_eventSetRandomGenerationNum_Parms
		{
			int32 Num;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventSetRandomGenerationNum_Parms, Num), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::NewProp_Num,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "SetRandomGenerationNum", nullptr, nullptr, Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::Resource_eventSetRandomGenerationNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::Resource_eventSetRandomGenerationNum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_SetRandomGenerationNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_SetRandomGenerationNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_SetResourceLeft_Statics
	{
		struct Resource_eventSetResourceLeft_Parms
		{
			int32 ResourseLeft;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResourseLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_SetResourceLeft_Statics::NewProp_ResourseLeft = { "ResourseLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventSetResourceLeft_Parms, ResourseLeft), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_SetResourceLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_SetResourceLeft_Statics::NewProp_ResourseLeft,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_SetResourceLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_SetResourceLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "SetResourceLeft", nullptr, nullptr, Z_Construct_UFunction_AResource_SetResourceLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetResourceLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_SetResourceLeft_Statics::Resource_eventSetResourceLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetResourceLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_SetResourceLeft_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetResourceLeft_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_SetResourceLeft_Statics::Resource_eventSetResourceLeft_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_SetResourceLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_SetResourceLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_SetResourceType_Statics
	{
		struct Resource_eventSetResourceType_Parms
		{
			int32 NewType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_SetResourceType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventSetResourceType_Parms, NewType), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_SetResourceType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_SetResourceType_Statics::NewProp_NewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_SetResourceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_SetResourceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "SetResourceType", nullptr, nullptr, Z_Construct_UFunction_AResource_SetResourceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetResourceType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_SetResourceType_Statics::Resource_eventSetResourceType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetResourceType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_SetResourceType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_SetResourceType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_SetResourceType_Statics::Resource_eventSetResourceType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_SetResourceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_SetResourceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResource);
	UClass* Z_Construct_UClass_AResource_NoRegister()
	{
		return AResource::StaticClass();
	}
	struct Z_Construct_UClass_AResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToMine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToMine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToExtract_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToExtract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResorceLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResorceLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRecieve_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseRecieve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BiomeType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BiomeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomGenerationNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomGenerationNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AResource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AResource_ExtractRes, "ExtractRes" }, // 1813623033
		{ &Z_Construct_UFunction_AResource_ExtractTime, "ExtractTime" }, // 1156528755
		{ &Z_Construct_UFunction_AResource_GetBiomeType, "GetBiomeType" }, // 2259446154
		{ &Z_Construct_UFunction_AResource_GetDoesExist, "GetDoesExist" }, // 970532320
		{ &Z_Construct_UFunction_AResource_GetRandomGenerationNum, "GetRandomGenerationNum" }, // 1213184091
		{ &Z_Construct_UFunction_AResource_GetResourceLeft, "GetResourceLeft" }, // 3411369210
		{ &Z_Construct_UFunction_AResource_GetResourceType, "GetResourceType" }, // 1835135641
		{ &Z_Construct_UFunction_AResource_GiveBunch, "GiveBunch" }, // 1443290399
		{ &Z_Construct_UFunction_AResource_MineTime, "MineTime" }, // 1277463625
		{ &Z_Construct_UFunction_AResource_SetBiomeType, "SetBiomeType" }, // 236822830
		{ &Z_Construct_UFunction_AResource_SetDoesExist, "SetDoesExist" }, // 1206391479
		{ &Z_Construct_UFunction_AResource_SetExtractTime, "SetExtractTime" }, // 3731924900
		{ &Z_Construct_UFunction_AResource_SetMineTime, "SetMineTime" }, // 3194208330
		{ &Z_Construct_UFunction_AResource_SetRandomGenerationNum, "SetRandomGenerationNum" }, // 3178735825
		{ &Z_Construct_UFunction_AResource_SetResourceLeft, "SetResourceLeft" }, // 2748798067
		{ &Z_Construct_UFunction_AResource_SetResourceType, "SetResourceType" }, // 576808706
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Resource.h" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::NewProp_TimeToMine_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_TimeToMine = { "TimeToMine", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, TimeToMine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::NewProp_TimeToMine_MetaData), Z_Construct_UClass_AResource_Statics::NewProp_TimeToMine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::NewProp_TimeToExtract_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_TimeToExtract = { "TimeToExtract", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, TimeToExtract), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::NewProp_TimeToExtract_MetaData), Z_Construct_UClass_AResource_Statics::NewProp_TimeToExtract_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::NewProp_ResorceLeft_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_ResorceLeft = { "ResorceLeft", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, ResorceLeft), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::NewProp_ResorceLeft_MetaData), Z_Construct_UClass_AResource_Statics::NewProp_ResorceLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::NewProp_BaseRecieve_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_BaseRecieve = { "BaseRecieve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, BaseRecieve), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::NewProp_BaseRecieve_MetaData), Z_Construct_UClass_AResource_Statics::NewProp_BaseRecieve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::NewProp_ResourceType_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, ResourceType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::NewProp_ResourceType_MetaData), Z_Construct_UClass_AResource_Statics::NewProp_ResourceType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::NewProp_BiomeType_MetaData[] = {
		{ "Category", "Biome" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// see the enum\n" },
#endif
		{ "ModuleRelativePath", "Resource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "see the enum" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_BiomeType = { "BiomeType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, BiomeType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::NewProp_BiomeType_MetaData), Z_Construct_UClass_AResource_Statics::NewProp_BiomeType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::NewProp_RandomGenerationNum_MetaData[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_RandomGenerationNum = { "RandomGenerationNum", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, RandomGenerationNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::NewProp_RandomGenerationNum_MetaData), Z_Construct_UClass_AResource_Statics::NewProp_RandomGenerationNum_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_TimeToMine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_TimeToExtract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_ResorceLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_BaseRecieve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_BiomeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_RandomGenerationNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResource_Statics::ClassParams = {
		&AResource::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AResource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::Class_MetaDataParams), Z_Construct_UClass_AResource_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AResource()
	{
		if (!Z_Registration_Info_UClass_AResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResource.OuterSingleton, Z_Construct_UClass_AResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResource.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<AResource>()
	{
		return AResource::StaticClass();
	}
	AResource::AResource() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResource);
	AResource::~AResource() {}
	struct Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResource, AResource::StaticClass, TEXT("AResource"), &Z_Registration_Info_UClass_AResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResource), 2108736740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_2413631339(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
