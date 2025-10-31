// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionViewControllerWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionViewControllerWidget() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget();
ORIONUI_API UClass* Z_Construct_UClass_UOrionViewControllerWidget();
ORIONUI_API UClass* Z_Construct_UClass_UOrionViewControllerWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UViewData_NoRegister();
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EViewDataMode();
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EViewType();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EViewDataMode *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewDataMode;
static UEnum* EViewDataMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EViewDataMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EViewDataMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EViewDataMode, (UObject*)Z_Construct_UPackage__Script_OrionUI(), TEXT("EViewDataMode"));
	}
	return Z_Registration_Info_UEnum_EViewDataMode.OuterSingleton;
}
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewDataMode>()
{
	return EViewDataMode_StaticEnum();
}
struct Z_Construct_UEnum_OrionUI_EViewDataMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DataTable.Name", "EViewDataMode::DataTable" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
		{ "ViewData.Name", "EViewDataMode::ViewData" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EViewDataMode::ViewData", (int64)EViewDataMode::ViewData },
		{ "EViewDataMode::DataTable", (int64)EViewDataMode::DataTable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionUI,
	nullptr,
	"EViewDataMode",
	"EViewDataMode",
	Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionUI_EViewDataMode()
{
	if (!Z_Registration_Info_UEnum_EViewDataMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewDataMode.InnerSingleton, Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EViewDataMode.InnerSingleton;
}
// ********** End Enum EViewDataMode ***************************************************************

// ********** Begin Class UOrionViewControllerWidget Function ForceUpdate **************************
struct Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionViewControllerWidget, nullptr, "ForceUpdate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionViewControllerWidget::execForceUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceUpdate();
	P_NATIVE_END;
}
// ********** End Class UOrionViewControllerWidget Function ForceUpdate ****************************

// ********** Begin Class UOrionViewControllerWidget Function GetActiveView ************************
struct Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics
{
	struct OrionViewControllerWidget_eventGetActiveView_Parms
	{
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionViewControllerWidget_eventGetActiveView_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionViewControllerWidget, nullptr, "GetActiveView", Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::OrionViewControllerWidget_eventGetActiveView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::OrionViewControllerWidget_eventGetActiveView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionViewControllerWidget::execGetActiveView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetActiveView();
	P_NATIVE_END;
}
// ********** End Class UOrionViewControllerWidget Function GetActiveView **************************

// ********** Begin Class UOrionViewControllerWidget Function OnLoadComplete ***********************
struct Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionViewControllerWidget, nullptr, "OnLoadComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionViewControllerWidget::execOnLoadComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadComplete();
	P_NATIVE_END;
}
// ********** End Class UOrionViewControllerWidget Function OnLoadComplete *************************

// ********** Begin Class UOrionViewControllerWidget ***********************************************
void UOrionViewControllerWidget::StaticRegisterNativesUOrionViewControllerWidget()
{
	UClass* Class = UOrionViewControllerWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceUpdate", &UOrionViewControllerWidget::execForceUpdate },
		{ "GetActiveView", &UOrionViewControllerWidget::execGetActiveView },
		{ "OnLoadComplete", &UOrionViewControllerWidget::execOnLoadComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionViewControllerWidget;
UClass* UOrionViewControllerWidget::GetPrivateStaticClass()
{
	using TClass = UOrionViewControllerWidget;
	if (!Z_Registration_Info_UClass_UOrionViewControllerWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionViewControllerWidget"),
			Z_Registration_Info_UClass_UOrionViewControllerWidget.InnerSingleton,
			StaticRegisterNativesUOrionViewControllerWidget,
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
	return Z_Registration_Info_UClass_UOrionViewControllerWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionViewControllerWidget_NoRegister()
{
	return UOrionViewControllerWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionViewControllerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/OrionViewControllerWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIControllerClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIControllerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformViewClasses_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewInstance_MetaData[] = {
		{ "Category", "OrionViewControllerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugViewClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDataMode_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewData_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditCondition", "ViewDataMode == EViewDataMode::ViewData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDataTable_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditCondition", "ViewDataMode == EViewDataMode::DataTable" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIControllerInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PlatformViewClasses_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformViewClasses_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformViewClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewInstance;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DebugViewClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ViewDataMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewDataMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate, "ForceUpdate" }, // 2540612974
		{ &Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView, "GetActiveView" }, // 4184299415
		{ &Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete, "OnLoadComplete" }, // 4018500018
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionViewControllerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerClass = { "UIControllerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, UIControllerClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIControllerClass_MetaData), NewProp_UIControllerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerInstance = { "UIControllerInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, UIControllerInstance), Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIControllerInstance_MetaData), NewProp_UIControllerInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Canvas_MetaData), NewProp_Canvas_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_ValueProp = { "PlatformViewClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_Key_KeyProp = { "PlatformViewClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionUI_EViewType, METADATA_PARAMS(0, nullptr) }; // 1826807905
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses = { "PlatformViewClasses", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, PlatformViewClasses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformViewClasses_MetaData), NewProp_PlatformViewClasses_MetaData) }; // 1826807905
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewInstance = { "ViewInstance", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewInstance), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewInstance_MetaData), NewProp_ViewInstance_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_DebugViewClass = { "DebugViewClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, DebugViewClass), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugViewClass_MetaData), NewProp_DebugViewClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode = { "ViewDataMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewDataMode), Z_Construct_UEnum_OrionUI_EViewDataMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDataMode_MetaData), NewProp_ViewDataMode_MetaData) }; // 4266386237
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewData = { "ViewData", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewData), Z_Construct_UClass_UViewData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewData_MetaData), NewProp_ViewData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataTable = { "ViewDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDataTable_MetaData), NewProp_ViewDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionViewControllerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_DebugViewClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionViewControllerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::ClassParams = {
	&UOrionViewControllerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionViewControllerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionViewControllerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionViewControllerWidget()
{
	if (!Z_Registration_Info_UClass_UOrionViewControllerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionViewControllerWidget.OuterSingleton, Z_Construct_UClass_UOrionViewControllerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionViewControllerWidget.OuterSingleton;
}
UOrionViewControllerWidget::UOrionViewControllerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionViewControllerWidget);
UOrionViewControllerWidget::~UOrionViewControllerWidget() {}
// ********** End Class UOrionViewControllerWidget *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h__Script_OrionUI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EViewDataMode_StaticEnum, TEXT("EViewDataMode"), &Z_Registration_Info_UEnum_EViewDataMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4266386237U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionViewControllerWidget, UOrionViewControllerWidget::StaticClass, TEXT("UOrionViewControllerWidget"), &Z_Registration_Info_UClass_UOrionViewControllerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionViewControllerWidget), 820323249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h__Script_OrionUI_4258990260(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h__Script_OrionUI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h__Script_OrionUI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
