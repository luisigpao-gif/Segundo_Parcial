// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/AmigoBasico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmigoBasico() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AAmigoBasico_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AAmigoBasico();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ADecorador();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void AAmigoBasico::StaticRegisterNativesAAmigoBasico()
	{
	}
	UClass* Z_Construct_UClass_AAmigoBasico_NoRegister()
	{
		return AAmigoBasico::StaticClass();
	}
	struct Z_Construct_UClass_AAmigoBasico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmigoBasico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecorador,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmigoBasico_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AmigoBasico.h" },
		{ "ModuleRelativePath", "AmigoBasico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmigoBasico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmigoBasico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmigoBasico_Statics::ClassParams = {
		&AAmigoBasico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAmigoBasico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmigoBasico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmigoBasico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmigoBasico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmigoBasico, 1717538764);
	template<> NAVESUSFX2026_API UClass* StaticClass<AAmigoBasico>()
	{
		return AAmigoBasico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmigoBasico(Z_Construct_UClass_AAmigoBasico, &AAmigoBasico::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AAmigoBasico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmigoBasico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
