// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/AmigoArmado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmigoArmado() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AAmigoArmado_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AAmigoArmado();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ADecorador();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void AAmigoArmado::StaticRegisterNativesAAmigoArmado()
	{
	}
	UClass* Z_Construct_UClass_AAmigoArmado_NoRegister()
	{
		return AAmigoArmado::StaticClass();
	}
	struct Z_Construct_UClass_AAmigoArmado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmigoArmado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecorador,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmigoArmado_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AmigoArmado.h" },
		{ "ModuleRelativePath", "AmigoArmado.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmigoArmado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmigoArmado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmigoArmado_Statics::ClassParams = {
		&AAmigoArmado::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAmigoArmado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmigoArmado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmigoArmado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmigoArmado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmigoArmado, 2972798524);
	template<> NAVESUSFX2026_API UClass* StaticClass<AAmigoArmado>()
	{
		return AAmigoArmado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmigoArmado(Z_Construct_UClass_AAmigoArmado, &AAmigoArmado::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AAmigoArmado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmigoArmado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
