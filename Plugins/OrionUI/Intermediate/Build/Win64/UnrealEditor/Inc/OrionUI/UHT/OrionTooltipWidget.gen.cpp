// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionTooltipWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionTooltipWidget() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipStyle_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionTooltipWidget Function ApplyStyle **********************************
static FName NAME_UOrionTooltipWidget_ApplyStyle = FName(TEXT("ApplyStyle"));
void UOrionTooltipWidget::ApplyStyle()
{
	UFunction* Func = FindFunctionChecked(NAME_UOrionTooltipWidget_ApplyStyle);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionTooltipWidget, nullptr, "ApplyStyle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UOrionTooltipWidget Function ApplyStyle ************************************

// ********** Begin Class UOrionTooltipWidget ******************************************************
void UOrionTooltipWidget::StaticRegisterNativesUOrionTooltipWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionTooltipWidget;
UClass* UOrionTooltipWidget::GetPrivateStaticClass()
{
	using TClass = UOrionTooltipWidget;
	if (!Z_Registration_Info_UClass_UOrionTooltipWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionTooltipWidget"),
			Z_Registration_Info_UClass_UOrionTooltipWidget.InnerSingleton,
			StaticRegisterNativesUOrionTooltipWidget,
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
	return Z_Registration_Info_UClass_UOrionTooltipWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionTooltipWidget_NoRegister()
{
	return UOrionTooltipWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionTooltipWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Widgets/OrionTooltipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionTooltipStyle_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionTooltipSettingStyle_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionCascadedToolTipWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionTooltipStyle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionTooltipSettingStyle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionCascadedToolTipWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle, "ApplyStyle" }, // 1933205983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipStyle = { "OrionTooltipStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipWidget, OrionTooltipStyle), Z_Construct_UClass_UOrionTooltipStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionTooltipStyle_MetaData), NewProp_OrionTooltipStyle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipSettingStyle = { "OrionTooltipSettingStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipWidget, OrionTooltipSettingStyle), Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionTooltipSettingStyle_MetaData), NewProp_OrionTooltipSettingStyle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionCascadedToolTipWidget = { "OrionCascadedToolTipWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipWidget, OrionCascadedToolTipWidget), Z_Construct_UClass_UOrionTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionCascadedToolTipWidget_MetaData), NewProp_OrionCascadedToolTipWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionTooltipWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipSettingStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionCascadedToolTipWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionTooltipWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionTooltipWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister, (int32)VTABLE_OFFSET(UOrionTooltipWidget, IUIOrionCascadingTooltip), false },  // 750919711
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionTooltipWidget_Statics::ClassParams = {
	&UOrionTooltipWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionTooltipWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionTooltipWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionTooltipWidget()
{
	if (!Z_Registration_Info_UClass_UOrionTooltipWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipWidget.OuterSingleton, Z_Construct_UClass_UOrionTooltipWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionTooltipWidget.OuterSingleton;
}
UOrionTooltipWidget::UOrionTooltipWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionTooltipWidget);
UOrionTooltipWidget::~UOrionTooltipWidget() {}
// ********** End Class UOrionTooltipWidget ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipWidget, UOrionTooltipWidget::StaticClass, TEXT("UOrionTooltipWidget"), &Z_Registration_Info_UClass_UOrionTooltipWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipWidget), 3906813717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h__Script_OrionUI_831659521(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
