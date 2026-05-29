// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/BuilderPlataforma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderPlataforma() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_UBuilderPlataforma_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_UBuilderPlataforma();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void UBuilderPlataforma::StaticRegisterNativesUBuilderPlataforma()
	{
	}
	UClass* Z_Construct_UClass_UBuilderPlataforma_NoRegister()
	{
		return UBuilderPlataforma::StaticClass();
	}
	struct Z_Construct_UClass_UBuilderPlataforma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuilderPlataforma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuilderPlataforma_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuilderPlataforma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuilderPlataforma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilderPlataforma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuilderPlataforma_Statics::ClassParams = {
		&UBuilderPlataforma::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuilderPlataforma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuilderPlataforma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuilderPlataforma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuilderPlataforma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuilderPlataforma, 35187085);
	template<> NAVESUSFX2026_API UClass* StaticClass<UBuilderPlataforma>()
	{
		return UBuilderPlataforma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuilderPlataforma(Z_Construct_UClass_UBuilderPlataforma, &UBuilderPlataforma::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("UBuilderPlataforma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilderPlataforma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
