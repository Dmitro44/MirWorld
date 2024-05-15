// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/TaskManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MIRWORLD_API UClass* Z_Construct_UClass_UTaskManager();
	MIRWORLD_API UClass* Z_Construct_UClass_UTaskManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	void UTaskManager::StaticRegisterNativesUTaskManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskManager);
	UClass* Z_Construct_UClass_UTaskManager_NoRegister()
	{
		return UTaskManager::StaticClass();
	}
	struct Z_Construct_UClass_UTaskManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Uses priority matrix for task management\n */" },
#endif
		{ "IncludePath", "TaskManager.h" },
		{ "ModuleRelativePath", "TaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses priority matrix for task management" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskManager_Statics::ClassParams = {
		&UTaskManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTaskManager()
	{
		if (!Z_Registration_Info_UClass_UTaskManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskManager.OuterSingleton, Z_Construct_UClass_UTaskManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskManager.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<UTaskManager>()
	{
		return UTaskManager::StaticClass();
	}
	UTaskManager::UTaskManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskManager);
	UTaskManager::~UTaskManager() {}
	struct Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskManager, UTaskManager::StaticClass, TEXT("UTaskManager"), &Z_Registration_Info_UClass_UTaskManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskManager), 1245006280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_3005125352(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
