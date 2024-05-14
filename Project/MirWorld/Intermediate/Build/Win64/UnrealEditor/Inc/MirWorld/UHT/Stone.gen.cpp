// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/Stone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStone() {}
// Cross Module References
	MIRWORLD_API UClass* Z_Construct_UClass_AResource();
	MIRWORLD_API UClass* Z_Construct_UClass_AStone();
	MIRWORLD_API UClass* Z_Construct_UClass_AStone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	void AStone::StaticRegisterNativesAStone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStone);
	UClass* Z_Construct_UClass_AStone_NoRegister()
	{
		return AStone::StaticClass();
	}
	struct Z_Construct_UClass_AStone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AResource,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStone_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStone_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Stone.h" },
		{ "ModuleRelativePath", "Stone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStone_Statics::ClassParams = {
		&AStone::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStone_Statics::Class_MetaDataParams), Z_Construct_UClass_AStone_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AStone()
	{
		if (!Z_Registration_Info_UClass_AStone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStone.OuterSingleton, Z_Construct_UClass_AStone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStone.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<AStone>()
	{
		return AStone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStone);
	AStone::~AStone() {}
	struct Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Stone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Stone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStone, AStone::StaticClass, TEXT("AStone"), &Z_Registration_Info_UClass_AStone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStone), 1647237095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Stone_h_130140722(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Stone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Stone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
