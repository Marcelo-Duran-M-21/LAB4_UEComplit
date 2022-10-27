// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBricks_Breaker4/Brick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrick() {}
// Cross Module References
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_ABrick_NoRegister();
	UEBRICKS_BREAKER4_API UClass* Z_Construct_UClass_ABrick();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UEBricks_Breaker4();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABrick::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndexType);
		P_GET_UBOOL(Z_Param_bFromSweet);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndexType,Z_Param_bFromSweet,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABrick::StaticRegisterNativesABrick()
	{
		UClass* Class = ABrick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ABrick::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics
	{
		struct Brick_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndexType;
			bool bFromSweet;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndexType;
		static void NewProp_bFromSweet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Brick_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Brick_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Brick_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OtherBodyIndexType = { "OtherBodyIndexType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Brick_eventOnOverlapBegin_Parms, OtherBodyIndexType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_bFromSweet_SetBit(void* Obj)
	{
		((Brick_eventOnOverlapBegin_Parms*)Obj)->bFromSweet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_bFromSweet = { "bFromSweet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Brick_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_bFromSweet_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Brick_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_OtherBodyIndexType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_bFromSweet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// rebote del modificador de velocidad \n" },
		{ "ModuleRelativePath", "Brick.h" },
		{ "ToolTip", "rebote del modificador de velocidad" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABrick, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Brick_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABrick_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABrick_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABrick_NoRegister()
	{
		return ABrick::StaticClass();
	}
	struct Z_Construct_UClass_ABrick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Brick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Brick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEBricks_Breaker4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABrick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABrick_OnOverlapBegin, "OnOverlapBegin" }, // 4276854511
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Brick.h" },
		{ "ModuleRelativePath", "Brick.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick_MetaData[] = {
		{ "Category", "Brick" },
		{ "Comment", "/// <summary>\n/// hacemos visibe con uproperty el bluprints \n/// </summary>\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Brick.h" },
		{ "ToolTip", "<summary>\nhacemos visibe con uproperty el bluprints\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick = { "SM_Brick", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABrick, SM_Brick), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrick_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Brick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Brick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABrick_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABrick, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABrick_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::NewProp_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrick_Statics::NewProp_PitchValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// agregamos nueva propiedad a nuestro ladrillo de poder girar solo\n" },
		{ "ModuleRelativePath", "Brick.h" },
		{ "ToolTip", "agregamos nueva propiedad a nuestro ladrillo de poder girar solo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABrick_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABrick, PitchValue), METADATA_PARAMS(Z_Construct_UClass_ABrick_Statics::NewProp_PitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::NewProp_PitchValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrick_Statics::NewProp_YawValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//cabezera\n" },
		{ "ModuleRelativePath", "Brick.h" },
		{ "ToolTip", "cabezera" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABrick_Statics::NewProp_YawValue = { "YawValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABrick, YawValue), METADATA_PARAMS(Z_Construct_UClass_ABrick_Statics::NewProp_YawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::NewProp_YawValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrick_Statics::NewProp_RollValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//derrape\n" },
		{ "ModuleRelativePath", "Brick.h" },
		{ "ToolTip", "derrape" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABrick_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABrick, RollValue), METADATA_PARAMS(Z_Construct_UClass_ABrick_Statics::NewProp_RollValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::NewProp_RollValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABrick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrick_Statics::NewProp_BoxCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrick_Statics::NewProp_PitchValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrick_Statics::NewProp_YawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrick_Statics::NewProp_RollValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrick_Statics::ClassParams = {
		&ABrick::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABrick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABrick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrick, 1486143717);
	template<> UEBRICKS_BREAKER4_API UClass* StaticClass<ABrick>()
	{
		return ABrick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrick(Z_Construct_UClass_ABrick, &ABrick::StaticClass, TEXT("/Script/UEBricks_Breaker4"), TEXT("ABrick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
