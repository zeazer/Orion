// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Interfaces/IUIOrionRichTextBlock.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIUIOrionRichTextBlock() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionRichTextBlock();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UUIOrionRichTextBlock ************************************************
void UUIOrionRichTextBlock::StaticRegisterNativesUUIOrionRichTextBlock()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIOrionRichTextBlock;
UClass* UUIOrionRichTextBlock::GetPrivateStaticClass()
{
	using TClass = UUIOrionRichTextBlock;
	if (!Z_Registration_Info_UClass_UUIOrionRichTextBlock.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UIOrionRichTextBlock"),
			Z_Registration_Info_UClass_UUIOrionRichTextBlock.InnerSingleton,
			StaticRegisterNativesUUIOrionRichTextBlock,
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
	return Z_Registration_Info_UClass_UUIOrionRichTextBlock.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister()
{
	return UUIOrionRichTextBlock::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIOrionRichTextBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionRichTextBlock.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionRichTextBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIOrionRichTextBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionRichTextBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIOrionRichTextBlock_Statics::ClassParams = {
	&UUIOrionRichTextBlock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionRichTextBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIOrionRichTextBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIOrionRichTextBlock()
{
	if (!Z_Registration_Info_UClass_UUIOrionRichTextBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionRichTextBlock.OuterSingleton, Z_Construct_UClass_UUIOrionRichTextBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIOrionRichTextBlock.OuterSingleton;
}
UUIOrionRichTextBlock::UUIOrionRichTextBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIOrionRichTextBlock);
// ********** End Interface UUIOrionRichTextBlock **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionRichTextBlock, UUIOrionRichTextBlock::StaticClass, TEXT("UUIOrionRichTextBlock"), &Z_Registration_Info_UClass_UUIOrionRichTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionRichTextBlock), 235679783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h__Script_OrionUI_1215595201(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
