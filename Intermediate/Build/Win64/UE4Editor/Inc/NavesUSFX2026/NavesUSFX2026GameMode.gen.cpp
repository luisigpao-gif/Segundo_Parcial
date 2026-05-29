// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/NavesUSFX2026GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesUSFX2026GameMode() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ANavesUSFX2026GameMode_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ANavesUSFX2026GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void ANavesUSFX2026GameMode::StaticRegisterNativesANavesUSFX2026GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANavesUSFX2026GameMode_NoRegister()
	{
		return ANavesUSFX2026GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANavesUSFX2026GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NavesUSFX2026GameMode.h" },
		{ "ModuleRelativePath", "NavesUSFX2026GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesUSFX2026GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::ClassParams = {
		&ANavesUSFX2026GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesUSFX2026GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesUSFX2026GameMode, 3187361585);
	template<> NAVESUSFX2026_API UClass* StaticClass<ANavesUSFX2026GameMode>()
	{
		return ANavesUSFX2026GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesUSFX2026GameMode(Z_Construct_UClass_ANavesUSFX2026GameMode, &ANavesUSFX2026GameMode::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("ANavesUSFX2026GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesUSFX2026GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
