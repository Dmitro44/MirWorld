// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/ResourceStorage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceStorage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MIRWORLD_API UClass* Z_Construct_UClass_AResourceStorage();
	MIRWORLD_API UClass* Z_Construct_UClass_AResourceStorage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(AResourceStorage::execAddResource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Change);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResourceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddResource(Z_Param_Change,Z_Param_ResourceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResourceStorage::execSubResource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Change);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResourceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubResource(Z_Param_Change,Z_Param_ResourceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResourceStorage::execGetResourceAmnt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ResourceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResourceAmnt(Z_Param_ResourceType);
		P_NATIVE_END;
	}
	void AResourceStorage::StaticRegisterNativesAResourceStorage()
	{
		UClass* Class = AResourceStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddResource", &AResourceStorage::execAddResource },
			{ "GetResourceAmnt", &AResourceStorage::execGetResourceAmnt },
			{ "SubResource", &AResourceStorage::execSubResource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AResourceStorage_AddResource_Statics
	{
		struct ResourceStorage_eventAddResource_Parms
		{
			int32 Change;
			int32 ResourceType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Change;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResourceStorage_AddResource_Statics::NewProp_Change = { "Change", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceStorage_eventAddResource_Parms, Change), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResourceStorage_AddResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceStorage_eventAddResource_Parms, ResourceType), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResourceStorage_AddResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResourceStorage_AddResource_Statics::NewProp_Change,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResourceStorage_AddResource_Statics::NewProp_ResourceType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResourceStorage_AddResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increases the amnt of the selected resource\n" },
#endif
		{ "ModuleRelativePath", "ResourceStorage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increases the amnt of the selected resource" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResourceStorage_AddResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResourceStorage, nullptr, "AddResource", nullptr, nullptr, Z_Construct_UFunction_AResourceStorage_AddResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceStorage_AddResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResourceStorage_AddResource_Statics::ResourceStorage_eventAddResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceStorage_AddResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResourceStorage_AddResource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceStorage_AddResource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResourceStorage_AddResource_Statics::ResourceStorage_eventAddResource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResourceStorage_AddResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResourceStorage_AddResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics
	{
		struct ResourceStorage_eventGetResourceAmnt_Parms
		{
			int32 ResourceType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceStorage_eventGetResourceAmnt_Parms, ResourceType), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceStorage_eventGetResourceAmnt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the cntr of the selected resource. \n// Returns -1 if there is no such type of a resource\n" },
#endif
		{ "ModuleRelativePath", "ResourceStorage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the cntr of the selected resource.\nReturns -1 if there is no such type of a resource" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResourceStorage, nullptr, "GetResourceAmnt", nullptr, nullptr, Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::ResourceStorage_eventGetResourceAmnt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::ResourceStorage_eventGetResourceAmnt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResourceStorage_GetResourceAmnt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResourceStorage_GetResourceAmnt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResourceStorage_SubResource_Statics
	{
		struct ResourceStorage_eventSubResource_Parms
		{
			int32 Change;
			int32 ResourceType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Change;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResourceStorage_SubResource_Statics::NewProp_Change = { "Change", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceStorage_eventSubResource_Parms, Change), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResourceStorage_SubResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceStorage_eventSubResource_Parms, ResourceType), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResourceStorage_SubResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResourceStorage_SubResource_Statics::NewProp_Change,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResourceStorage_SubResource_Statics::NewProp_ResourceType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResourceStorage_SubResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decreases the amnt of the selected resource\n" },
#endif
		{ "ModuleRelativePath", "ResourceStorage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decreases the amnt of the selected resource" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResourceStorage_SubResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResourceStorage, nullptr, "SubResource", nullptr, nullptr, Z_Construct_UFunction_AResourceStorage_SubResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceStorage_SubResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResourceStorage_SubResource_Statics::ResourceStorage_eventSubResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceStorage_SubResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResourceStorage_SubResource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceStorage_SubResource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResourceStorage_SubResource_Statics::ResourceStorage_eventSubResource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResourceStorage_SubResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResourceStorage_SubResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResourceStorage);
	UClass* Z_Construct_UClass_AResourceStorage_NoRegister()
	{
		return AResourceStorage::StaticClass();
	}
	struct Z_Construct_UClass_AResourceStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResourceCntr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceCntr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourceCntr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResourceStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceStorage_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AResourceStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AResourceStorage_AddResource, "AddResource" }, // 2898756099
		{ &Z_Construct_UFunction_AResourceStorage_GetResourceAmnt, "GetResourceAmnt" }, // 283609563
		{ &Z_Construct_UFunction_AResourceStorage_SubResource, "SubResource" }, // 2093739823
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceStorage_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ResourceStorage.h" },
		{ "ModuleRelativePath", "ResourceStorage.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResourceStorage_Statics::NewProp_ResourceCntr_Inner = { "ResourceCntr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceStorage_Statics::NewProp_ResourceCntr_MetaData[] = {
		{ "Category", "Resources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Consists of cntrs of every resource\n" },
#endif
		{ "ModuleRelativePath", "ResourceStorage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consists of cntrs of every resource" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AResourceStorage_Statics::NewProp_ResourceCntr = { "ResourceCntr", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResourceStorage, ResourceCntr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceStorage_Statics::NewProp_ResourceCntr_MetaData), Z_Construct_UClass_AResourceStorage_Statics::NewProp_ResourceCntr_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResourceStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceStorage_Statics::NewProp_ResourceCntr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceStorage_Statics::NewProp_ResourceCntr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResourceStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResourceStorage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResourceStorage_Statics::ClassParams = {
		&AResourceStorage::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AResourceStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AResourceStorage_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceStorage_Statics::Class_MetaDataParams), Z_Construct_UClass_AResourceStorage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceStorage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AResourceStorage()
	{
		if (!Z_Registration_Info_UClass_AResourceStorage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResourceStorage.OuterSingleton, Z_Construct_UClass_AResourceStorage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResourceStorage.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<AResourceStorage>()
	{
		return AResourceStorage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResourceStorage);
	AResourceStorage::~AResourceStorage() {}
	struct Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_Practica_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_Practica_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResourceStorage, AResourceStorage::StaticClass, TEXT("AResourceStorage"), &Z_Registration_Info_UClass_AResourceStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResourceStorage), 394739895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_Practica_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_3026021929(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_Practica_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_daniil_mariyn_Downloads_Practica_MirWorld_Project_MirWorld_Source_MirWorld_ResourceStorage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
