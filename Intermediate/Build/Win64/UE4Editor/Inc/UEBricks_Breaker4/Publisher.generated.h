// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEBRICKS_BREAKER4_Publisher_generated_h
#error "Publisher.generated.h already included, missing '#pragma once' in Publisher.h"
#endif
#define UEBRICKS_BREAKER4_Publisher_generated_h

#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_SPARSE_DATA
#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_RPC_WRAPPERS
#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPublisher(); \
	friend struct Z_Construct_UClass_APublisher_Statics; \
public: \
	DECLARE_CLASS(APublisher, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEBricks_Breaker4"), NO_API) \
	DECLARE_SERIALIZER(APublisher)


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPublisher(); \
	friend struct Z_Construct_UClass_APublisher_Statics; \
public: \
	DECLARE_CLASS(APublisher, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEBricks_Breaker4"), NO_API) \
	DECLARE_SERIALIZER(APublisher)


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APublisher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APublisher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APublisher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APublisher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APublisher(APublisher&&); \
	NO_API APublisher(const APublisher&); \
public:


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APublisher(APublisher&&); \
	NO_API APublisher(const APublisher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APublisher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APublisher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APublisher)


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Subscribers() { return STRUCT_OFFSET(APublisher, Subscribers); }


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_10_PROLOG
#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_PRIVATE_PROPERTY_OFFSET \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_SPARSE_DATA \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_RPC_WRAPPERS \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_INCLASS \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_PRIVATE_PROPERTY_OFFSET \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_SPARSE_DATA \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_INCLASS_NO_PURE_DECLS \
	UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEBRICKS_BREAKER4_API UClass* StaticClass<class APublisher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEBricks_Breaker4_Source_UEBricks_Breaker4_Publisher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
