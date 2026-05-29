// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/BloqueConcreto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueConcreto() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloqueConcreto_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloqueConcreto();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void ABloqueConcreto::StaticRegisterNativesABloqueConcreto()
	{
	}
	UClass* Z_Construct_UClass_ABloqueConcreto_NoRegister()
	{
		return ABloqueConcreto::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueConcreto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueConcreto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueConcreto_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueConcreto.h" },
		{ "ModuleRelativePath", "BloqueConcreto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueConcreto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueConcreto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueConcreto_Statics::ClassParams = {
		&ABloqueConcreto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueConcreto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueConcreto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueConcreto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueConcreto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueConcreto, 286149290);
	template<> NAVESUSFX2026_API UClass* StaticClass<ABloqueConcreto>()
	{
		return ABloqueConcreto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueConcreto(Z_Construct_UClass_ABloqueConcreto, &ABloqueConcreto::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("ABloqueConcreto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueConcreto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
