// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/GeneradorLaberinto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorLaberinto() {}
// Cross Module References
	NAVESUSFX2026_API UScriptStruct* Z_Construct_UScriptStruct_FBloqueMovimientoData();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AGeneradorLaberinto_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AGeneradorLaberinto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FBloqueMovimientoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVESUSFX2026_API uint32 Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloqueMovimientoData, Z_Construct_UPackage__Script_NavesUSFX2026(), TEXT("BloqueMovimientoData"), sizeof(FBloqueMovimientoData), Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash());
	}
	return Singleton;
}
template<> NAVESUSFX2026_API UScriptStruct* StaticStruct<FBloqueMovimientoData>()
{
	return FBloqueMovimientoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloqueMovimientoData(FBloqueMovimientoData::StaticStruct, TEXT("/Script/NavesUSFX2026"), TEXT("BloqueMovimientoData"), false, nullptr, nullptr);
static struct FScriptStruct_NavesUSFX2026_StaticRegisterNativesFBloqueMovimientoData
{
	FScriptStruct_NavesUSFX2026_StaticRegisterNativesFBloqueMovimientoData()
	{
		UScriptStruct::DeferCppStructOps<FBloqueMovimientoData>(FName(TEXT("BloqueMovimientoData")));
	}
} ScriptStruct_NavesUSFX2026_StaticRegisterNativesFBloqueMovimientoData;
	struct Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloqueMovimientoData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
		nullptr,
		&NewStructOps,
		"BloqueMovimientoData",
		sizeof(FBloqueMovimientoData),
		alignof(FBloqueMovimientoData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloqueMovimientoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NavesUSFX2026();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloqueMovimientoData"), sizeof(FBloqueMovimientoData), Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash() { return 2648956916U; }
	void AGeneradorLaberinto::StaticRegisterNativesAGeneradorLaberinto()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorLaberinto_NoRegister()
	{
		return AGeneradorLaberinto::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorLaberinto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorLaberinto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneradorLaberinto.h" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorLaberinto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorLaberinto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorLaberinto_Statics::ClassParams = {
		&AGeneradorLaberinto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorLaberinto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorLaberinto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorLaberinto, 476475782);
	template<> NAVESUSFX2026_API UClass* StaticClass<AGeneradorLaberinto>()
	{
		return AGeneradorLaberinto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorLaberinto(Z_Construct_UClass_AGeneradorLaberinto, &AGeneradorLaberinto::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AGeneradorLaberinto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorLaberinto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
