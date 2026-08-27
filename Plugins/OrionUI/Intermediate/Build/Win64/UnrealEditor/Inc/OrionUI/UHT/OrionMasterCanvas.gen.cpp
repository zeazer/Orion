// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/OrionMasterCanvas.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionMasterCanvas() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UBorder(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionActivatableWidgetStack(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_IUIOrionMasterCanvas(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOrionMasterCanvas Function DisplayBackgroundIamge ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics
struct UHT_STATICS
{
	struct OrionMasterCanvas_eventDisplayBackgroundIamge_Parms
	{
		TSoftObjectPtr<UTexture2D> BackgroundTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisplayBackgroundIamge constinit property declarations ****************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisplayBackgroundIamge constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisplayBackgroundIamge Property Definitions ***************************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMasterCanvas_eventDisplayBackgroundIamge_Parms, BackgroundTexture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackgroundTexture,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DisplayBackgroundIamge Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionMasterCanvas, nullptr, "DisplayBackgroundIamge", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OrionMasterCanvas_eventDisplayBackgroundIamge_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OrionMasterCanvas_eventDisplayBackgroundIamge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HideBackgroundIamge constinit property declarations *******************
// ********** End Function HideBackgroundIamge constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionMasterCanvas, nullptr, "HideBackgroundIamge", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionMasterCanvas::execHideBackgroundIamge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideBackgroundIamge();
	P_NATIVE_END;
}
// ********** End Class UOrionMasterCanvas Function HideBackgroundIamge ****************************

// ********** Begin Class UOrionMasterCanvas Function OnBackgroundImageLoaded **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnBackgroundImageLoaded constinit property declarations ***************
// ********** End Function OnBackgroundImageLoaded constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionMasterCanvas, nullptr, "OnBackgroundImageLoaded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionMasterCanvas::execOnBackgroundImageLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackgroundImageLoaded();
	P_NATIVE_END;
}
// ********** End Class UOrionMasterCanvas Function OnBackgroundImageLoaded ************************

// ********** Begin Class UOrionMasterCanvas *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionMasterCanvas_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class UOrionMasterCanvas constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterCanvas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOrionMasterCanvas constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisplayBackgroundIamge"), .Pointer = &UOrionMasterCanvas::execDisplayBackgroundIamge },
		{ .NameUTF8 = UTF8TEXT("HideBackgroundIamge"), .Pointer = &UOrionMasterCanvas::execHideBackgroundIamge },
		{ .NameUTF8 = UTF8TEXT("OnBackgroundImageLoaded"), .Pointer = &UOrionMasterCanvas::execOnBackgroundImageLoaded },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge, "DisplayBackgroundIamge" }, // e386552f741ff0c14356d5ee1e631e750bec4ef4
		{ &Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge, "HideBackgroundIamge" }, // c03be124c7b6b8713d4048b4244562d2eab70e19
		{ &Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded, "OnBackgroundImageLoaded" }, // 7e39faec0b2af4096c1befc0a0f370a08663ed14
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionMasterCanvas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionMasterCanvas Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MasterCanvas = { "MasterCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMasterCanvas, MasterCanvas), Z_Construct_UClass_UOrionActivatableWidgetStack, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterCanvas_MetaData), NewProp_MasterCanvas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMasterCanvas, BackgroundImage), Z_Construct_UClass_UBorder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackgroundImage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionMasterCanvas Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIOrionMasterCanvas, (int32)VTABLE_OFFSET(UOrionMasterCanvas, IUIOrionMasterCanvas), false },  // 36df577d57ea8e81becae4d9c3ccb98c9899a493
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionMasterCanvas,
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
static void UOrionMasterCanvas_StaticRegisterNativesUOrionMasterCanvas()
{
	UClass* Class = UOrionMasterCanvas::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionMasterCanvas;
UClass* Z_Construct_UClass_UOrionMasterCanvas(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionMasterCanvas;
		if (!Z_Registration_Info_UClass_UOrionMasterCanvas.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionMasterCanvas"),
				Z_Registration_Info_UClass_UOrionMasterCanvas.InnerSingleton,
				UOrionMasterCanvas_StaticRegisterNativesUOrionMasterCanvas,
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
		return Z_Registration_Info_UClass_UOrionMasterCanvas.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOrionMasterCanvas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionMasterCanvas.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionMasterCanvas.OuterSingleton;
}
#undef UHT_STATICS
UOrionMasterCanvas::UOrionMasterCanvas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionMasterCanvas);
UOrionMasterCanvas::~UOrionMasterCanvas() {}
// ********** End Class UOrionMasterCanvas *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionMasterCanvas, TEXT("UOrionMasterCanvas"), &Z_Registration_Info_UClass_UOrionMasterCanvas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionMasterCanvas), 4224887783U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h__Script_OrionUI_dd0055cdc251bf8c4682c45c185c3ae62ae2dab0{
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
