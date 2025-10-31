// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Structs/OrionCascadeStyle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionCascadeStyle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadeStyle();
ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadeStyle_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionCascadeStyle *******************************************************
void UOrionCascadeStyle::StaticRegisterNativesUOrionCascadeStyle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionCascadeStyle;
UClass* UOrionCascadeStyle::GetPrivateStaticClass()
{
	using TClass = UOrionCascadeStyle;
	if (!Z_Registration_Info_UClass_UOrionCascadeStyle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionCascadeStyle"),
			Z_Registration_Info_UClass_UOrionCascadeStyle.InnerSingleton,
			StaticRegisterNativesUOrionCascadeStyle,
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
	return Z_Registration_Info_UClass_UOrionCascadeStyle.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionCascadeStyle_NoRegister()
{
	return UOrionCascadeStyle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionCascadeStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Structs/OrionCascadeStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionCascadeStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeFont_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionCascadeStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CascadeFont;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionCascadeStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOrionCascadeStyle_Statics::NewProp_CascadeFont = { "CascadeFont", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionCascadeStyle, CascadeFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeFont_MetaData), NewProp_CascadeFont_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionCascadeStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionCascadeStyle_Statics::NewProp_CascadeFont,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadeStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionCascadeStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadeStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionCascadeStyle_Statics::ClassParams = {
	&UOrionCascadeStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionCascadeStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadeStyle_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadeStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionCascadeStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionCascadeStyle()
{
	if (!Z_Registration_Info_UClass_UOrionCascadeStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionCascadeStyle.OuterSingleton, Z_Construct_UClass_UOrionCascadeStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionCascadeStyle.OuterSingleton;
}
UOrionCascadeStyle::UOrionCascadeStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionCascadeStyle);
UOrionCascadeStyle::~UOrionCascadeStyle() {}
// ********** End Class UOrionCascadeStyle *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionCascadeStyle_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionCascadeStyle, UOrionCascadeStyle::StaticClass, TEXT("UOrionCascadeStyle"), &Z_Registration_Info_UClass_UOrionCascadeStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionCascadeStyle), 4938175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionCascadeStyle_h__Script_OrionUI_829060264(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionCascadeStyle_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionCascadeStyle_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
