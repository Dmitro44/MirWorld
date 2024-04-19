// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/CharacterMW.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMW() {}
// Cross Module References
	MIRWORLD_API UClass* Z_Construct_UClass_ACharacterMW();
	MIRWORLD_API UClass* Z_Construct_UClass_ACharacterMW_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_AMobBase();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterMW::execExtractBunch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExtractBunch();
		P_NATIVE_END;
	}
	void ACharacterMW::StaticRegisterNativesACharacterMW()
	{
		UClass* Class = ACharacterMW::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtractBunch", &ACharacterMW::execExtractBunch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterMW_ExtractBunch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterMW_ExtractBunch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resource Extracting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extract a bunch of a resource\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extract a bunch of a resource" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterMW_ExtractBunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterMW, nullptr, "ExtractBunch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMW_ExtractBunch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterMW_ExtractBunch_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACharacterMW_ExtractBunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterMW_ExtractBunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterMW);
	UClass* Z_Construct_UClass_ACharacterMW_NoRegister()
	{
		return ACharacterMW::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterMW_Statics
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
	UObject* (*const Z_Construct_UClass_ACharacterMW_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMobBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterMW_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterMW_ExtractBunch, "ExtractBunch" }, // 2737662661
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterMW.h" },
		{ "ModuleRelativePath", "CharacterMW.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Character ID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows how many repeats should be produced\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows how many repeats should be produced" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterMW_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::NewProp_ID_MetaData), Z_Construct_UClass_ACharacterMW_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW_Statics::NewProp_SelectedAction__MetaData[] = {
		{ "Category", "Mob State" },
		{ "ModuleRelativePath", "CharacterMW.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterMW_Statics::NewProp_SelectedAction_ = { "SelectedAction_", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW, SelectedAction_), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::NewProp_SelectedAction__MetaData), Z_Construct_UClass_ACharacterMW_Statics::NewProp_SelectedAction__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW_Statics::NewProp_RepeatsRequired_MetaData[] = {
		{ "Category", "Resource Extracting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows how many repeats should be produced\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows how many repeats should be produced" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterMW_Statics::NewProp_RepeatsRequired = { "RepeatsRequired", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW, RepeatsRequired), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::NewProp_RepeatsRequired_MetaData), Z_Construct_UClass_ACharacterMW_Statics::NewProp_RepeatsRequired_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterMW_Statics::NewProp_CanExtract_Inner = { "CanExtract", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW_Statics::NewProp_CanExtract_MetaData[] = {
		{ "Category", "Character Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows what resources the character can extract\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows what resources the character can extract" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterMW_Statics::NewProp_CanExtract = { "CanExtract", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW, CanExtract), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::NewProp_CanExtract_MetaData), Z_Construct_UClass_ACharacterMW_Statics::NewProp_CanExtract_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMW_Statics::NewProp_ExtractSpeeds_Inner = { "ExtractSpeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMW_Statics::NewProp_ExtractSpeeds_MetaData[] = {
		{ "Category", "Character Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shows how fast resources can be extracted by the character\n" },
#endif
		{ "ModuleRelativePath", "CharacterMW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows how fast resources can be extracted by the character" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterMW_Statics::NewProp_ExtractSpeeds = { "ExtractSpeeds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterMW, ExtractSpeeds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::NewProp_ExtractSpeeds_MetaData), Z_Construct_UClass_ACharacterMW_Statics::NewProp_ExtractSpeeds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterMW_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW_Statics::NewProp_SelectedAction_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW_Statics::NewProp_RepeatsRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW_Statics::NewProp_CanExtract_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW_Statics::NewProp_CanExtract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW_Statics::NewProp_ExtractSpeeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMW_Statics::NewProp_ExtractSpeeds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterMW_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterMW>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterMW_Statics::ClassParams = {
		&ACharacterMW::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterMW_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterMW_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMW_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACharacterMW()
	{
		if (!Z_Registration_Info_UClass_ACharacterMW.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterMW.OuterSingleton, Z_Construct_UClass_ACharacterMW_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterMW.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<ACharacterMW>()
	{
		return ACharacterMW::StaticClass();
	}
	ACharacterMW::ACharacterMW() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterMW);
	ACharacterMW::~ACharacterMW() {}
	struct Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterMW, ACharacterMW::StaticClass, TEXT("ACharacterMW"), &Z_Registration_Info_UClass_ACharacterMW, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterMW), 1220940269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW_h_2141532207(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_CharacterMW_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
