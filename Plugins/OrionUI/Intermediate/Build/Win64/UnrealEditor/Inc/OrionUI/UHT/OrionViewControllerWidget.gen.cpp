// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionViewControllerWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionViewControllerWidget() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDataTable(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UCanvasPanel(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UWidget(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EViewDataMode(ETypeConstructPhase);
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EViewType(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionViewControllerWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionViewControllerWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UViewData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EViewDataMode *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OrionUI_EViewDataMode_Statics
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewDataMode>()
{
	return Z_Construct_UEnum_OrionUI_EViewDataMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
	nullptr,
	"EViewDataMode",
	"EViewDataMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EViewDataMode;
UEnum* Z_Construct_UEnum_OrionUI_EViewDataMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EViewDataMode.OuterSingleton)
		{
			ZRIE_EViewDataMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EViewDataMode, (UObject*)Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase::Outer), TEXT("EViewDataMode"));
		}
		return ZRIE_EViewDataMode.OuterSingleton;
	}
	if (!ZRIE_EViewDataMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EViewDataMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EViewDataMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EViewDataMode ***************************************************************

// ********** Begin Class UOrionViewControllerWidget Function ForceUpdate **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceUpdate constinit property declarations ***************************
// ********** End Function ForceUpdate constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionViewControllerWidget, nullptr, "ForceUpdate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionViewControllerWidget::execForceUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceUpdate();
	P_NATIVE_END;
}
// ********** End Class UOrionViewControllerWidget Function ForceUpdate ****************************

// ********** Begin Class UOrionViewControllerWidget Function GetActiveView ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics
struct UHT_STATICS
{
	struct OrionViewControllerWidget_eventGetActiveView_Parms
	{
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveView constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveView constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveView Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionViewControllerWidget_eventGetActiveView_Parms, ReturnValue), Z_Construct_UClass_UWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveView Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionViewControllerWidget, nullptr, "GetActiveView", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OrionViewControllerWidget_eventGetActiveView_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OrionViewControllerWidget_eventGetActiveView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionViewControllerWidget::execGetActiveView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetActiveView();
	P_NATIVE_END;
}
// ********** End Class UOrionViewControllerWidget Function GetActiveView **************************

// ********** Begin Class UOrionViewControllerWidget Function OnLoadComplete ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnLoadComplete constinit property declarations ************************
// ********** End Function OnLoadComplete constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionViewControllerWidget, nullptr, "OnLoadComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionViewControllerWidget::execOnLoadComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadComplete();
	P_NATIVE_END;
}
// ********** End Class UOrionViewControllerWidget Function OnLoadComplete *************************

// ********** Begin Class UOrionViewControllerWidget ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionViewControllerWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class UOrionViewControllerWidget constinit property declarations ***************
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
// ********** End Class UOrionViewControllerWidget constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ForceUpdate"), .Pointer = &UOrionViewControllerWidget::execForceUpdate },
		{ .NameUTF8 = UTF8TEXT("GetActiveView"), .Pointer = &UOrionViewControllerWidget::execGetActiveView },
		{ .NameUTF8 = UTF8TEXT("OnLoadComplete"), .Pointer = &UOrionViewControllerWidget::execOnLoadComplete },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate, "ForceUpdate" }, // e22ae66845ee44989b78c77a3d2093a99090e26e
		{ &Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView, "GetActiveView" }, // afbfeab4db07b4b4339644b3b58ca225f4fc8cd9
		{ &Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete, "OnLoadComplete" }, // baf4b3c1983255575cb5737b64fcd131aef74d15
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionViewControllerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionViewControllerWidget Property Definitions **************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_UIControllerClass = { "UIControllerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, UIControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionUIControllerBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIControllerClass_MetaData), NewProp_UIControllerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UIControllerInstance = { "UIControllerInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, UIControllerInstance), Z_Construct_UClass_UOrionUIControllerBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIControllerInstance_MetaData), NewProp_UIControllerInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, Canvas), Z_Construct_UClass_UCanvasPanel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Canvas_MetaData), NewProp_Canvas_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams UHT_STATICS::NewProp_PlatformViewClasses_ValueProp = { "PlatformViewClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonUserWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PlatformViewClasses_Key_KeyProp = { "PlatformViewClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionUI_EViewType, METADATA_PARAMS(0, nullptr) }; // 1c24dcf3f6b76579501f4976915623474d0f96a8
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_PlatformViewClasses = { "PlatformViewClasses", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, PlatformViewClasses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformViewClasses_MetaData), NewProp_PlatformViewClasses_MetaData) }; // 1c24dcf3f6b76579501f4976915623474d0f96a8
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ViewInstance = { "ViewInstance", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewInstance), Z_Construct_UClass_UCommonUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewInstance_MetaData), NewProp_ViewInstance_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams UHT_STATICS::NewProp_DebugViewClass = { "DebugViewClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftClass, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, DebugViewClass), Z_Construct_UClass_UCommonUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugViewClass_MetaData), NewProp_DebugViewClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ViewDataMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ViewDataMode = { "ViewDataMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewDataMode), Z_Construct_UEnum_OrionUI_EViewDataMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDataMode_MetaData), NewProp_ViewDataMode_MetaData) }; // ab6b597bddf5298480bbbeb7f6ba083249e6df5d
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ViewData = { "ViewData", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewData), Z_Construct_UClass_UViewData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewData_MetaData), NewProp_ViewData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ViewDataTable = { "ViewDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewDataTable), Z_Construct_UClass_UDataTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDataTable_MetaData), NewProp_ViewDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UIControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UIControllerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlatformViewClasses_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlatformViewClasses_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlatformViewClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugViewClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewDataMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewDataMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewDataTable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionViewControllerWidget Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOrionUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionViewControllerWidget,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOrionViewControllerWidget_StaticRegisterNativesUOrionViewControllerWidget()
{
	UClass* Class = UOrionViewControllerWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionViewControllerWidget;
UClass* Z_Construct_UClass_UOrionViewControllerWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionViewControllerWidget;
		if (!Z_Registration_Info_UClass_UOrionViewControllerWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionViewControllerWidget"),
				Z_Registration_Info_UClass_UOrionViewControllerWidget.InnerSingleton,
				UOrionViewControllerWidget_StaticRegisterNativesUOrionViewControllerWidget,
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
		return Z_Registration_Info_UClass_UOrionViewControllerWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOrionViewControllerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionViewControllerWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionViewControllerWidget.OuterSingleton;
}
#undef UHT_STATICS
UOrionViewControllerWidget::UOrionViewControllerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionViewControllerWidget);
UOrionViewControllerWidget::~UOrionViewControllerWidget() {}
// ********** End Class UOrionViewControllerWidget *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OrionUI_EViewDataMode, TEXT("EViewDataMode"), &ZRIE_EViewDataMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2875939195U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionViewControllerWidget, TEXT("UOrionViewControllerWidget"), &Z_Registration_Info_UClass_UOrionViewControllerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionViewControllerWidget), 3913402171U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h__Script_OrionUI_a552e986b39505a3572d38b1f737ae9460e2ed2f{
	TEXT("/Script/OrionUI"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
