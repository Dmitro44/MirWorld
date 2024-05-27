// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirWorld_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MirWorld;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MirWorld()
	{
		if (!Z_Registration_Info_UPackage__Script_MirWorld.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MirWorld",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4F01FE7B,
				0xBE87F7EB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MirWorld.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MirWorld.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MirWorld(Z_Construct_UPackage__Script_MirWorld, TEXT("/Script/MirWorld"), Z_Registration_Info_UPackage__Script_MirWorld, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4F01FE7B, 0xBE87F7EB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
