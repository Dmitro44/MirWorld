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
	void ABuilding::StaticRegisterNativesABuilding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilding);
	UClass* Z_Construct_UClass_ABuilding_NoRegister()
	{
		return ABuilding::StaticClass();
	}
	struct Z_Construct_UClass_ABuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Building.h" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilding_Statics::ClassParams = {
		&ABuilding::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams)
	};
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
	struct Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuilding, ABuilding::StaticClass, TEXT("ABuilding"), &Z_Registration_Info_UClass_ABuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilding), 470436250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_3109738030(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_Building_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
