// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/OrionMasterCanvas.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionMasterCanvas() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas();
ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionMasterCanvas_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionMasterCanvas Function DisplayBackgroundIamge ***********************
struct Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics
{
	struct OrionMasterCanvas_eventDisplayBackgroundIamge_Parms
	{
		TSoftObjectPtr<UTexture2D> BackgroundTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMasterCanvas_eventDisplayBackgroundIamge_Parms, BackgroundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::NewProp_BackgroundTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMasterCanvas, nullptr, "DisplayBackgroundIamge", Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::OrionMasterCanvas_eventDisplayBackgroundIamge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::OrionMasterCanvas_eventDisplayBackgroundIamge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMasterCanvas::execDisplayBackgroundIamge)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_BackgroundTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisplayBackgroundIamge(Z_Param_BackgroundTexture);
	P_NATIVE_END;
}
// ********** End Class UOrionMasterCanvas Function DisplayBackgroundIamge *************************

// ********** Begin Class UOrionMasterCanvas Function HideBackgroundIamge **************************
struct Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMasterCanvas, nullptr, "HideBackgroundIamge", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMasterCanvas::execHideBackgroundIamge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideBackgroundIamge();
	P_NATIVE_END;
}
// ********** End Class UOrionMasterCanvas Function HideBackgroundIamge ****************************

// ********** Begin Class UOrionMasterCanvas Function OnBackgroundImageLoaded **********************
struct Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionMasterCanvas, nullptr, "OnBackgroundImageLoaded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionMasterCanvas::execOnBackgroundImageLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackgroundImageLoaded();
	P_NATIVE_END;
}
// ********** End Class UOrionMasterCanvas Function OnBackgroundImageLoaded ************************

// ********** Begin Class UOrionMasterCanvas *******************************************************
void UOrionMasterCanvas::StaticRegisterNativesUOrionMasterCanvas()
{
	UClass* Class = UOrionMasterCanvas::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisplayBackgroundIamge", &UOrionMasterCanvas::execDisplayBackgroundIamge },
		{ "HideBackgroundIamge", &UOrionMasterCanvas::execHideBackgroundIamge },
		{ "OnBackgroundImageLoaded", &UOrionMasterCanvas::execOnBackgroundImageLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionMasterCanvas;
UClass* UOrionMasterCanvas::GetPrivateStaticClass()
{
	using TClass = UOrionMasterCanvas;
	if (!Z_Registration_Info_UClass_UOrionMasterCanvas.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionMasterCanvas"),
			Z_Registration_Info_UClass_UOrionMasterCanvas.InnerSingleton,
			StaticRegisterNativesUOrionMasterCanvas,
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
	return Z_Registration_Info_UClass_UOrionMasterCanvas.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionMasterCanvas_NoRegister()
{
	return UOrionMasterCanvas::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionMasterCanvas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/OrionMasterCanvas.h" },
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterCanvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterCanvas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge, "DisplayBackgroundIamge" }, // 4032874508
		{ &Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge, "HideBackgroundIamge" }, // 2715871380
		{ &Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded, "OnBackgroundImageLoaded" }, // 253503709
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionMasterCanvas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_MasterCanvas = { "MasterCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMasterCanvas, MasterCanvas), Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterCanvas_MetaData), NewProp_MasterCanvas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMasterCanvas, BackgroundImage), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionMasterCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_MasterCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_BackgroundImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionMasterCanvas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionMasterCanvas_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIOrionMasterCanvas_NoRegister, (int32)VTABLE_OFFSET(UOrionMasterCanvas, IUIOrionMasterCanvas), false },  // 1949216598
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionMasterCanvas_Statics::ClassParams = {
	&UOrionMasterCanvas::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionMasterCanvas_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionMasterCanvas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionMasterCanvas()
{
	if (!Z_Registration_Info_UClass_UOrionMasterCanvas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionMasterCanvas.OuterSingleton, Z_Construct_UClass_UOrionMasterCanvas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionMasterCanvas.OuterSingleton;
}
UOrionMasterCanvas::UOrionMasterCanvas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionMasterCanvas);
UOrionMasterCanvas::~UOrionMasterCanvas() {}
// ********** End Class UOrionMasterCanvas *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionMasterCanvas, UOrionMasterCanvas::StaticClass, TEXT("UOrionMasterCanvas"), &Z_Registration_Info_UClass_UOrionMasterCanvas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionMasterCanvas), 488793576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h__Script_OrionUI_1930146392(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
