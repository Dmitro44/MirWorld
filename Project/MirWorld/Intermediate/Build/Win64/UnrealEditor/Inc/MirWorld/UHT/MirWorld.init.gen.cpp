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
				0x97CE8BDE,
				0x3A19CAAB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MirWorld.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MirWorld.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MirWorld(Z_Construct_UPackage__Script_MirWorld, TEXT("/Script/MirWorld"), Z_Registration_Info_UPackage__Script_MirWorld, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x97CE8BDE, 0x3A19CAAB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
