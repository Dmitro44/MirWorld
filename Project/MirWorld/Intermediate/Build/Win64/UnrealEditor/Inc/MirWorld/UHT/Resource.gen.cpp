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
	void AResource::StaticRegisterNativesAResource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResource);
	UClass* Z_Construct_UClass_AResource_NoRegister()
	{
		return AResource::StaticClass();
	}
	struct Z_Construct_UClass_AResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * TODO add uproperty and ufunction macroses\n */" },
#endif
		{ "IncludePath", "Resource.h" },
		{ "ModuleRelativePath", "Resource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO add uproperty and ufunction macroses" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResource_Statics::ClassParams = {
		&AResource::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::Class_MetaDataParams), Z_Construct_UClass_AResource_Statics::Class_MetaDataParams)
	};
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
	struct Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResource, AResource::StaticClass, TEXT("AResource"), &Z_Registration_Info_UClass_AResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResource), 3211895919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_3203935144(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
