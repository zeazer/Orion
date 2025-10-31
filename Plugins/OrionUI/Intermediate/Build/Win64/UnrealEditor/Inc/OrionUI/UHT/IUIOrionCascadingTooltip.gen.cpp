// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Interfaces/IUIOrionCascadingTooltip.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIUIOrionCascadingTooltip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionCascadingTooltip();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UUIOrionCascadingTooltip *********************************************
void UUIOrionCascadingTooltip::StaticRegisterNativesUUIOrionCascadingTooltip()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIOrionCascadingTooltip;
UClass* UUIOrionCascadingTooltip::GetPrivateStaticClass()
{
	using TClass = UUIOrionCascadingTooltip;
	if (!Z_Registration_Info_UClass_UUIOrionCascadingTooltip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UIOrionCascadingTooltip"),
			Z_Registration_Info_UClass_UUIOrionCascadingTooltip.InnerSingleton,
			StaticRegisterNativesUUIOrionCascadingTooltip,
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
	return Z_Registration_Info_UClass_UUIOrionCascadingTooltip.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister()
{
	return UUIOrionCascadingTooltip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIOrionCascadingTooltip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionCascadingTooltip.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionCascadingTooltip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIOrionCascadingTooltip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionCascadingTooltip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIOrionCascadingTooltip_Statics::ClassParams = {
	&UUIOrionCascadingTooltip::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionCascadingTooltip_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIOrionCascadingTooltip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIOrionCascadingTooltip()
{
	if (!Z_Registration_Info_UClass_UUIOrionCascadingTooltip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionCascadingTooltip.OuterSingleton, Z_Construct_UClass_UUIOrionCascadingTooltip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIOrionCascadingTooltip.OuterSingleton;
}
UUIOrionCascadingTooltip::UUIOrionCascadingTooltip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIOrionCascadingTooltip);
// ********** End Interface UUIOrionCascadingTooltip ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionCascadingTooltip, UUIOrionCascadingTooltip::StaticClass, TEXT("UUIOrionCascadingTooltip"), &Z_Registration_Info_UClass_UUIOrionCascadingTooltip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionCascadingTooltip), 750919711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h__Script_OrionUI_2664967929(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
