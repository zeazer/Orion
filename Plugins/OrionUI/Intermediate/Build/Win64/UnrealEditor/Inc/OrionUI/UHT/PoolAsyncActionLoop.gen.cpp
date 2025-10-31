// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Async/PoolAsyncActionLoop.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePoolAsyncActionLoop() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncActionLoop();
ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncActionLoop_NoRegister();
ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPoolLoopOutputPin ****************************************************
struct Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics
{
	struct _Script_OrionUI_eventPoolLoopOutputPin_Parms
	{
		UOrionUserWidget* OrionUserWidget;
		int32 IndexCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionUserWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget = { "OrionUserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventPoolLoopOutputPin_Parms, OrionUserWidget), Z_Construct_UClass_UOrionUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionUserWidget_MetaData), NewProp_OrionUserWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_IndexCount = { "IndexCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventPoolLoopOutputPin_Parms, IndexCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_IndexCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionUI, nullptr, "PoolLoopOutputPin__DelegateSignature", Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::_Script_OrionUI_eventPoolLoopOutputPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::_Script_OrionUI_eventPoolLoopOutputPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPoolLoopOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PoolLoopOutputPin, UOrionUserWidget* OrionUserWidget, int32 IndexCount)
{
	struct _Script_OrionUI_eventPoolLoopOutputPin_Parms
	{
		UOrionUserWidget* OrionUserWidget;
		int32 IndexCount;
	};
	_Script_OrionUI_eventPoolLoopOutputPin_Parms Parms;
	Parms.OrionUserWidget=OrionUserWidget;
	Parms.IndexCount=IndexCount;
	PoolLoopOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPoolLoopOutputPin ******************************************************

// ********** Begin Class UPoolAsyncActionLoop Function InternalCompleted **************************
struct Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolAsyncActionLoop, nullptr, "InternalCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolAsyncActionLoop::execInternalCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InternalCompleted();
	P_NATIVE_END;
}
// ********** End Class UPoolAsyncActionLoop Function InternalCompleted ****************************

// ********** Begin Class UPoolAsyncActionLoop Function InternalTick *******************************
struct Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolAsyncActionLoop, nullptr, "InternalTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolAsyncActionLoop::execInternalTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InternalTick();
	P_NATIVE_END;
}
// ********** End Class UPoolAsyncActionLoop Function InternalTick *********************************

// ********** Begin Class UPoolAsyncActionLoop Function PoolLoopAsyncNode **************************
struct Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics
{
	struct PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms
	{
		const UObject* WorldContextObject;
		TSoftClassPtr<UOrionUserWidget>  PoolWidget;
		int32 Count;
		UPoolAsyncActionLoop* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionUIAsynch" },
		{ "CPP_Default_Count", "1" },
		{ "MetaClass", "/Script/UMG.UserWidget" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PoolWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_PoolWidget = { "PoolWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, PoolWidget), Z_Construct_UClass_UOrionUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, ReturnValue), Z_Construct_UClass_UPoolAsyncActionLoop_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_PoolWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolAsyncActionLoop, nullptr, "PoolLoopAsyncNode", Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolAsyncActionLoop::execPoolLoopAsyncNode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_SOFTCLASS(TSoftClassPtr<UOrionUserWidget> ,Z_Param_PoolWidget);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPoolAsyncActionLoop**)Z_Param__Result=UPoolAsyncActionLoop::PoolLoopAsyncNode(Z_Param_WorldContextObject,Z_Param_PoolWidget,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UPoolAsyncActionLoop Function PoolLoopAsyncNode ****************************

// ********** Begin Class UPoolAsyncActionLoop *****************************************************
void UPoolAsyncActionLoop::StaticRegisterNativesUPoolAsyncActionLoop()
{
	UClass* Class = UPoolAsyncActionLoop::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InternalCompleted", &UPoolAsyncActionLoop::execInternalCompleted },
		{ "InternalTick", &UPoolAsyncActionLoop::execInternalTick },
		{ "PoolLoopAsyncNode", &UPoolAsyncActionLoop::execPoolLoopAsyncNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolAsyncActionLoop;
UClass* UPoolAsyncActionLoop::GetPrivateStaticClass()
{
	using TClass = UPoolAsyncActionLoop;
	if (!Z_Registration_Info_UClass_UPoolAsyncActionLoop.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PoolAsyncActionLoop"),
			Z_Registration_Info_UClass_UPoolAsyncActionLoop.InnerSingleton,
			StaticRegisterNativesUPoolAsyncActionLoop,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPoolAsyncActionLoop.InnerSingleton;
}
UClass* Z_Construct_UClass_UPoolAsyncActionLoop_NoRegister()
{
	return UPoolAsyncActionLoop::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPoolAsyncActionLoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Async/PoolAsyncActionLoop.h" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Category", "OrionUIAsynch" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultingWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResultingWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted, "InternalCompleted" }, // 2996941445
		{ &Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick, "InternalTick" }, // 3897648437
		{ &Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode, "PoolLoopAsyncNode" }, // 2460299330
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolAsyncActionLoop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncActionLoop, Completed), Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 3738510754
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_ResultingWidgetClass = { "ResultingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncActionLoop, ResultingWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultingWidgetClass_MetaData), NewProp_ResultingWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncActionLoop, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoolAsyncActionLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_ResultingWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPoolAsyncActionLoop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolAsyncActionLoop_Statics::ClassParams = {
	&UPoolAsyncActionLoop::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPoolAsyncActionLoop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolAsyncActionLoop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolAsyncActionLoop()
{
	if (!Z_Registration_Info_UClass_UPoolAsyncActionLoop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolAsyncActionLoop.OuterSingleton, Z_Construct_UClass_UPoolAsyncActionLoop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolAsyncActionLoop.OuterSingleton;
}
UPoolAsyncActionLoop::UPoolAsyncActionLoop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPoolAsyncActionLoop);
UPoolAsyncActionLoop::~UPoolAsyncActionLoop() {}
// ********** End Class UPoolAsyncActionLoop *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolAsyncActionLoop, UPoolAsyncActionLoop::StaticClass, TEXT("UPoolAsyncActionLoop"), &Z_Registration_Info_UClass_UPoolAsyncActionLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolAsyncActionLoop), 2780917973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h__Script_OrionUI_3760712648(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
