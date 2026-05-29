// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/BloqueMetalico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMetalico() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloqueMetalico_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloqueMetalico();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void ABloqueMetalico::StaticRegisterNativesABloqueMetalico()
	{
	}
	UClass* Z_Construct_UClass_ABloqueMetalico_NoRegister()
	{
		return ABloqueMetalico::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueMetalico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueMetalico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueMetalico_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueMetalico.h" },
		{ "ModuleRelativePath", "BloqueMetalico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueMetalico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMetalico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMetalico_Statics::ClassParams = {
		&ABloqueMetalico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueMetalico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMetalico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueMetalico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueMetalico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueMetalico, 2848885293);
	template<> NAVESUSFX2026_API UClass* StaticClass<ABloqueMetalico>()
	{
		return ABloqueMetalico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueMetalico(Z_Construct_UClass_ABloqueMetalico, &ABloqueMetalico::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("ABloqueMetalico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMetalico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
