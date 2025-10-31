// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Widgets/OrionCascadingTooltipSystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionCascadingTooltipSystem() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem();
ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionCascadingTooltipSystem *********************************************
void UOrionCascadingTooltipSystem::StaticRegisterNativesUOrionCascadingTooltipSystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionCascadingTooltipSystem;
UClass* UOrionCascadingTooltipSystem::GetPrivateStaticClass()
{
	using TClass = UOrionCascadingTooltipSystem;
	if (!Z_Registration_Info_UClass_UOrionCascadingTooltipSystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionCascadingTooltipSystem"),
			Z_Registration_Info_UClass_UOrionCascadingTooltipSystem.InnerSingleton,
			StaticRegisterNativesUOrionCascadingTooltipSystem,
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
	return Z_Registration_Info_UClass_UOrionCascadingTooltipSystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister()
{
	return UOrionCascadingTooltipSystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/OrionCascadingTooltipSystem.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionCascadingTooltipSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipCanvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionCascadingTooltipSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TooltipCanvas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionCascadingTooltipSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::NewProp_TooltipCanvas = { "TooltipCanvas", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionCascadingTooltipSystem, TooltipCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipCanvas_MetaData), NewProp_TooltipCanvas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::NewProp_TooltipCanvas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::ClassParams = {
	&UOrionCascadingTooltipSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem()
{
	if (!Z_Registration_Info_UClass_UOrionCascadingTooltipSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionCascadingTooltipSystem.OuterSingleton, Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionCascadingTooltipSystem.OuterSingleton;
}
UOrionCascadingTooltipSystem::UOrionCascadingTooltipSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionCascadingTooltipSystem);
UOrionCascadingTooltipSystem::~UOrionCascadingTooltipSystem() {}
// ********** End Class UOrionCascadingTooltipSystem ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionCascadingTooltipSystem_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionCascadingTooltipSystem, UOrionCascadingTooltipSystem::StaticClass, TEXT("UOrionCascadingTooltipSystem"), &Z_Registration_Info_UClass_UOrionCascadingTooltipSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionCascadingTooltipSystem), 3175728341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionCascadingTooltipSystem_h__Script_OrionUI_3542195371(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionCascadingTooltipSystem_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionCascadingTooltipSystem_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
