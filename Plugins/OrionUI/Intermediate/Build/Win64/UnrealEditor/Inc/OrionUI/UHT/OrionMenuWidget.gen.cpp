// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionMenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuStyle_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget();
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

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
struct Z_Construct_UFunction_UOrionMenuWidget_OnDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMenuWidget_OnDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMenuWidget, nullptr, "OnDisplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMenuWidget_OnDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMenuWidget_OnDisplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionMenuWidget_OnDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMenuWidget_OnDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMenuWidget::execOnDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisplay_Implementation();
	P_NATIVE_END;
}
// ********** End Class UOrionMenuWidget Function OnDisplay ****************************************

// ********** Begin Class UOrionMenuWidget Function OnDisplayComplete ******************************
struct Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMenuWidget, nullptr, "OnDisplayComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UOrionMenuWidget_OnHide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMenuWidget_OnHide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMenuWidget, nullptr, "OnHide", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMenuWidget_OnHide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMenuWidget_OnHide_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionMenuWidget_OnHide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMenuWidget_OnHide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMenuWidget::execOnHide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHide_Implementation();
	P_NATIVE_END;
}
// ********** End Class UOrionMenuWidget Function OnHide *******************************************

// ********** Begin Class UOrionMenuWidget Function OnHideComplete *********************************
struct Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMenuWidget, nullptr, "OnHideComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMenuWidget::execOnHideComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHideComplete();
	P_NATIVE_END;
}
// ********** End Class UOrionMenuWidget Function OnHideComplete ***********************************

// ********** Begin Class UOrionMenuWidget *********************************************************
void UOrionMenuWidget::StaticRegisterNativesUOrionMenuWidget()
{
	UClass* Class = UOrionMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDisplay", &UOrionMenuWidget::execOnDisplay },
		{ "OnDisplayComplete", &UOrionMenuWidget::execOnDisplayComplete },
		{ "OnHide", &UOrionMenuWidget::execOnHide },
		{ "OnHideComplete", &UOrionMenuWidget::execOnHideComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionMenuWidget;
UClass* UOrionMenuWidget::GetPrivateStaticClass()
{
	using TClass = UOrionMenuWidget;
	if (!Z_Registration_Info_UClass_UOrionMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionMenuWidget"),
			Z_Registration_Info_UClass_UOrionMenuWidget.InnerSingleton,
			StaticRegisterNativesUOrionMenuWidget,
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
	return Z_Registration_Info_UClass_UOrionMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionMenuWidget_NoRegister()
{
	return UOrionMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
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
	static const UECodeGen_Private::FNamePropertyParams NewProp_OrionMenuId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionMenuStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionMenuWidget_OnDisplay, "OnDisplay" }, // 672728678
		{ &Z_Construct_UFunction_UOrionMenuWidget_OnDisplayComplete, "OnDisplayComplete" }, // 2940240469
		{ &Z_Construct_UFunction_UOrionMenuWidget_OnHide, "OnHide" }, // 3997972575
		{ &Z_Construct_UFunction_UOrionMenuWidget_OnHideComplete, "OnHideComplete" }, // 1841199776
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOrionMenuWidget_Statics::NewProp_OrionMenuId = { "OrionMenuId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMenuWidget, OrionMenuId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionMenuId_MetaData), NewProp_OrionMenuId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionMenuWidget_Statics::NewProp_OrionMenuStyle = { "OrionMenuStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMenuWidget, OrionMenuStyle), Z_Construct_UClass_UOrionMenuStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionMenuStyle_MetaData), NewProp_OrionMenuStyle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuWidget_Statics::NewProp_OrionMenuId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuWidget_Statics::NewProp_OrionMenuStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionMenuWidget_Statics::ClassParams = {
	&UOrionMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionMenuWidget()
{
	if (!Z_Registration_Info_UClass_UOrionMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionMenuWidget.OuterSingleton, Z_Construct_UClass_UOrionMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionMenuWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionMenuWidget);
UOrionMenuWidget::~UOrionMenuWidget() {}
// ********** End Class UOrionMenuWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionMenuWidget, UOrionMenuWidget::StaticClass, TEXT("UOrionMenuWidget"), &Z_Registration_Info_UClass_UOrionMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionMenuWidget), 2340603932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h__Script_OrionUI_2696931827(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
