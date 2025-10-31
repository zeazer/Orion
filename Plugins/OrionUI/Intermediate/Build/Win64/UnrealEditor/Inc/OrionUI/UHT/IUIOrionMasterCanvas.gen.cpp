// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Interfaces/IUIOrionMasterCanvas.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIUIOrionMasterCanvas() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionMasterCanvas();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionMasterCanvas_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UUIOrionMasterCanvas *************************************************
void UUIOrionMasterCanvas::StaticRegisterNativesUUIOrionMasterCanvas()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIOrionMasterCanvas;
UClass* UUIOrionMasterCanvas::GetPrivateStaticClass()
{
	using TClass = UUIOrionMasterCanvas;
	if (!Z_Registration_Info_UClass_UUIOrionMasterCanvas.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UIOrionMasterCanvas"),
			Z_Registration_Info_UClass_UUIOrionMasterCanvas.InnerSingleton,
			StaticRegisterNativesUUIOrionMasterCanvas,
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
	return Z_Registration_Info_UClass_UUIOrionMasterCanvas.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIOrionMasterCanvas_NoRegister()
{
	return UUIOrionMasterCanvas::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIOrionMasterCanvas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionMasterCanvas.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionMasterCanvas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIOrionMasterCanvas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionMasterCanvas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIOrionMasterCanvas_Statics::ClassParams = {
	&UUIOrionMasterCanvas::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionMasterCanvas_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIOrionMasterCanvas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIOrionMasterCanvas()
{
	if (!Z_Registration_Info_UClass_UUIOrionMasterCanvas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionMasterCanvas.OuterSingleton, Z_Construct_UClass_UUIOrionMasterCanvas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIOrionMasterCanvas.OuterSingleton;
}
UUIOrionMasterCanvas::UUIOrionMasterCanvas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIOrionMasterCanvas);
// ********** End Interface UUIOrionMasterCanvas ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionMasterCanvas_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionMasterCanvas, UUIOrionMasterCanvas::StaticClass, TEXT("UUIOrionMasterCanvas"), &Z_Registration_Info_UClass_UUIOrionMasterCanvas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionMasterCanvas), 1949216598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionMasterCanvas_h__Script_OrionUI_1327094527(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionMasterCanvas_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionMasterCanvas_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
