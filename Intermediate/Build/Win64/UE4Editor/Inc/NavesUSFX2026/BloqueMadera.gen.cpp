// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/BloqueMadera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMadera() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloqueMadera_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloqueMadera();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void ABloqueMadera::StaticRegisterNativesABloqueMadera()
	{
	}
	UClass* Z_Construct_UClass_ABloqueMadera_NoRegister()
	{
		return ABloqueMadera::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueMadera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueMadera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueMadera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueMadera.h" },
		{ "ModuleRelativePath", "BloqueMadera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueMadera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMadera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMadera_Statics::ClassParams = {
		&ABloqueMadera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueMadera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueMadera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueMadera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueMadera, 2873858871);
	template<> NAVESUSFX2026_API UClass* StaticClass<ABloqueMadera>()
	{
		return ABloqueMadera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueMadera(Z_Construct_UClass_ABloqueMadera, &ABloqueMadera::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("ABloqueMadera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMadera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
