// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/PathFinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFinder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MIRWORLD_API UClass* Z_Construct_UClass_APathFinder();
	MIRWORLD_API UClass* Z_Construct_UClass_APathFinder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	void APathFinder::StaticRegisterNativesAPathFinder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APathFinder);
	UClass* Z_Construct_UClass_APathFinder_NoRegister()
	{
		return APathFinder::StaticClass();
	}
	struct Z_Construct_UClass_APathFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathFinder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathFinder_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PathFinder.h" },
		{ "ModuleRelativePath", "PathFinder.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathFinder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APathFinder_Statics::ClassParams = {
		&APathFinder::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathFinder_Statics::Class_MetaDataParams), Z_Construct_UClass_APathFinder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APathFinder()
	{
		if (!Z_Registration_Info_UClass_APathFinder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APathFinder.OuterSingleton, Z_Construct_UClass_APathFinder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APathFinder.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<APathFinder>()
	{
		return APathFinder::StaticClass();
	}
	APathFinder::APathFinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathFinder);
	APathFinder::~APathFinder() {}
	struct Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_PathFinder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_PathFinder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APathFinder, APathFinder::StaticClass, TEXT("APathFinder"), &Z_Registration_Info_UClass_APathFinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APathFinder), 3379006785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_PathFinder_h_2515059665(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_PathFinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_PathFinder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
