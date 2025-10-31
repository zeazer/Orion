// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionAnimUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionAnimUserWidget() {}

// ********** Begin Cross Module References ********************************************************
ORIONUI_API UClass* Z_Construct_UClass_UOrionAnimUserWidget();
ORIONUI_API UClass* Z_Construct_UClass_UOrionAnimUserWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionAnimUserWidget *****************************************************
void UOrionAnimUserWidget::StaticRegisterNativesUOrionAnimUserWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionAnimUserWidget;
UClass* UOrionAnimUserWidget::GetPrivateStaticClass()
{
	using TClass = UOrionAnimUserWidget;
	if (!Z_Registration_Info_UClass_UOrionAnimUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionAnimUserWidget"),
			Z_Registration_Info_UClass_UOrionAnimUserWidget.InnerSingleton,
			StaticRegisterNativesUOrionAnimUserWidget,
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
	return Z_Registration_Info_UClass_UOrionAnimUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionAnimUserWidget_NoRegister()
{
	return UOrionAnimUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionAnimUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widgets/OrionAnimUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionAnimUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimateIn_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionAnimUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimateOut_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionAnimUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimateIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimateOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionAnimUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateIn = { "AnimateIn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionAnimUserWidget, AnimateIn), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimateIn_MetaData), NewProp_AnimateIn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateOut = { "AnimateOut", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionAnimUserWidget, AnimateOut), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimateOut_MetaData), NewProp_AnimateOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionAnimUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionAnimUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionAnimUserWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister, (int32)VTABLE_OFFSET(UOrionAnimUserWidget, IUIOrionAnimUserWidget), false },  // 3982258051
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionAnimUserWidget_Statics::ClassParams = {
	&UOrionAnimUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionAnimUserWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionAnimUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionAnimUserWidget()
{
	if (!Z_Registration_Info_UClass_UOrionAnimUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionAnimUserWidget.OuterSingleton, Z_Construct_UClass_UOrionAnimUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionAnimUserWidget.OuterSingleton;
}
UOrionAnimUserWidget::UOrionAnimUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionAnimUserWidget);
UOrionAnimUserWidget::~UOrionAnimUserWidget() {}
// ********** End Class UOrionAnimUserWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionAnimUserWidget, UOrionAnimUserWidget::StaticClass, TEXT("UOrionAnimUserWidget"), &Z_Registration_Info_UClass_UOrionAnimUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionAnimUserWidget), 495197148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h__Script_OrionUI_3270143937(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
