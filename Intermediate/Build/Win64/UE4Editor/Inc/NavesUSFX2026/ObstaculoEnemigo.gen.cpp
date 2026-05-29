// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/ObstaculoEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoEnemigo() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AObstaculoEnemigo_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AObstaculoEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void AObstaculoEnemigo::StaticRegisterNativesAObstaculoEnemigo()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoEnemigo_NoRegister()
	{
		return AObstaculoEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObstaculoEnemigo.h" },
		{ "ModuleRelativePath", "ObstaculoEnemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoEnemigo_Statics::ClassParams = {
		&AObstaculoEnemigo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoEnemigo, 2327405601);
	template<> NAVESUSFX2026_API UClass* StaticClass<AObstaculoEnemigo>()
	{
		return AObstaculoEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoEnemigo(Z_Construct_UClass_AObstaculoEnemigo, &AObstaculoEnemigo::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AObstaculoEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
