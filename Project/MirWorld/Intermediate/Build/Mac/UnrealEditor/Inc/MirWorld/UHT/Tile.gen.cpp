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
	void ATile::StaticRegisterNativesATile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATile);
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams), Z_Construct_UClass_ATile_Statics::Class_MetaDataParams)
	};
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
	struct Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATile, ATile::StaticClass, TEXT("ATile"), &Z_Registration_Info_UClass_ATile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATile), 133237545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_869052266(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS