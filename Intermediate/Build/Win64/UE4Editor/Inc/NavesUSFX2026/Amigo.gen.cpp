// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/Amigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmigo() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_UAmigo_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_UAmigo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void UAmigo::StaticRegisterNativesUAmigo()
	{
	}
	UClass* Z_Construct_UClass_UAmigo_NoRegister()
	{
		return UAmigo::StaticClass();
	}
	struct Z_Construct_UClass_UAmigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmigo_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Amigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAmigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAmigo_Statics::ClassParams = {
		&UAmigo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAmigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAmigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAmigo, 2451381660);
	template<> NAVESUSFX2026_API UClass* StaticClass<UAmigo>()
	{
		return UAmigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAmigo(Z_Construct_UClass_UAmigo, &UAmigo::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("UAmigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
