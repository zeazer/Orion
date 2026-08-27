// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionTooltipWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionTooltipWidget() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipStyle(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_IUIOrionCascadingTooltip(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOrionTooltipWidget Function ApplyStyle **********************************
static FName NAME_UOrionTooltipWidget_ApplyStyle = FName(TEXT("ApplyStyle"));
void UOrionTooltipWidget::ApplyStyle()
{
	UFunction* Func = FindFunctionChecked(NAME_UOrionTooltipWidget_ApplyStyle);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyStyle constinit property declarations ****************************
// ********** End Function ApplyStyle constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionTooltipWidget, nullptr, "ApplyStyle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UOrionTooltipWidget Function ApplyStyle ************************************

// ********** Begin Class UOrionTooltipWidget ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionTooltipWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class UOrionTooltipWidget constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionTooltipStyle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionTooltipSettingStyle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionCascadedToolTipWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOrionTooltipWidget constinit property declarations ************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle, "ApplyStyle" }, // 3be52579e84e67e063e5aff816e33291b8484450
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionTooltipWidget Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OrionTooltipStyle = { "OrionTooltipStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipWidget, OrionTooltipStyle), Z_Construct_UClass_UOrionTooltipStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionTooltipStyle_MetaData), NewProp_OrionTooltipStyle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OrionTooltipSettingStyle = { "OrionTooltipSettingStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipWidget, OrionTooltipSettingStyle), Z_Construct_UClass_UOrionTooltipSettingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionTooltipSettingStyle_MetaData), NewProp_OrionTooltipSettingStyle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OrionCascadedToolTipWidget = { "OrionCascadedToolTipWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipWidget, OrionCascadedToolTipWidget), Z_Construct_UClass_UOrionTooltipWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionCascadedToolTipWidget_MetaData), NewProp_OrionCascadedToolTipWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionTooltipStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionTooltipSettingStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionCascadedToolTipWidget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionTooltipWidget Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UCommonActivatableWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIOrionCascadingTooltip, (int32)VTABLE_OFFSET(UOrionTooltipWidget, IUIOrionCascadingTooltip), false },  // 20348d9af21507c25241a13ae326f1642f0ec2a8
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionTooltipWidget,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionTooltipWidget;
UClass* Z_Construct_UClass_UOrionTooltipWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionTooltipWidget;
		if (!Z_Registration_Info_UClass_UOrionTooltipWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionTooltipWidget"),
				Z_Registration_Info_UClass_UOrionTooltipWidget.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOrionTooltipWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOrionTooltipWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionTooltipWidget.OuterSingleton;
}
#undef UHT_STATICS
UOrionTooltipWidget::UOrionTooltipWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionTooltipWidget);
UOrionTooltipWidget::~UOrionTooltipWidget() {}
// ********** End Class UOrionTooltipWidget ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipWidget, TEXT("UOrionTooltipWidget"), &Z_Registration_Info_UClass_UOrionTooltipWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipWidget), 671634360U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h__Script_OrionUI_29ff4b40c32afa76e165659a791c493fb31cee9d{
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
