// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Structs/OrionTooltipSettingStyle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionTooltipSettingStyle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister();
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EToolTipMode();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EToolTipMode **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolTipMode;
static UEnum* EToolTipMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EToolTipMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EToolTipMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EToolTipMode, (UObject*)Z_Construct_UPackage__Script_OrionUI(), TEXT("EToolTipMode"));
	}
	return Z_Registration_Info_UEnum_EToolTipMode.OuterSingleton;
}
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolTipMode>()
{
	return EToolTipMode_StaticEnum();
}
struct Z_Construct_UEnum_OrionUI_EToolTipMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hover.Name", "EToolTipMode::Hover" },
		{ "LeftClick.Name", "EToolTipMode::LeftClick" },
		{ "MiddleClick.Name", "EToolTipMode::MiddleClick" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipSettingStyle.h" },
		{ "RightClick.Name", "EToolTipMode::RightClick" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EToolTipMode::Hover", (int64)EToolTipMode::Hover },
		{ "EToolTipMode::LeftClick", (int64)EToolTipMode::LeftClick },
		{ "EToolTipMode::RightClick", (int64)EToolTipMode::RightClick },
		{ "EToolTipMode::MiddleClick", (int64)EToolTipMode::MiddleClick },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionUI,
	nullptr,
	"EToolTipMode",
	"EToolTipMode",
	Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionUI_EToolTipMode()
{
	if (!Z_Registration_Info_UEnum_EToolTipMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolTipMode.InnerSingleton, Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EToolTipMode.InnerSingleton;
}
// ********** End Enum EToolTipMode ****************************************************************

// ********** Begin Class UOrionTooltipSettingStyle ************************************************
void UOrionTooltipSettingStyle::StaticRegisterNativesUOrionTooltipSettingStyle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionTooltipSettingStyle;
UClass* UOrionTooltipSettingStyle::GetPrivateStaticClass()
{
	using TClass = UOrionTooltipSettingStyle;
	if (!Z_Registration_Info_UClass_UOrionTooltipSettingStyle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionTooltipSettingStyle"),
			Z_Registration_Info_UClass_UOrionTooltipSettingStyle.InnerSingleton,
			StaticRegisterNativesUOrionTooltipSettingStyle,
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
	return Z_Registration_Info_UClass_UOrionTooltipSettingStyle.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister()
{
	return UOrionTooltipSettingStyle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionTooltipSettingStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Structs/OrionTooltipSettingStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipSettingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipDelay_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipSettingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipMode_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipSettingStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TooltipDelay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToolTipMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolTipMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipSettingStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_TooltipDelay = { "TooltipDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipSettingStyle, TooltipDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipDelay_MetaData), NewProp_TooltipDelay_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode = { "ToolTipMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipSettingStyle, ToolTipMode), Z_Construct_UEnum_OrionUI_EToolTipMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTipMode_MetaData), NewProp_ToolTipMode_MetaData) }; // 3231180240
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_TooltipDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::ClassParams = {
	&UOrionTooltipSettingStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionTooltipSettingStyle()
{
	if (!Z_Registration_Info_UClass_UOrionTooltipSettingStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipSettingStyle.OuterSingleton, Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionTooltipSettingStyle.OuterSingleton;
}
UOrionTooltipSettingStyle::UOrionTooltipSettingStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionTooltipSettingStyle);
UOrionTooltipSettingStyle::~UOrionTooltipSettingStyle() {}
// ********** End Class UOrionTooltipSettingStyle **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h__Script_OrionUI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EToolTipMode_StaticEnum, TEXT("EToolTipMode"), &Z_Registration_Info_UEnum_EToolTipMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3231180240U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipSettingStyle, UOrionTooltipSettingStyle::StaticClass, TEXT("UOrionTooltipSettingStyle"), &Z_Registration_Info_UClass_UOrionTooltipSettingStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipSettingStyle), 4228672629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h__Script_OrionUI_2525334681(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h__Script_OrionUI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h__Script_OrionUI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
