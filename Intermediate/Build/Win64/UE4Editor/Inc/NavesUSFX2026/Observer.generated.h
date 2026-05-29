// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVESUSFX2026_Observer_generated_h
#error "Observer.generated.h already included, missing '#pragma once' in Observer.h"
#endif
#define NAVESUSFX2026_Observer_generated_h

#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_SPARSE_DATA
#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_RPC_WRAPPERS
#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UObserver(UObserver&&); \
	NAVESUSFX2026_API UObserver(const UObserver&); \
public:


#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UObserver(UObserver&&); \
	NAVESUSFX2026_API UObserver(const UObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObserver)


#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObserver(); \
	friend struct Z_Construct_UClass_UObserver_Statics; \
public: \
	DECLARE_CLASS(UObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavesUSFX2026"), NAVESUSFX2026_API) \
	DECLARE_SERIALIZER(UObserver)


#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_GENERATED_UINTERFACE_BODY() \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_GENERATED_UINTERFACE_BODY() \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObserver() {} \
public: \
	typedef UObserver UClassType; \
	typedef IObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SegundoParcial_Source_NavesUSFX2026_Observer_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IObserver() {} \
public: \
	typedef UObserver UClassType; \
	typedef IObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SegundoParcial_Source_NavesUSFX2026_Observer_h_8_PROLOG
#define SegundoParcial_Source_NavesUSFX2026_Observer_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_SPARSE_DATA \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_RPC_WRAPPERS \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SegundoParcial_Source_NavesUSFX2026_Observer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_SPARSE_DATA \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SegundoParcial_Source_NavesUSFX2026_Observer_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVESUSFX2026_API UClass* StaticClass<class UObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SegundoParcial_Source_NavesUSFX2026_Observer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
