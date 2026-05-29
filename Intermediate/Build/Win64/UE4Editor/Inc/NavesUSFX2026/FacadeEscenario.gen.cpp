// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/FacadeEscenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeEscenario() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AFacadeEscenario_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AFacadeEscenario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void AFacadeEscenario::StaticRegisterNativesAFacadeEscenario()
	{
	}
	UClass* Z_Construct_UClass_AFacadeEscenario_NoRegister()
	{
		return AFacadeEscenario::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeEscenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeEscenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeEscenario_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeEscenario.h" },
		{ "ModuleRelativePath", "FacadeEscenario.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeEscenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeEscenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeEscenario_Statics::ClassParams = {
		&AFacadeEscenario::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFacadeEscenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeEscenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeEscenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeEscenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeEscenario, 3781981392);
	template<> NAVESUSFX2026_API UClass* StaticClass<AFacadeEscenario>()
	{
		return AFacadeEscenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeEscenario(Z_Construct_UClass_AFacadeEscenario, &AFacadeEscenario::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AFacadeEscenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeEscenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
