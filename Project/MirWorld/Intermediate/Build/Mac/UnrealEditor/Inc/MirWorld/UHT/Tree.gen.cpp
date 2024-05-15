// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/Tree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTree() {}
// Cross Module References
	MIRWORLD_API UClass* Z_Construct_UClass_AResource();
	MIRWORLD_API UClass* Z_Construct_UClass_ATree();
	MIRWORLD_API UClass* Z_Construct_UClass_ATree_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	void ATree::StaticRegisterNativesATree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATree);
	UClass* Z_Construct_UClass_ATree_NoRegister()
	{
		return ATree::StaticClass();
	}
	struct Z_Construct_UClass_ATree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AResource,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATree_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tree.h" },
		{ "ModuleRelativePath", "Tree.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATree_Statics::ClassParams = {
		&ATree::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams), Z_Construct_UClass_ATree_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATree()
	{
		if (!Z_Registration_Info_UClass_ATree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATree.OuterSingleton, Z_Construct_UClass_ATree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATree.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<ATree>()
	{
		return ATree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATree);
	ATree::~ATree() {}
	struct Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATree, ATree::StaticClass, TEXT("ATree"), &Z_Registration_Info_UClass_ATree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATree), 998869540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tree_h_145428886(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_daniil_mariyn_Documents_Game_Mirworld_MirWorld_Project_MirWorld_Source_MirWorld_Tree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
