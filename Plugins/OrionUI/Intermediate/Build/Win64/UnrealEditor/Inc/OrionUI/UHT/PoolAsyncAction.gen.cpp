// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Async/PoolAsyncAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePoolAsyncAction() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncAction();
ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncAction_NoRegister();
ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPoolOutputPin ********************************************************
struct Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics
{
	struct _Script_OrionUI_eventPoolOutputPin_Parms
	{
		UCommonUserWidget* OrionUserWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionUserWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget = { "OrionUserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventPoolOutputPin_Parms, OrionUserWidget), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionUserWidget_MetaData), NewProp_OrionUserWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionUI, nullptr, "PoolOutputPin__DelegateSignature", Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::_Script_OrionUI_eventPoolOutputPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::_Script_OrionUI_eventPoolOutputPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPoolOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PoolOutputPin, UCommonUserWidget* OrionUserWidget)
{
	struct _Script_OrionUI_eventPoolOutputPin_Parms
	{
		UCommonUserWidget* OrionUserWidget;
	};
	_Script_OrionUI_eventPoolOutputPin_Parms Parms;
	Parms.OrionUserWidget=OrionUserWidget;
	PoolOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPoolOutputPin **********************************************************

// ********** Begin Class UPoolAsyncAction Function InternalCompleted ******************************
struct Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolAsyncAction, nullptr, "InternalCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolAsyncAction::execInternalCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InternalCompleted();
	P_NATIVE_END;
}
// ********** End Class UPoolAsyncAction Function InternalCompleted ********************************

// ********** Begin Class UPoolAsyncAction Function InternalTick ***********************************
struct Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolAsyncAction, nullptr, "InternalTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolAsyncAction_InternalTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolAsyncAction::execInternalTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InternalTick();
	P_NATIVE_END;
}
// ********** End Class UPoolAsyncAction Function InternalTick *************************************

// ********** Begin Class UPoolAsyncAction Function PoolAsyncNode **********************************
struct Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics
{
	struct PoolAsyncAction_eventPoolAsyncNode_Parms
	{
		const UObject* WorldContextObject;
		TSoftClassPtr<UCommonUserWidget>  PoolWidget;
		UPoolAsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionUIAsynch" },
		{ "MetaClass", "/Script/UMG.UCommonUserWidget" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PoolWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncAction_eventPoolAsyncNode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_PoolWidget = { "PoolWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncAction_eventPoolAsyncNode_Parms, PoolWidget), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncAction_eventPoolAsyncNode_Parms, ReturnValue), Z_Construct_UClass_UPoolAsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_PoolWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolAsyncAction, nullptr, "PoolAsyncNode", Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PoolAsyncAction_eventPoolAsyncNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PoolAsyncAction_eventPoolAsyncNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolAsyncAction::execPoolAsyncNode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_SOFTCLASS(TSoftClassPtr<UCommonUserWidget> ,Z_Param_PoolWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPoolAsyncAction**)Z_Param__Result=UPoolAsyncAction::PoolAsyncNode(Z_Param_WorldContextObject,Z_Param_PoolWidget);
	P_NATIVE_END;
}
// ********** End Class UPoolAsyncAction Function PoolAsyncNode ************************************

// ********** Begin Class UPoolAsyncAction *********************************************************
void UPoolAsyncAction::StaticRegisterNativesUPoolAsyncAction()
{
	UClass* Class = UPoolAsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InternalCompleted", &UPoolAsyncAction::execInternalCompleted },
		{ "InternalTick", &UPoolAsyncAction::execInternalTick },
		{ "PoolAsyncNode", &UPoolAsyncAction::execPoolAsyncNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolAsyncAction;
UClass* UPoolAsyncAction::GetPrivateStaticClass()
{
	using TClass = UPoolAsyncAction;
	if (!Z_Registration_Info_UClass_UPoolAsyncAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PoolAsyncAction"),
			Z_Registration_Info_UClass_UPoolAsyncAction.InnerSingleton,
			StaticRegisterNativesUPoolAsyncAction,
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
	return Z_Registration_Info_UClass_UPoolAsyncAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UPoolAsyncAction_NoRegister()
{
	return UPoolAsyncAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPoolAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Async/PoolAsyncAction.h" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Category", "OrionUIAsynch" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultingWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResultingWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted, "InternalCompleted" }, // 1259607957
		{ &Z_Construct_UFunction_UPoolAsyncAction_InternalTick, "InternalTick" }, // 1514363949
		{ &Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode, "PoolAsyncNode" }, // 3902528411
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncAction, Completed), Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 1286527262
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_ResultingWidgetClass = { "ResultingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncAction, ResultingWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultingWidgetClass_MetaData), NewProp_ResultingWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncAction, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoolAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_ResultingWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPoolAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolAsyncAction_Statics::ClassParams = {
	&UPoolAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPoolAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolAsyncAction()
{
	if (!Z_Registration_Info_UClass_UPoolAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolAsyncAction.OuterSingleton, Z_Construct_UClass_UPoolAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolAsyncAction.OuterSingleton;
}
UPoolAsyncAction::UPoolAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPoolAsyncAction);
UPoolAsyncAction::~UPoolAsyncAction() {}
// ********** End Class UPoolAsyncAction ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolAsyncAction, UPoolAsyncAction::StaticClass, TEXT("UPoolAsyncAction"), &Z_Registration_Info_UClass_UPoolAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolAsyncAction), 1093856222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h__Script_OrionUI_1625337268(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
