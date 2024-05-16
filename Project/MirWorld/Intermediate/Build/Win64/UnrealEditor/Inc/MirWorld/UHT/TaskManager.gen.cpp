// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirWorld/TaskManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_ACharacterMW2D_NoRegister();
	MIRWORLD_API UClass* Z_Construct_UClass_UTaskManager();
	MIRWORLD_API UClass* Z_Construct_UClass_UTaskManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirWorld();
// End Cross Module References
	DEFINE_FUNCTION(UTaskManager::execStartTask)
	{
		P_GET_OBJECT(ACharacterMW2D,Z_Param_Char);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartTask(Z_Param_Char);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManager::execClearTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManager::execAddTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TaskType);
		P_GET_OBJECT(AActor,Z_Param_Aim);
		P_GET_TSET(int32,Z_Param_IDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTask(Z_Param_TaskType,Z_Param_Aim,Z_Param_IDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskManager::execSetPriorityMatrix)
	{
		P_GET_TARRAY(int32,Z_Param_NewMatrix);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriorityMatrix(Z_Param_NewMatrix,Z_Param_ID);
		P_NATIVE_END;
	}
	void UTaskManager::StaticRegisterNativesUTaskManager()
	{
		UClass* Class = UTaskManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTask", &UTaskManager::execAddTask },
			{ "ClearTasks", &UTaskManager::execClearTasks },
			{ "SetPriorityMatrix", &UTaskManager::execSetPriorityMatrix },
			{ "StartTask", &UTaskManager::execStartTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskManager_AddTask_Statics
	{
		struct TaskManager_eventAddTask_Parms
		{
			int32 TaskType;
			AActor* Aim;
			TSet<int32> IDs;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TaskType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Aim;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IDs_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_IDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskManager_AddTask_Statics::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskManager_eventAddTask_Parms, TaskType), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskManager_AddTask_Statics::NewProp_Aim = { "Aim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskManager_eventAddTask_Parms, Aim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskManager_AddTask_Statics::NewProp_IDs_ElementProp = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UTaskManager_AddTask_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskManager_eventAddTask_Parms, IDs), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManager_AddTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManager_AddTask_Statics::NewProp_TaskType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManager_AddTask_Statics::NewProp_Aim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManager_AddTask_Statics::NewProp_IDs_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManager_AddTask_Statics::NewProp_IDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManager_AddTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tasks" },
		{ "ModuleRelativePath", "TaskManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManager_AddTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManager, nullptr, "AddTask", nullptr, nullptr, Z_Construct_UFunction_UTaskManager_AddTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_AddTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskManager_AddTask_Statics::TaskManager_eventAddTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_AddTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskManager_AddTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_AddTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTaskManager_AddTask_Statics::TaskManager_eventAddTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTaskManager_AddTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskManager_AddTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManager_ClearTasks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManager_ClearTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear all tasks\n" },
#endif
		{ "ModuleRelativePath", "TaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all tasks" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManager_ClearTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManager, nullptr, "ClearTasks", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_ClearTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskManager_ClearTasks_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTaskManager_ClearTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskManager_ClearTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics
	{
		struct TaskManager_eventSetPriorityMatrix_Parms
		{
			TArray<int32> NewMatrix;
			int32 ID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewMatrix_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewMatrix;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::NewProp_NewMatrix_Inner = { "NewMatrix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::NewProp_NewMatrix = { "NewMatrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskManager_eventSetPriorityMatrix_Parms, NewMatrix), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskManager_eventSetPriorityMatrix_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::NewProp_NewMatrix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::NewProp_NewMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets priorities for selected character\n" },
#endif
		{ "ModuleRelativePath", "TaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets priorities for selected character" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManager, nullptr, "SetPriorityMatrix", nullptr, nullptr, Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::TaskManager_eventSetPriorityMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::TaskManager_eventSetPriorityMatrix_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTaskManager_SetPriorityMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskManager_SetPriorityMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskManager_StartTask_Statics
	{
		struct TaskManager_eventStartTask_Parms
		{
			ACharacterMW2D* Char;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Char;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskManager_StartTask_Statics::NewProp_Char = { "Char", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskManager_eventStartTask_Parms, Char), Z_Construct_UClass_ACharacterMW2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTaskManager_StartTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TaskManager_eventStartTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskManager_StartTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskManager_eventStartTask_Parms), &Z_Construct_UFunction_UTaskManager_StartTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskManager_StartTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManager_StartTask_Statics::NewProp_Char,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskManager_StartTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskManager_StartTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tries to find a task for the character\n// Returns true if it's succeeded\n" },
#endif
		{ "ModuleRelativePath", "TaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to find a task for the character\nReturns true if it's succeeded" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskManager_StartTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskManager, nullptr, "StartTask", nullptr, nullptr, Z_Construct_UFunction_UTaskManager_StartTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_StartTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskManager_StartTask_Statics::TaskManager_eventStartTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_StartTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskManager_StartTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskManager_StartTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTaskManager_StartTask_Statics::TaskManager_eventStartTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTaskManager_StartTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskManager_StartTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskManager);
	UClass* Z_Construct_UClass_UTaskManager_NoRegister()
	{
		return UTaskManager::StaticClass();
	}
	struct Z_Construct_UClass_UTaskManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MirWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskManager_AddTask, "AddTask" }, // 1920143476
		{ &Z_Construct_UFunction_UTaskManager_ClearTasks, "ClearTasks" }, // 3094076477
		{ &Z_Construct_UFunction_UTaskManager_SetPriorityMatrix, "SetPriorityMatrix" }, // 2006820543
		{ &Z_Construct_UFunction_UTaskManager_StartTask, "StartTask" }, // 3895952285
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Uses priority matrix for task management\n */" },
#endif
		{ "IncludePath", "TaskManager.h" },
		{ "ModuleRelativePath", "TaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses priority matrix for task management" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskManager_Statics::ClassParams = {
		&UTaskManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTaskManager()
	{
		if (!Z_Registration_Info_UClass_UTaskManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskManager.OuterSingleton, Z_Construct_UClass_UTaskManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTaskManager.OuterSingleton;
	}
	template<> MIRWORLD_API UClass* StaticClass<UTaskManager>()
	{
		return UTaskManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskManager);
	UTaskManager::~UTaskManager() {}
	struct Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTaskManager, UTaskManager::StaticClass, TEXT("UTaskManager"), &Z_Registration_Info_UClass_UTaskManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskManager), 3683057535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_2129352489(TEXT("/Script/MirWorld"),
		Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Projects_GitHub_MirWorld_MirWorld_Project_MirWorld_Source_MirWorld_TaskManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
