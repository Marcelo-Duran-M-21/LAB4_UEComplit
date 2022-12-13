// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBricks_Breaker4/CapAyuda.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapAyuda() {}
// Cross Module References
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_ACapAyuda_NoRegister();
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_ACapAyuda();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UEBricks_Breaker4();
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_AClockTower_NoRegister();
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_UMorph_NoRegister();
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_USuscriber_NoRegister();
// End Cross Module References
	void ACapAyuda::StaticRegisterNativesACapAyuda()
	{
	}
	UClass* Z_Construct_UClass_ACapAyuda_NoRegister()
	{
		return ACapAyuda::StaticClass();
	}
	struct Z_Construct_UClass_ACapAyuda_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClockTower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClockTower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapAyuda_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEBricks_Breaker4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapAyuda_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapAyuda.h" },
		{ "ModuleRelativePath", "CapAyuda.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapAyuda_Statics::NewProp_ClockTower_MetaData[] = {
		{ "Comment", "//The Clock Tower of this Subscriber\n" },
		{ "ModuleRelativePath", "CapAyuda.h" },
		{ "ToolTip", "The Clock Tower of this Subscriber" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapAyuda_Statics::NewProp_ClockTower = { "ClockTower", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapAyuda, ClockTower), Z_Construct_UClass_AClockTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapAyuda_Statics::NewProp_ClockTower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapAyuda_Statics::NewProp_ClockTower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapAyuda_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapAyuda_Statics::NewProp_ClockTower,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACapAyuda_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMorph_NoRegister, (int32)VTABLE_OFFSET(ACapAyuda, IMorph), false },
			{ Z_Construct_UClass_USuscriber_NoRegister, (int32)VTABLE_OFFSET(ACapAyuda, ISuscriber), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapAyuda_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapAyuda>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapAyuda_Statics::ClassParams = {
		&ACapAyuda::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACapAyuda_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACapAyuda_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapAyuda_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapAyuda_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapAyuda()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapAyuda_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapAyuda, 2181251927);
	template<> UEBRICKS_BREAKER4_API UClass* StaticClass<ACapAyuda>()
	{
		return ACapAyuda::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapAyuda(Z_Construct_UClass_ACapAyuda, &ACapAyuda::StaticClass, TEXT("/Script/UEBricks_Breaker4"), TEXT("ACapAyuda"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapAyuda);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
