// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/GameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameGameMode() {}
// Cross Module References
	GAME_API UClass* Z_Construct_UClass_AGameGameMode_NoRegister();
	GAME_API UClass* Z_Construct_UClass_AGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References
	void AGameGameMode::StaticRegisterNativesAGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameGameMode);
	UClass* Z_Construct_UClass_AGameGameMode_NoRegister()
	{
		return AGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Game,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameGameMode.h" },
		{ "ModuleRelativePath", "GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameGameMode_Statics::ClassParams = {
		&AGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameGameMode.OuterSingleton, Z_Construct_UClass_AGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameGameMode.OuterSingleton;
	}
	template<> GAME_API UClass* StaticClass<AGameGameMode>()
	{
		return AGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameGameMode);
	struct Z_CompiledInDeferFile_FID_Game_Source_Game_GameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Source_Game_GameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameGameMode, AGameGameMode::StaticClass, TEXT("AGameGameMode"), &Z_Registration_Info_UClass_AGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameGameMode), 3762959533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Source_Game_GameGameMode_h_2267729664(TEXT("/Script/Game"),
		Z_CompiledInDeferFile_FID_Game_Source_Game_GameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Source_Game_GameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
