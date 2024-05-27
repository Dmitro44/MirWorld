// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/BasicActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_ABasicActor();
	MIRWORLD_API UClass* Z_Construct_UClass_ABasicActor_NoRegister();
	MIRWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FBlankObjectInfo();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlankObjectInfo;
class UScriptStruct* FBlankObjectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlankObjectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlankObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlankObjectInfo, (UObject*)Z_Construct_UPackage__Script_MirWorld(), TEXT("BlankObjectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BlankObjectInfo.OuterSingleton;
}
template<> MIRWORLD_API UScriptStruct* StaticStruct<FBlankObjectInfo>()
{
	return FBlankObjectInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlankObjectInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BasicActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlankObjectInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_X_MetaData[] = {
		{ "Category", "BlankObjectInfo" },
		{ "ModuleRelativePath", "BasicActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlankObjectInfo, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_X_MetaData), Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "BlankObjectInfo" },
		{ "ModuleRelativePath", "BasicActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlankObjectInfo, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Y_MetaData), Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Y_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "BlankObjectInfo" },
		{ "ModuleRelativePath", "BasicActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlankObjectInfo, Z), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Z_MetaData), Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Z_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
		nullptr,
		&NewStructOps,
		"BlankObjectInfo",
		Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::PropPointers),
		sizeof(FBlankObjectInfo),
		alignof(FBlankObjectInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBlankObjectInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BlankObjectInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlankObjectInfo.InnerSingleton, Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlankObjectInfo.InnerSingleton;
	}
	void ABasicActor::StaticRegisterNativesABasicActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicActor);
	UClass* Z_Construct_UClass_ABasicActor_NoRegister()
	{
		return ABasicActor::StaticClass();
	}
	struct Z_Construct_UClass_ABasicActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BasicActor.h" },
		{ "ModuleRelativePath", "BasicActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component that can be attached to actors to render static meshes. \n// Commonly used to render static geometry in the game world.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that can be attached to actors to render static meshes.\nCommonly used to render static geometry in the game world." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABasicActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicActor_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_ABasicActor_Statics::NewProp_StaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicActor_Statics::NewProp_ObjectInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "BasicActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicActor_Statics::NewProp_ObjectInfo = { "ObjectInfo", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicActor, ObjectInfo), Z_Construct_UScriptStruct_FBlankObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicActor_Statics::NewProp_ObjectInfo_MetaData), Z_Construct_UClass_ABasicActor_Statics::NewProp_ObjectInfo_MetaData) }; // 1282743478
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicActor_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicActor_Statics::NewProp_ObjectInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicActor_Statics::ClassParams = {
		&ABasicActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasicActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasicActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABasicActor()
	{
		if (!Z_Registration_Info_UClass_ABasicActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicActor.OuterSingleton, Z_Construct_UClass_ABasicActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasicActor.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<ABasicActor>()
	{
		return ABasicActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicActor);
	ABasicActor::~ABasicActor() {}
	struct Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_BasicActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_BasicActor_h_Statics::ScriptStructInfo[] = {
		{ FBlankObjectInfo::StaticStruct, Z_Construct_UScriptStruct_FBlankObjectInfo_Statics::NewStructOps, TEXT("BlankObjectInfo"), &Z_Registration_Info_UScriptStruct_BlankObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlankObjectInfo), 1282743478U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_BasicActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasicActor, ABasicActor::StaticClass, TEXT("ABasicActor"), &Z_Registration_Info_UClass_ABasicActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicActor), 521050524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_BasicActor_h_3731970275(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_BasicActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_BasicActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_BasicActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_BasicActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
