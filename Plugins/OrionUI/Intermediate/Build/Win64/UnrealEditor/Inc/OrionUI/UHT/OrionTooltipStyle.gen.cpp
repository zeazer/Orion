// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Structs/OrionTooltipStyle.h"
#include "Widgets/Layout/Anchors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionTooltipStyle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipStyle();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipStyle_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget_NoRegister();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionTooltipStyle *******************************************************
void UOrionTooltipStyle::StaticRegisterNativesUOrionTooltipStyle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionTooltipStyle;
UClass* UOrionTooltipStyle::GetPrivateStaticClass()
{
	using TClass = UOrionTooltipStyle;
	if (!Z_Registration_Info_UClass_UOrionTooltipStyle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionTooltipStyle"),
			Z_Registration_Info_UClass_UOrionTooltipStyle.InnerSingleton,
			StaticRegisterNativesUOrionTooltipStyle,
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
	return Z_Registration_Info_UClass_UOrionTooltipStyle.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionTooltipStyle_NoRegister()
{
	return UOrionTooltipStyle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionTooltipStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Structs/OrionTooltipStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipTitleText_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipStyle.h" },
		{ "MultiLine", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipDescriptionText_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipStyle.h" },
		{ "MultiLine", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipCascadeID_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipCascadeAnchors_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipBackgroundImage_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipIconImage_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTipTitleText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TooltipDescriptionText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TooltipCascadeID_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TooltipCascadeID_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TooltipCascadeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TooltipCascadeAnchors_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TooltipCascadeAnchors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TooltipCascadeAnchors;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TooltipBackgroundImage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TooltipIconImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_ToolTipTitleText = { "ToolTipTitleText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, ToolTipTitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTipTitleText_MetaData), NewProp_ToolTipTitleText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipDescriptionText = { "TooltipDescriptionText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipDescriptionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipDescriptionText_MetaData), NewProp_TooltipDescriptionText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeID_ValueProp = { "TooltipCascadeID", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionTooltipWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeID_Key_KeyProp = { "TooltipCascadeID_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeID = { "TooltipCascadeID", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipCascadeID), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipCascadeID_MetaData), NewProp_TooltipCascadeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeAnchors_ValueProp = { "TooltipCascadeAnchors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(0, nullptr) }; // 110128851
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeAnchors_Key_KeyProp = { "TooltipCascadeAnchors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeAnchors = { "TooltipCascadeAnchors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipCascadeAnchors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipCascadeAnchors_MetaData), NewProp_TooltipCascadeAnchors_MetaData) }; // 110128851
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipBackgroundImage = { "TooltipBackgroundImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipBackgroundImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipBackgroundImage_MetaData), NewProp_TooltipBackgroundImage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipIconImage = { "TooltipIconImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipIconImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipIconImage_MetaData), NewProp_TooltipIconImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionTooltipStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_ToolTipTitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipDescriptionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeID_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeID_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeAnchors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeAnchors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipCascadeAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipBackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipStyle_Statics::NewProp_TooltipIconImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionTooltipStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionTooltipStyle_Statics::ClassParams = {
	&UOrionTooltipStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionTooltipStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipStyle_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionTooltipStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionTooltipStyle()
{
	if (!Z_Registration_Info_UClass_UOrionTooltipStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipStyle.OuterSingleton, Z_Construct_UClass_UOrionTooltipStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionTooltipStyle.OuterSingleton;
}
UOrionTooltipStyle::UOrionTooltipStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionTooltipStyle);
UOrionTooltipStyle::~UOrionTooltipStyle() {}
// ********** End Class UOrionTooltipStyle *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipStyle_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipStyle, UOrionTooltipStyle::StaticClass, TEXT("UOrionTooltipStyle"), &Z_Registration_Info_UClass_UOrionTooltipStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipStyle), 281547139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipStyle_h__Script_OrionUI_2403662711(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipStyle_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipStyle_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
