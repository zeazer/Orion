// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionMenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuStyle(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOrionMenuWidget Function OnDisplay **************************************
static FName NAME_UOrionMenuWidget_OnDisplay = FName(TEXT("OnDisplay"));
void UOrionMenuWidget::OnDisplay()
{
	UFunction* Func = FindFunctionChecked(NAME_UOrionMenuWidget_OnDisplay);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnDisplay_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionMenuWidget_OnDisplay_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDisplay constinit property declarations *****************************
// ********** End Function OnDisplay constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionMenuWidget, nullptr, "OnDisplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionMenuWidget_OnDisplay(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionMenuWidget::execOnDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisplay_Implementation();
	P_NATIVE_END;
}
// ********** End Class UOrionMenuWidget Function OnDisplay ****************************************

// ********** Begin Class UOrionMenuWidget Function OnDisplayComplete ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDisplayComplete constinit property declarations *********************
// ********** End Function OnDisplayComplete constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionMenuWidget, nullptr, "OnDisplayComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionMenuWidget::execOnDisplayComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisplayComplete();
	P_NATIVE_END;
}
// ********** End Class UOrionMenuWidget Function OnDisplayComplete ********************************

// ********** Begin Class UOrionMenuWidget Function OnHide *****************************************
static FName NAME_UOrionMenuWidget_OnHide = FName(TEXT("OnHide"));
void UOrionMenuWidget::OnHide()
{
	UFunction* Func = FindFunctionChecked(NAME_UOrionMenuWidget_OnHide);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnHide_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionMenuWidget_OnHide_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnHide constinit property declarations ********************************
// ********** End Function OnHide constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionMenuWidget, nullptr, "OnHide", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionMenuWidget_OnHide(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionMenuWidget::execOnHide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHide_Implementation();
	P_NATIVE_END;
}
// ********** End Class UOrionMenuWidget Function OnHide *******************************************

// ********** Begin Class UOrionMenuWidget Function OnHideComplete *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnHideComplete constinit property declarations ************************
// ********** End Function OnHideComplete constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionMenuWidget, nullptr, "OnHideComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionMenuWidget::execOnHideComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHideComplete();
	P_NATIVE_END;
}
// ********** End Class UOrionMenuWidget Function OnHideComplete ***********************************

// ********** Begin Class UOrionMenuWidget *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionMenuWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widgets/OrionMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionMenuId_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionMenuStyle_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOrionMenuWidget constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_OrionMenuId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionMenuStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOrionMenuWidget constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnDisplay"), .Pointer = &UOrionMenuWidget::execOnDisplay },
		{ .NameUTF8 = UTF8TEXT("OnDisplayComplete"), .Pointer = &UOrionMenuWidget::execOnDisplayComplete },
		{ .NameUTF8 = UTF8TEXT("OnHide"), .Pointer = &UOrionMenuWidget::execOnHide },
		{ .NameUTF8 = UTF8TEXT("OnHideComplete"), .Pointer = &UOrionMenuWidget::execOnHideComplete },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionMenuWidget_OnDisplay, "OnDisplay" }, // 68a6698f8a38c0722ec3ad0cd6db10c835fd47c0
		{ &Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete, "OnDisplayComplete" }, // e1a166021f900eedfa66cb2f07aa28997eef6e4c
		{ &Z_Construct_UFunction_UOrionMenuWidget_OnHide, "OnHide" }, // 0aa48f8c12356416fc790a7538650527f2dca848
		{ &Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete, "OnHideComplete" }, // 169ce82cfad47226f6e3b73b348dd74d34fb564d
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionMenuWidget Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OrionMenuId = { "OrionMenuId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMenuWidget, OrionMenuId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionMenuId_MetaData), NewProp_OrionMenuId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OrionMenuStyle = { "OrionMenuStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMenuWidget, OrionMenuStyle), Z_Construct_UClass_UOrionMenuStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionMenuStyle_MetaData), NewProp_OrionMenuStyle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionMenuId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionMenuStyle,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionMenuWidget Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UOrionUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionMenuWidget,
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
static void UOrionMenuWidget_StaticRegisterNativesUOrionMenuWidget()
{
	UClass* Class = UOrionMenuWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionMenuWidget;
UClass* Z_Construct_UClass_UOrionMenuWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionMenuWidget;
		if (!Z_Registration_Info_UClass_UOrionMenuWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionMenuWidget"),
				Z_Registration_Info_UClass_UOrionMenuWidget.InnerSingleton,
				UOrionMenuWidget_StaticRegisterNativesUOrionMenuWidget,
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
		return Z_Registration_Info_UClass_UOrionMenuWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOrionMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionMenuWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionMenuWidget.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionMenuWidget);
UOrionMenuWidget::~UOrionMenuWidget() {}
// ********** End Class UOrionMenuWidget ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionMenuWidget, TEXT("UOrionMenuWidget"), &Z_Registration_Info_UClass_UOrionMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionMenuWidget), 218906191U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h__Script_OrionUI_330fab659eeb3b3b20129a8d5f7ca130ef80f2e2{
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
