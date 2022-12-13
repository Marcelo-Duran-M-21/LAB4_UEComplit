// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEBRICKS_BREAKER4_Morph_generated_h
#error "Morph.generated.h already included, missing '#pragma once' in Morph.h"
#endif
#define UEBRICKS_BREAKER4_Morph_generated_h

#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_SPARSE_DATA
#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_RPC_WRAPPERS
#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UEBRICKS_BREAKER4_API UMorph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMorph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UEBRICKS_BREAKER4_API, UMorph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMorph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEBRICKS_BREAKER4_API UMorph(UMorph&&); \
	UEBRICKS_BREAKER4_API UMorph(const UMorph&); \
public:


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UEBRICKS_BREAKER4_API UMorph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEBRICKS_BREAKER4_API UMorph(UMorph&&); \
	UEBRICKS_BREAKER4_API UMorph(const UMorph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UEBRICKS_BREAKER4_API, UMorph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMorph); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMorph)


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMorph(); \
	friend struct Z_Construct_UClass_UMorph_Statics; \
public: \
	DECLARE_CLASS(UMorph, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UEBricks_Breaker4"), UEBRICKS_BREAKER4_API) \
	DECLARE_SERIALIZER(UMorph)


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_GENERATED_UINTERFACE_BODY() \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_GENERATED_UINTERFACE_BODY() \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMorph() {} \
public: \
	typedef UMorph UClassType; \
	typedef IMorph ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMorph() {} \
public: \
	typedef UMorph UClassType; \
	typedef IMorph ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_10_PROLOG
#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_SPARSE_DATA \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_RPC_WRAPPERS \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_SPARSE_DATA \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEBRICKS_BREAKER4_API UClass* StaticClass<class UMorph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEBricks_Breaker4_Source_UEBricks_Breaker4_Morph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
