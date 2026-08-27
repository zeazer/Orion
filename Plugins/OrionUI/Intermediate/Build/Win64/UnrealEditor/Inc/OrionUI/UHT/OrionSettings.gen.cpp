// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EViewType(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionSettings(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EViewType *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OrionUI_EViewType_Statics
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewType>()
{
	return Z_Construct_UEnum_OrionUI_EViewType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Name", "COUNT" },
		{ "ModuleRelativePath", "Public/OrionSettings.h" },
		{ "PC.Name", "PC" },
		{ "PS5.Name", "PS5" },
		{ "XBOXONE.Name", "XBOXONE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PC", (int64)PC },
		{ "PS5", (int64)PS5 },
		{ "XBOXONE", (int64)XBOXONE },
		{ "COUNT", (int64)COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
	nullptr,
	"EViewType",
	"EViewType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EViewType;
UEnum* Z_Construct_UEnum_OrionUI_EViewType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EViewType.OuterSingleton)
		{
			ZRIE_EViewType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EViewType, (UObject*)Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase::Outer), TEXT("EViewType"));
		}
		return ZRIE_EViewType.OuterSingleton;
	}
	if (!ZRIE_EViewType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EViewType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EViewType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EViewType *******************************************************************

// ********** Begin Class UOrionSettings ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DisplayName", "Orion Settings" },
		{ "IncludePath", "OrionSettings.h" },
		{ "ModuleRelativePath", "Public/OrionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewType_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/OrionSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOrionSettings constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ViewType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOrionSettings constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionSettings Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ViewType = { "ViewType", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSettings, ViewType), Z_Construct_UEnum_OrionUI_EViewType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewType_MetaData), NewProp_ViewType_MetaData) }; // 1c24dcf3f6b76579501f4976915623474d0f96a8
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionSettings Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDeveloperSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionSettings,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSettings;
UClass* Z_Construct_UClass_UOrionSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionSettings;
		if (!Z_Registration_Info_UClass_UOrionSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionSettings"),
				Z_Registration_Info_UClass_UOrionSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UOrionSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOrionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionSettings);
UOrionSettings::~UOrionSettings() {}
// ********** End Class UOrionSettings *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OrionUI_EViewType, TEXT("EViewType"), &ZRIE_EViewType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 472177907U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSettings, TEXT("UOrionSettings"), &Z_Registration_Info_UClass_UOrionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSettings), 1503585850U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h__Script_OrionUI_398ee9c9ebc50f47142b7b1caa3ca7f8460a4476{
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
