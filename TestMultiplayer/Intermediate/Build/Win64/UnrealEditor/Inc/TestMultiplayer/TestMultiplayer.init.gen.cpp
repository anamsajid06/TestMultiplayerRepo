// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestMultiplayer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestMultiplayer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestMultiplayer()
	{
		if (!Z_Registration_Info_UPackage__Script_TestMultiplayer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestMultiplayer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x716D248A,
				0x56A4B099,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestMultiplayer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestMultiplayer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestMultiplayer(Z_Construct_UPackage__Script_TestMultiplayer, TEXT("/Script/TestMultiplayer"), Z_Registration_Info_UPackage__Script_TestMultiplayer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x716D248A, 0x56A4B099));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
