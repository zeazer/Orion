// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ORIONUI_API UClass* Z_Construct_UClass_UOrionSettings();
ORIONUI_API UClass* Z_Construct_UClass_UOrionSettings_NoRegister();
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EViewType();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EViewType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewType;
static UEnum* EViewType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EViewType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EViewType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EViewType, (UObject*)Z_Construct_UPackage__Script_OrionUI(), TEXT("EViewType"));
	}
	return Z_Registration_Info_UEnum_EViewType.OuterSingleton;
}
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewType>()
{
	return EViewType_StaticEnum();
}
struct Z_Construct_UEnum_OrionUI_EViewType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionUI_EViewType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionUI,
	nullptr,
	"EViewType",
	"EViewType",
	Z_Construct_UEnum_OrionUI_EViewType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EViewType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EViewType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionUI_EViewType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionUI_EViewType()
{
	if (!Z_Registration_Info_UEnum_EViewType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewType.InnerSingleton, Z_Construct_UEnum_OrionUI_EViewType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EViewType.InnerSingleton;
}
// ********** End Enum EViewType *******************************************************************

// ********** Begin Class UOrionSettings ***********************************************************
void UOrionSettings::StaticRegisterNativesUOrionSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSettings;
UClass* UOrionSettings::GetPrivateStaticClass()
{
	using TClass = UOrionSettings;
	if (!Z_Registration_Info_UClass_UOrionSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionSettings"),
			Z_Registration_Info_UClass_UOrionSettings.InnerSingleton,
			StaticRegisterNativesUOrionSettings,
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
	return Z_Registration_Info_UClass_UOrionSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSettings_NoRegister()
{
	return UOrionSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Orion Settings" },
		{ "IncludePath", "OrionSettings.h" },
		{ "ModuleRelativePath", "Public/OrionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewType_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/OrionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ViewType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOrionSettings_Statics::NewProp_ViewType = { "ViewType", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSettings, ViewType), Z_Construct_UEnum_OrionUI_EViewType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewType_MetaData), NewProp_ViewType_MetaData) }; // 1826807905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSettings_Statics::NewProp_ViewType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSettings_Statics::ClassParams = {
	&UOrionSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSettings()
{
	if (!Z_Registration_Info_UClass_UOrionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSettings.OuterSingleton, Z_Construct_UClass_UOrionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionSettings);
UOrionSettings::~UOrionSettings() {}
// ********** End Class UOrionSettings *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h__Script_OrionUI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EViewType_StaticEnum, TEXT("EViewType"), &Z_Registration_Info_UEnum_EViewType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1826807905U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSettings, UOrionSettings::StaticClass, TEXT("UOrionSettings"), &Z_Registration_Info_UClass_UOrionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSettings), 2826993654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h__Script_OrionUI_1065872811(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h__Script_OrionUI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h__Script_OrionUI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
