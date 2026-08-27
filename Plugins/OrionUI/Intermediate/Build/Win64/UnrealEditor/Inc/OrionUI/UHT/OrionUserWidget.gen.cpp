// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionUserWidget() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_IUIOrionCascadingTooltip(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOrionUserWidget *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionUserWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class UOrionUserWidget constinit property declarations *************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_OrionToolTipWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionToolTipWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionTooltipSettingStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOrionUserWidget constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionUserWidget Property Definitions ************************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_OrionToolTipWidgetClass = { "OrionToolTipWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUserWidget, OrionToolTipWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionTooltipWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionToolTipWidgetClass_MetaData), NewProp_OrionToolTipWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OrionToolTipWidget = { "OrionToolTipWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUserWidget, OrionToolTipWidget), Z_Construct_UClass_UOrionTooltipWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionToolTipWidget_MetaData), NewProp_OrionToolTipWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OrionTooltipSettingStyle = { "OrionTooltipSettingStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUserWidget, OrionTooltipSettingStyle), Z_Construct_UClass_UOrionTooltipSettingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionTooltipSettingStyle_MetaData), NewProp_OrionTooltipSettingStyle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionToolTipWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionToolTipWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionTooltipSettingStyle,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionUserWidget Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UCommonActivatableWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIOrionCascadingTooltip, (int32)VTABLE_OFFSET(UOrionUserWidget, IUIOrionCascadingTooltip), false },  // 20348d9af21507c25241a13ae326f1642f0ec2a8
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionUserWidget,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionUserWidget;
UClass* Z_Construct_UClass_UOrionUserWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionUserWidget;
		if (!Z_Registration_Info_UClass_UOrionUserWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionUserWidget"),
				Z_Registration_Info_UClass_UOrionUserWidget.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
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
	if (!Z_Registration_Info_UClass_UOrionUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionUserWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionUserWidget.OuterSingleton;
}
#undef UHT_STATICS
UOrionUserWidget::UOrionUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionUserWidget);
UOrionUserWidget::~UOrionUserWidget() {}
// ********** End Class UOrionUserWidget ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionUserWidget, TEXT("UOrionUserWidget"), &Z_Registration_Info_UClass_UOrionUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionUserWidget), 2804620768U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h__Script_OrionUI_c8a2f7ef86175cf959de98b0986367d50098d608{
	TEXT("/Script/OrionUI"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
