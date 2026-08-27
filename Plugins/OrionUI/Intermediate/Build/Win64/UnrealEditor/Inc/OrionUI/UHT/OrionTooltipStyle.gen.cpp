// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Structs/OrionTooltipStyle.h"
#include "Widgets/Layout/Anchors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionTooltipStyle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipStyle(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipStyle(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOrionTooltipStyle *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionTooltipStyle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class UOrionTooltipStyle constinit property declarations ***********************
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
// ********** End Class UOrionTooltipStyle constinit property declarations *************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionTooltipStyle Property Definitions **********************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ToolTipTitleText = { "ToolTipTitleText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, ToolTipTitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTipTitleText_MetaData), NewProp_ToolTipTitleText_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_TooltipDescriptionText = { "TooltipDescriptionText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipDescriptionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipDescriptionText_MetaData), NewProp_TooltipDescriptionText_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_TooltipCascadeID_ValueProp = { "TooltipCascadeID", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionTooltipWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TooltipCascadeID_Key_KeyProp = { "TooltipCascadeID_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_TooltipCascadeID = { "TooltipCascadeID", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipCascadeID), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipCascadeID_MetaData), NewProp_TooltipCascadeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TooltipCascadeAnchors_ValueProp = { "TooltipCascadeAnchors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(0, nullptr) }; // 04d50b84bb05c616b04af241b1ba0168bc7a8f2c
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TooltipCascadeAnchors_Key_KeyProp = { "TooltipCascadeAnchors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_TooltipCascadeAnchors = { "TooltipCascadeAnchors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipCascadeAnchors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipCascadeAnchors_MetaData), NewProp_TooltipCascadeAnchors_MetaData) }; // 04d50b84bb05c616b04af241b1ba0168bc7a8f2c
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_TooltipBackgroundImage = { "TooltipBackgroundImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipBackgroundImage), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipBackgroundImage_MetaData), NewProp_TooltipBackgroundImage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_TooltipIconImage = { "TooltipIconImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipStyle, TooltipIconImage), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipIconImage_MetaData), NewProp_TooltipIconImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ToolTipTitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipDescriptionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipCascadeID_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipCascadeID_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipCascadeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipCascadeAnchors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipCascadeAnchors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipCascadeAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipBackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipIconImage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionTooltipStyle Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionTooltipStyle,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionTooltipStyle;
UClass* Z_Construct_UClass_UOrionTooltipStyle(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionTooltipStyle;
		if (!Z_Registration_Info_UClass_UOrionTooltipStyle.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionTooltipStyle"),
				Z_Registration_Info_UClass_UOrionTooltipStyle.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UOrionTooltipStyle.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOrionTooltipStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipStyle.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionTooltipStyle.OuterSingleton;
}
#undef UHT_STATICS
UOrionTooltipStyle::UOrionTooltipStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionTooltipStyle);
UOrionTooltipStyle::~UOrionTooltipStyle() {}
// ********** End Class UOrionTooltipStyle *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipStyle_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipStyle, TEXT("UOrionTooltipStyle"), &Z_Registration_Info_UClass_UOrionTooltipStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipStyle), 2310787054U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipStyle_h__Script_OrionUI_26dc2756e9bd99186f503acb4f473daa3f0bfc07{
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
