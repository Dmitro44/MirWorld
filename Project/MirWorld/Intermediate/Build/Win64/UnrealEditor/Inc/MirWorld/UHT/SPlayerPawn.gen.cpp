// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/SPlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerPawn() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_ASPlayerPawn();
	MIRWORLD_API UClass* Z_Construct_UClass_ASPlayerPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(ASPlayerPawn::execZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Zoom(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerPawn::execRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Right(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerPawn::execForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Forward(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	void ASPlayerPawn::StaticRegisterNativesASPlayerPawn()
	{
		UClass* Class = ASPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Forward", &ASPlayerPawn::execForward },
			{ "Right", &ASPlayerPawn::execRight },
			{ "Zoom", &ASPlayerPawn::execZoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPlayerPawn_Forward_Statics
	{
		struct SPlayerPawn_eventForward_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventForward_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Forward", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::SPlayerPawn_eventForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::SPlayerPawn_eventForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPlayerPawn_Forward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerPawn_Right_Statics
	{
		struct SPlayerPawn_eventRight_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPlayerPawn_Right_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventRight_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Right_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Right_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerPawn_Right_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Right", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::SPlayerPawn_eventRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Right_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::SPlayerPawn_eventRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPlayerPawn_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics
	{
		struct SPlayerPawn_eventZoom_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventZoom_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Zoom", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::SPlayerPawn_eventZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::SPlayerPawn_eventZoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPlayerPawn_Zoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPlayerPawn);
	UClass* Z_Construct_UClass_ASPlayerPawn_NoRegister()
	{
		return ASPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_zoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetZoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerPawn_Forward, "Forward" }, // 2580489555
		{ &Z_Construct_UFunction_ASPlayerPawn_Right, "Right" }, // 2018669598
		{ &Z_Construct_UFunction_ASPlayerPawn_Zoom, "Zoom" }, // 2413550194
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Default pawn that handles the camera and clicks\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SPlayerPawn.h" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default pawn that handles the camera and clicks" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_moveSpeed_MetaData), Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_moveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_zoomSpeed_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_zoomSpeed = { "zoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, zoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_zoomSpeed_MetaData), Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_zoomSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MinZoom_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MinZoom = { "MinZoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, MinZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MinZoom_MetaData), Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MinZoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MaxZoom_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MaxZoom = { "MaxZoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, MaxZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MaxZoom_MetaData), Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MaxZoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SpringArmComponent_MetaData), Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetLocation_MetaData), Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetZoom_MetaData[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetZoom = { "TargetZoom", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, TargetZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetZoom_MetaData), Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetZoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_zoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MinZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MaxZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetZoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerPawn_Statics::ClassParams = {
		&ASPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASPlayerPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASPlayerPawn()
	{
		if (!Z_Registration_Info_UClass_ASPlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPlayerPawn.OuterSingleton, Z_Construct_UClass_ASPlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASPlayerPawn.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<ASPlayerPawn>()
	{
		return ASPlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerPawn);
	ASPlayerPawn::~ASPlayerPawn() {}
	struct Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_SPlayerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_SPlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPlayerPawn, ASPlayerPawn::StaticClass, TEXT("ASPlayerPawn"), &Z_Registration_Info_UClass_ASPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPlayerPawn), 3229449488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_SPlayerPawn_h_1162090478(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_SPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealRep_MirWorld_Project_MirWorld_Source_MirWorld_SPlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
