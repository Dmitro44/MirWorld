// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/Tile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}
// Cross Module References
	MIRWORLD_API UClass* Z_Construct_UClass_ABasicActor();
	MIRWORLD_API UClass* Z_Construct_UClass_ATile();
	MIRWORLD_API UClass* Z_Construct_UClass_ATile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(ATile::execSetBiomeType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Newtype);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBiomeType(Z_Param_Newtype);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execGetBiomeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBiomeType();
		P_NATIVE_END;
	}
	void ATile::StaticRegisterNativesATile()
	{
		UClass* Class = ATile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBiomeType", &ATile::execGetBiomeType },
			{ "SetBiomeType", &ATile::execSetBiomeType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATile_GetBiomeType_Statics
	{
		struct Tile_eventGetBiomeType_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATile_GetBiomeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventGetBiomeType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_GetBiomeType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_GetBiomeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_GetBiomeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_GetBiomeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "GetBiomeType", nullptr, nullptr, Z_Construct_UFunction_ATile_GetBiomeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetBiomeType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATile_GetBiomeType_Statics::Tile_eventGetBiomeType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetBiomeType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATile_GetBiomeType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetBiomeType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATile_GetBiomeType_Statics::Tile_eventGetBiomeType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATile_GetBiomeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_GetBiomeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SetBiomeType_Statics
	{
		struct Tile_eventSetBiomeType_Parms
		{
			int32 Newtype;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Newtype;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATile_SetBiomeType_Statics::NewProp_Newtype = { "Newtype", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventSetBiomeType_Parms, Newtype), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SetBiomeType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SetBiomeType_Statics::NewProp_Newtype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SetBiomeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SetBiomeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SetBiomeType", nullptr, nullptr, Z_Construct_UFunction_ATile_SetBiomeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SetBiomeType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATile_SetBiomeType_Statics::Tile_eventSetBiomeType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SetBiomeType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATile_SetBiomeType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SetBiomeType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATile_SetBiomeType_Statics::Tile_eventSetBiomeType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATile_SetBiomeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_SetBiomeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATile);
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BiomeType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BiomeType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATile_GetBiomeType, "GetBiomeType" }, // 1245920068
		{ &Z_Construct_UFunction_ATile_SetBiomeType, "SetBiomeType" }, // 1719197684
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_BiomeType_MetaData[] = {
		{ "Category", "Biome" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_BiomeType = { "BiomeType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, BiomeType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_BiomeType_MetaData), Z_Construct_UClass_ATile_Statics::NewProp_BiomeType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_BiomeType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams), Z_Construct_UClass_ATile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATile()
	{
		if (!Z_Registration_Info_UClass_ATile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATile.OuterSingleton, Z_Construct_UClass_ATile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATile.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<ATile>()
	{
		return ATile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
	ATile::~ATile() {}
	struct Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATile, ATile::StaticClass, TEXT("ATile"), &Z_Registration_Info_UClass_ATile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATile), 1168394134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_1997050133(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
