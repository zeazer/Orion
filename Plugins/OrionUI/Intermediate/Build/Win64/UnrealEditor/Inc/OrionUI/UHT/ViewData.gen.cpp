// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Structs/ViewData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeViewData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ORIONUI_API UClass* Z_Construct_UClass_UViewData();
ORIONUI_API UClass* Z_Construct_UClass_UViewData_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UViewData ****************************************************************
void UViewData::StaticRegisterNativesUViewData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UViewData;
UClass* UViewData::GetPrivateStaticClass()
{
	using TClass = UViewData;
	if (!Z_Registration_Info_UClass_UViewData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ViewData"),
			Z_Registration_Info_UClass_UViewData.InnerSingleton,
			StaticRegisterNativesUViewData,
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
	return Z_Registration_Info_UClass_UViewData.InnerSingleton;
}
UClass* Z_Construct_UClass_UViewData_NoRegister()
{
	return UViewData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UViewData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Structs/ViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Structs/ViewData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UViewData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewData_Statics::ClassParams = {
	&UViewData::StaticClass,
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
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewData_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewData()
{
	if (!Z_Registration_Info_UClass_UViewData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewData.OuterSingleton, Z_Construct_UClass_UViewData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewData.OuterSingleton;
}
UViewData::UViewData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UViewData);
UViewData::~UViewData() {}
// ********** End Class UViewData ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewData, UViewData::StaticClass, TEXT("UViewData"), &Z_Registration_Info_UClass_UViewData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewData), 3060991188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h__Script_OrionUI_3088184208(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
