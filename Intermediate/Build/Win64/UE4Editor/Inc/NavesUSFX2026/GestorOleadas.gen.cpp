// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/GestorOleadas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestorOleadas() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AGestorOleadas_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AGestorOleadas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_UObserver_NoRegister();
// End Cross Module References
	void AGestorOleadas::StaticRegisterNativesAGestorOleadas()
	{
	}
	UClass* Z_Construct_UClass_AGestorOleadas_NoRegister()
	{
		return AGestorOleadas::StaticClass();
	}
	struct Z_Construct_UClass_AGestorOleadas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGestorOleadas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGestorOleadas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GestorOleadas.h" },
		{ "ModuleRelativePath", "GestorOleadas.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGestorOleadas_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObserver_NoRegister, (int32)VTABLE_OFFSET(AGestorOleadas, IObserver), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGestorOleadas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGestorOleadas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGestorOleadas_Statics::ClassParams = {
		&AGestorOleadas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGestorOleadas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGestorOleadas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGestorOleadas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGestorOleadas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGestorOleadas, 1740819793);
	template<> NAVESUSFX2026_API UClass* StaticClass<AGestorOleadas>()
	{
		return AGestorOleadas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGestorOleadas(Z_Construct_UClass_AGestorOleadas, &AGestorOleadas::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AGestorOleadas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGestorOleadas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
