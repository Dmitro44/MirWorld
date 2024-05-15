// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/CharacterMW2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMW2D() {}
// Cross Module References
	MIRWORLD_API UClass* Z_Construct_UClass_ACharacterMW2D();
	MIRWORLD_API UClass* Z_Construct_UClass_ACharacterMW2D_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_AMobBase2D();
	MIRWORLD_API UClass* Z_Construct_UClass_AResource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterMW2D::execExtractBunch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExtractBunch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterMW2D::execIsResourceValid)
	{
		P_GET_OBJECT(AResource,Z_Param_Resource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsResourceValid(Z_Param_Resource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterMW2D::execSetID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetID(Z_Param_NewID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterMW2D::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterMW2D::execIsWorking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWorking();
		P_NATIVE_END;
	}
	void ACharacterMW2D::StaticRegisterNativesACharacterMW2D()
	{
		UClass* Class = ACharacterMW2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtractBunch", &ACharacterMW2D::execExtractBunch },
			{ "GetID", &ACharacterMW2D::execGetID },
			{ "IsResourceValid", &ACharacterMW2D::execIsResourceValid },
			{ "IsWorking", &ACharacterMW2D::execIsWorking },
			{ "SetID", &ACharacterMW2D::execSetID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterMW2D_ExtractBunch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterMW2D_ExtractBunch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Extracting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extract a bunch of a resource\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extract a bunch of a resource" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterMW2D_ExtractBunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterMW2D, nullptr, "ExtractBunch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_ExtractBunch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterMW2D_ExtractBunch_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACharacterMW2D_ExtractBunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterMW2D_ExtractBunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterMW2D_GetID_Statics
	{
		struct CharacterMW2D_eventGetID_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMW2D_eventGetID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character ID" },
		{ "ModuleRelativePath", "CharacterMW2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterMW2D, nullptr, "GetID", nullptr, nullptr, Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::CharacterMW2D_eventGetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::CharacterMW2D_eventGetID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACharacterMW2D_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterMW2D_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics
	{
		struct CharacterMW2D_eventIsResourceValid_Parms
		{
			AResource* Resource;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Resource;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMW2D_eventIsResourceValid_Parms, Resource), Z_Construct_UClass_AResource_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterMW2D_eventIsResourceValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMW2D_eventIsResourceValid_Parms), &Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::NewProp_Resource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character ID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks if aim resource is valid\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if aim resource is valid" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterMW2D, nullptr, "IsResourceValid", nullptr, nullptr, Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::CharacterMW2D_eventIsResourceValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::CharacterMW2D_eventIsResourceValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACharacterMW2D_IsResourceValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterMW2D_IsResourceValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics
	{
		struct CharacterMW2D_eventIsWorking_Parms
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
	void Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterMW2D_eventIsWorking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMW2D_eventIsWorking_Parms), &Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mob Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows if work animation must be played\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows if work animation must be played" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterMW2D, nullptr, "IsWorking", nullptr, nullptr, Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::CharacterMW2D_eventIsWorking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::CharacterMW2D_eventIsWorking_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACharacterMW2D_IsWorking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterMW2D_IsWorking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterMW2D_SetID_Statics
	{
		struct CharacterMW2D_eventSetID_Parms
		{
			int32 NewID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::NewProp_NewID = { "NewID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMW2D_eventSetID_Parms, NewID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::NewProp_NewID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character ID" },
		{ "ModuleRelativePath", "CharacterMW2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterMW2D, nullptr, "SetID", nullptr, nullptr, Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::CharacterMW2D_eventSetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::CharacterMW2D_eventSetID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACharacterMW2D_SetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterMW2D_SetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterMW2D);
	UClass* Z_Construct_UClass_ACharacterMW2D_NoRegister()
	{
		return ACharacterMW2D::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterMW2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAction__MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedAction_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepeatsRequired_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RepeatsRequired;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanExtract_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanExtract_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CanExtract;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtractSpeeds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtractSpeeds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterMW2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMobBase2D,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterMW2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterMW2D_ExtractBunch, "ExtractBunch" }, // 3566854456
		{ &Z_Construct_UFunction_ACharacterMW2D_GetID, "GetID" }, // 3245743242
		{ &Z_Construct_UFunction_ACharacterMW2D_IsResourceValid, "IsResourceValid" }, // 2730726561
		{ &Z_Construct_UFunction_ACharacterMW2D_IsWorking, "IsWorking" }, // 1209243199
		{ &Z_Construct_UFunction_ACharacterMW2D_SetID, "SetID" }, // 1791681449
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW2D_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Main characters in MirWorld\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterMW2D.h" },
		{ "ModuleRelativePath", "CharacterMW2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main characters in MirWorld" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Character ID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique for every character\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique for every character" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW2D, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ID_MetaData), Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_SelectedAction__MetaData[] = {
		{ "Category", "Mob State" },
		{ "ModuleRelativePath", "CharacterMW2D.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_SelectedAction_ = { "SelectedAction_", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW2D, SelectedAction_), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_SelectedAction__MetaData), Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_SelectedAction__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_RepeatsRequired_MetaData[] = {
		{ "Category", "Resource Extracting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows how many repeats should be produced\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows how many repeats should be produced" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_RepeatsRequired = { "RepeatsRequired", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW2D, RepeatsRequired), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_RepeatsRequired_MetaData), Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_RepeatsRequired_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_CanExtract_Inner = { "CanExtract", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_CanExtract_MetaData[] = {
		{ "Category", "Character Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows what resources the character can extract\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows what resources the character can extract" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_CanExtract = { "CanExtract", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW2D, CanExtract), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_CanExtract_MetaData), Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_CanExtract_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ExtractSpeeds_Inner = { "ExtractSpeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ExtractSpeeds_MetaData[] = {
		{ "Category", "Character Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows how fast resources can be extracted by the character\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW2D.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows how fast resources can be extracted by the character" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ExtractSpeeds = { "ExtractSpeeds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW2D, ExtractSpeeds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ExtractSpeeds_MetaData), Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ExtractSpeeds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterMW2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_SelectedAction_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_RepeatsRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_CanExtract_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_CanExtract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ExtractSpeeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW2D_Statics::NewProp_ExtractSpeeds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterMW2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterMW2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterMW2D_Statics::ClassParams = {
		&ACharacterMW2D::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterMW2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterMW2D_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW2D_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACharacterMW2D()
	{
		if (!Z_Registration_Info_UClass_ACharacterMW2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterMW2D.OuterSingleton, Z_Construct_UClass_ACharacterMW2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterMW2D.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<ACharacterMW2D>()
	{
		return ACharacterMW2D::StaticClass();
	}
	ACharacterMW2D::ACharacterMW2D() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterMW2D);
	ACharacterMW2D::~ACharacterMW2D() {}
	struct Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterMW2D, ACharacterMW2D::StaticClass, TEXT("ACharacterMW2D"), &Z_Registration_Info_UClass_ACharacterMW2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterMW2D), 781679844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_1288973952(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
