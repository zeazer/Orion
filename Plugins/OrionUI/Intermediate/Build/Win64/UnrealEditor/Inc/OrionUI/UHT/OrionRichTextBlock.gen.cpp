// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/OrionRichTextBlock.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionRichTextBlock() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionRichTextBlock();
ORIONUI_API UClass* Z_Construct_UClass_UOrionRichTextBlock_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionRichTextBlock ******************************************************
void UOrionRichTextBlock::StaticRegisterNativesUOrionRichTextBlock()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionRichTextBlock;
UClass* UOrionRichTextBlock::GetPrivateStaticClass()
{
	using TClass = UOrionRichTextBlock;
	if (!Z_Registration_Info_UClass_UOrionRichTextBlock.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionRichTextBlock"),
			Z_Registration_Info_UClass_UOrionRichTextBlock.InnerSingleton,
			StaticRegisterNativesUOrionRichTextBlock,
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
	return Z_Registration_Info_UClass_UOrionRichTextBlock.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionRichTextBlock_NoRegister()
{
	return UOrionRichTextBlock::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionRichTextBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/OrionRichTextBlock.h" },
		{ "ModuleRelativePath", "Public/UI/OrionRichTextBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeTooltipWidget_MetaData[] = {
		{ "Category", "OrionRichTextBlock" },
		{ "ModuleRelativePath", "Public/UI/OrionRichTextBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CascadeTooltipWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionRichTextBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionRichTextBlock_Statics::NewProp_CascadeTooltipWidget = { "CascadeTooltipWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionRichTextBlock, CascadeTooltipWidget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeTooltipWidget_MetaData), NewProp_CascadeTooltipWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionRichTextBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionRichTextBlock_Statics::NewProp_CascadeTooltipWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionRichTextBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonRichTextBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionRichTextBlock_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister, (int32)VTABLE_OFFSET(UOrionRichTextBlock, IUIOrionRichTextBlock), false },  // 235679783
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionRichTextBlock_Statics::ClassParams = {
	&UOrionRichTextBlock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionRichTextBlock_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionRichTextBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionRichTextBlock()
{
	if (!Z_Registration_Info_UClass_UOrionRichTextBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionRichTextBlock.OuterSingleton, Z_Construct_UClass_UOrionRichTextBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionRichTextBlock.OuterSingleton;
}
UOrionRichTextBlock::UOrionRichTextBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionRichTextBlock);
UOrionRichTextBlock::~UOrionRichTextBlock() {}
// ********** End Class UOrionRichTextBlock ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionRichTextBlock, UOrionRichTextBlock::StaticClass, TEXT("UOrionRichTextBlock"), &Z_Registration_Info_UClass_UOrionRichTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionRichTextBlock), 2650449486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h__Script_OrionUI_2334789314(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
