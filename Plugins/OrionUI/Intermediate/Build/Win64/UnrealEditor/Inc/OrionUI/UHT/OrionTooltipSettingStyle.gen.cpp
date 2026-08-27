// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Structs/OrionTooltipSettingStyle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionTooltipSettingStyle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EToolTipMode(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EToolTipMode **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OrionUI_EToolTipMode_Statics
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolTipMode>()
{
	return Z_Construct_UEnum_OrionUI_EToolTipMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
	nullptr,
	"EToolTipMode",
	"EToolTipMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EToolTipMode;
UEnum* Z_Construct_UEnum_OrionUI_EToolTipMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EToolTipMode.OuterSingleton)
		{
			ZRIE_EToolTipMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EToolTipMode, (UObject*)Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase::Outer), TEXT("EToolTipMode"));
		}
		return ZRIE_EToolTipMode.OuterSingleton;
	}
	if (!ZRIE_EToolTipMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EToolTipMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EToolTipMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EToolTipMode ****************************************************************

// ********** Begin Class UOrionTooltipSettingStyle ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionTooltipSettingStyle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class UOrionTooltipSettingStyle constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TooltipDelay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToolTipMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolTipMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOrionTooltipSettingStyle constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipSettingStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionTooltipSettingStyle Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TooltipDelay = { "TooltipDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipSettingStyle, TooltipDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipDelay_MetaData), NewProp_TooltipDelay_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ToolTipMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ToolTipMode = { "ToolTipMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipSettingStyle, ToolTipMode), Z_Construct_UEnum_OrionUI_EToolTipMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTipMode_MetaData), NewProp_ToolTipMode_MetaData) }; // 3fcd9560f6725f51e6bed2556748e755eabe72ee
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ToolTipMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ToolTipMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionTooltipSettingStyle Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionTooltipSettingStyle,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionTooltipSettingStyle;
UClass* Z_Construct_UClass_UOrionTooltipSettingStyle(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionTooltipSettingStyle;
		if (!Z_Registration_Info_UClass_UOrionTooltipSettingStyle.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionTooltipSettingStyle"),
				Z_Registration_Info_UClass_UOrionTooltipSettingStyle.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOrionTooltipSettingStyle.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOrionTooltipSettingStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipSettingStyle.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionTooltipSettingStyle.OuterSingleton;
}
#undef UHT_STATICS
UOrionTooltipSettingStyle::UOrionTooltipSettingStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionTooltipSettingStyle);
UOrionTooltipSettingStyle::~UOrionTooltipSettingStyle() {}
// ********** End Class UOrionTooltipSettingStyle **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OrionUI_EToolTipMode, TEXT("EToolTipMode"), &ZRIE_EToolTipMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1070437728U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipSettingStyle, TEXT("UOrionTooltipSettingStyle"), &Z_Registration_Info_UClass_UOrionTooltipSettingStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipSettingStyle), 372599356U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h__Script_OrionUI_4ca931c0fa69f5fdc9f54edf8aaae676336b92cf{
	TEXT("/Script/OrionUI"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
