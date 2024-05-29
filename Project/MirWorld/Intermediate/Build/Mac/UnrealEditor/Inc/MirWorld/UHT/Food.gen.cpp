// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/Food.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFood() {}
// Cross Module References
	MIRWORLD_API UClass* Z_Construct_UClass_AFood();
	MIRWORLD_API UClass* Z_Construct_UClass_AFood_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_AResource();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	void AFood::StaticRegisterNativesAFood()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFood);
	UClass* Z_Construct_UClass_AFood_NoRegister()
	{
		return AFood::StaticClass();
	}
	struct Z_Construct_UClass_AFood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AResource,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Food.h" },
		{ "ModuleRelativePath", "Food.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFood>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFood_Statics::ClassParams = {
		&AFood::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::Class_MetaDataParams), Z_Construct_UClass_AFood_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFood()
	{
		if (!Z_Registration_Info_UClass_AFood.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFood.OuterSingleton, Z_Construct_UClass_AFood_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFood.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<AFood>()
	{
		return AFood::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFood);
	AFood::~AFood() {}
	struct Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Food_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Food_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFood, AFood::StaticClass, TEXT("AFood"), &Z_Registration_Info_UClass_AFood, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFood), 3194242701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Food_h_3819710194(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Food_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_GameWorld_MirWorld_Project_MirWorld_Source_MirWorld_Food_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
