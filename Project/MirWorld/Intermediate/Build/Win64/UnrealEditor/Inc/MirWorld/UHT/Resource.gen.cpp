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
	DEFINE_FUNCTION(AResource::execGiveBunch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GiveBunch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResource::execTimeRequired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TimeRequired();
		P_NATIVE_END;
	}
	void AResource::StaticRegisterNativesAResource()
	{
		UClass* Class = AResource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GiveBunch", &AResource::execGiveBunch },
			{ "TimeRequired", &AResource::execTimeRequired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AResource_GiveBunch_Statics
	{
		struct Resource_eventGiveBunch_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_GiveBunch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventGiveBunch_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_GiveBunch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_GiveBunch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_GiveBunch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_GiveBunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "GiveBunch", nullptr, nullptr, Z_Construct_UFunction_AResource_GiveBunch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GiveBunch_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_GiveBunch_Statics::Resource_eventGiveBunch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GiveBunch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_GiveBunch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_GiveBunch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_GiveBunch_Statics::Resource_eventGiveBunch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_GiveBunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_GiveBunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResource_TimeRequired_Statics
	{
		struct Resource_eventTimeRequired_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AResource_TimeRequired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventTimeRequired_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_TimeRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_TimeRequired_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResource_TimeRequired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Resource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_TimeRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "TimeRequired", nullptr, nullptr, Z_Construct_UFunction_AResource_TimeRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_TimeRequired_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_TimeRequired_Statics::Resource_eventTimeRequired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_TimeRequired_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_TimeRequired_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_TimeRequired_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResource_TimeRequired_Statics::Resource_eventTimeRequired_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResource_TimeRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_TimeRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResource);
	UClass* Z_Construct_UClass_AResource_NoRegister()
	{
		return AResource::StaticClass();
	}
	struct Z_Construct_UClass_AResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AResource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AResource_GiveBunch, "GiveBunch" }, // 1129698018
		{ &Z_Construct_UFunction_AResource_TimeRequired, "TimeRequired" }, // 919530301
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Resource.h" },
		{ "ModuleRelativePath", "Resource.h" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResource, AResource::StaticClass, TEXT("AResource"), &Z_Registration_Info_UClass_AResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResource), 1645199844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_2879424311(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MirWorld_Project_MirWorld_Source_MirWorld_Resource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
