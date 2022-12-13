// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBricks_Breaker4/PA_BuilderBossQueen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePA_BuilderBossQueen() {}
// Cross Module References
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_UPA_BuilderBossQueen_NoRegister();
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_UPA_BuilderBossQueen();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UEBricks_Breaker4();
// End Cross Module References
	void UPA_BuilderBossQueen::StaticRegisterNativesUPA_BuilderBossQueen()
	{
	}
	UClass* Z_Construct_UClass_UPA_BuilderBossQueen_NoRegister()
	{
		return UPA_BuilderBossQueen::StaticClass();
	}
	struct Z_Construct_UClass_UPA_BuilderBossQueen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPA_BuilderBossQueen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UEBricks_Breaker4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPA_BuilderBossQueen_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PA_BuilderBossQueen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPA_BuilderBossQueen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPA_BuilderBossQueen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPA_BuilderBossQueen_Statics::ClassParams = {
		&UPA_BuilderBossQueen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPA_BuilderBossQueen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPA_BuilderBossQueen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPA_BuilderBossQueen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPA_BuilderBossQueen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPA_BuilderBossQueen, 3523855572);
	template<> UEBRICKS_BREAKER4_API UClass* StaticClass<UPA_BuilderBossQueen>()
	{
		return UPA_BuilderBossQueen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPA_BuilderBossQueen(Z_Construct_UClass_UPA_BuilderBossQueen, &UPA_BuilderBossQueen::StaticClass, TEXT("/Script/UEBricks_Breaker4"), TEXT("UPA_BuilderBossQueen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPA_BuilderBossQueen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
