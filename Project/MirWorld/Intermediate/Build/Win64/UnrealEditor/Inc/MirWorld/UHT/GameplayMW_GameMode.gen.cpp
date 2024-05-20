// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/GameplayMW_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayMW_GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MIRWORLD_API UClass* Z_Construct_UClass_AGameplayMW_GameMode();
	MIRWORLD_API UClass* Z_Construct_UClass_AGameplayMW_GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	static FName NAME_AGameplayMW_GameMode_EndGame_Defeat = FName(TEXT("EndGame_Defeat"));
	void AGameplayMW_GameMode::EndGame_Defeat()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayMW_GameMode_EndGame_Defeat),NULL);
	}
	static FName NAME_AGameplayMW_GameMode_EndGame_Victory = FName(TEXT("EndGame_Victory"));
	void AGameplayMW_GameMode::EndGame_Victory()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayMW_GameMode_EndGame_Victory),NULL);
	}
	static FName NAME_AGameplayMW_GameMode_UpdateScore = FName(TEXT("UpdateScore"));
	void AGameplayMW_GameMode::UpdateScore()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayMW_GameMode_UpdateScore),NULL);
	}
	void AGameplayMW_GameMode::StaticRegisterNativesAGameplayMW_GameMode()
	{
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements the logic of defeat\n/// implemented in BPs\n" },
#endif
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the logic of defeat\nimplemented in BPs" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "EndGame_Defeat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::Function_MetaDataParams[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements the logic of victory\n/// implemented in BPs\n" },
#endif
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the logic of victory\nimplemented in BPs" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "EndGame_Victory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "End of the Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the UI score cntr\n/// implemented in BPs\n" },
#endif
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the UI score cntr\nimplemented in BPs" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayMW_GameMode, nullptr, "UpdateScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayMW_GameMode);
	UClass* Z_Construct_UClass_AGameplayMW_GameMode_NoRegister()
	{
		return AGameplayMW_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayMW_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayMW_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayMW_GameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayMW_GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Defeat, "EndGame_Defeat" }, // 2444742473
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_EndGame_Victory, "EndGame_Victory" }, // 4203716490
		{ &Z_Construct_UFunction_AGameplayMW_GameMode_UpdateScore, "UpdateScore" }, // 1998281312
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayMW_GameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayMW_GameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameplayMW_GameMode.h" },
		{ "ModuleRelativePath", "GameplayMW_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayMW_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayMW_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayMW_GameMode_Statics::ClassParams = {
		&AGameplayMW_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayMW_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayMW_GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGameplayMW_GameMode()
	{
		if (!Z_Registration_Info_UClass_AGameplayMW_GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayMW_GameMode.OuterSingleton, Z_Construct_UClass_AGameplayMW_GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayMW_GameMode.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<AGameplayMW_GameMode>()
	{
		return AGameplayMW_GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayMW_GameMode);
	AGameplayMW_GameMode::~AGameplayMW_GameMode() {}
	struct Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayMW_GameMode, AGameplayMW_GameMode::StaticClass, TEXT("AGameplayMW_GameMode"), &Z_Registration_Info_UClass_AGameplayMW_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayMW_GameMode), 916233944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_2294120843(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_MirWorld_Project_MirWorld_Source_MirWorld_GameplayMW_GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
