// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Game;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Game()
	{
		if (!Z_Registration_Info_UPackage__Script_Game.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Game",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA58BE855,
				0x6D417DF0,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Game.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Game.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Game(Z_Construct_UPackage__Script_Game, TEXT("/Script/Game"), Z_Registration_Info_UPackage__Script_Game, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA58BE855, 0x6D417DF0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
