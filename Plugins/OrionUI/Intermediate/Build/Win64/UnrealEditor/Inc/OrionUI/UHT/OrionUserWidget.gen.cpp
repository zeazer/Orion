// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionUserWidget() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionUserWidget *********************************************************
void UOrionUserWidget::StaticRegisterNativesUOrionUserWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionUserWidget;
UClass* UOrionUserWidget::GetPrivateStaticClass()
{
	using TClass = UOrionUserWidget;
	if (!Z_Registration_Info_UClass_UOrionUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionUserWidget"),
			Z_Registration_Info_UClass_UOrionUserWidget.InnerSingleton,
			StaticRegisterNativesUOrionUserWidget,
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
	return Z_Registration_Info_UClass_UOrionUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionUserWidget_NoRegister()
{
	return UOrionUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/OrionUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionToolTipWidgetClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionToolTipWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionTooltipSettingStyle_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OrionToolTipWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionToolTipWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionTooltipSettingStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidgetClass = { "OrionToolTipWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUserWidget, OrionToolTipWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionToolTipWidgetClass_MetaData), NewProp_OrionToolTipWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidget = { "OrionToolTipWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUserWidget, OrionToolTipWidget), Z_Construct_UClass_UOrionTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionToolTipWidget_MetaData), NewProp_OrionToolTipWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionTooltipSettingStyle = { "OrionTooltipSettingStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUserWidget, OrionTooltipSettingStyle), Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionTooltipSettingStyle_MetaData), NewProp_OrionTooltipSettingStyle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionTooltipSettingStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionUserWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister, (int32)VTABLE_OFFSET(UOrionUserWidget, IUIOrionCascadingTooltip), false },  // 750919711
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionUserWidget_Statics::ClassParams = {
	&UOrionUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionUserWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionUserWidget()
{
	if (!Z_Registration_Info_UClass_UOrionUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionUserWidget.OuterSingleton, Z_Construct_UClass_UOrionUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionUserWidget.OuterSingleton;
}
UOrionUserWidget::UOrionUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionUserWidget);
UOrionUserWidget::~UOrionUserWidget() {}
// ********** End Class UOrionUserWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionUserWidget, UOrionUserWidget::StaticClass, TEXT("UOrionUserWidget"), &Z_Registration_Info_UClass_UOrionUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionUserWidget), 1406020553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h__Script_OrionUI_1130735202(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
