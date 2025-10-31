// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Decorator/OrionTooltipDecorator.h"
#include "Styling/SlateTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionTooltipDecorator() {}

// ********** Begin Cross Module References ********************************************************
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipDecorator();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipDecorator_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle();
UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionTooltipDecorator Function CascadeClicked ***************************
static FName NAME_UOrionTooltipDecorator_CascadeClicked = FName(TEXT("CascadeClicked"));
void UOrionTooltipDecorator::CascadeClicked()
{
	UFunction* Func = FindFunctionChecked(NAME_UOrionTooltipDecorator_CascadeClicked);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		CascadeClicked_Implementation();
	}
}
struct Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Decorator/OrionTooltipDecorator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionTooltipDecorator, nullptr, "CascadeClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionTooltipDecorator::execCascadeClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CascadeClicked_Implementation();
	P_NATIVE_END;
}
// ********** End Class UOrionTooltipDecorator Function CascadeClicked *****************************

// ********** Begin Class UOrionTooltipDecorator ***************************************************
void UOrionTooltipDecorator::StaticRegisterNativesUOrionTooltipDecorator()
{
	UClass* Class = UOrionTooltipDecorator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CascadeClicked", &UOrionTooltipDecorator::execCascadeClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionTooltipDecorator;
UClass* UOrionTooltipDecorator::GetPrivateStaticClass()
{
	using TClass = UOrionTooltipDecorator;
	if (!Z_Registration_Info_UClass_UOrionTooltipDecorator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionTooltipDecorator"),
			Z_Registration_Info_UClass_UOrionTooltipDecorator.InnerSingleton,
			StaticRegisterNativesUOrionTooltipDecorator,
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
	return Z_Registration_Info_UClass_UOrionTooltipDecorator.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionTooltipDecorator_NoRegister()
{
	return UOrionTooltipDecorator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionTooltipDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "UI/Decorator/OrionTooltipDecorator.h" },
		{ "ModuleRelativePath", "Public/UI/Decorator/OrionTooltipDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_style_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Decorator/OrionTooltipDecorator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_style;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked, "CascadeClicked" }, // 2700919685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipDecorator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOrionTooltipDecorator_Statics::NewProp_style = { "style", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipDecorator, style), Z_Construct_UScriptStruct_FHyperlinkStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_style_MetaData), NewProp_style_MetaData) }; // 127222650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionTooltipDecorator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipDecorator_Statics::NewProp_style,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionTooltipDecorator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionTooltipDecorator_Statics::ClassParams = {
	&UOrionTooltipDecorator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionTooltipDecorator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionTooltipDecorator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionTooltipDecorator()
{
	if (!Z_Registration_Info_UClass_UOrionTooltipDecorator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipDecorator.OuterSingleton, Z_Construct_UClass_UOrionTooltipDecorator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionTooltipDecorator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionTooltipDecorator);
UOrionTooltipDecorator::~UOrionTooltipDecorator() {}
// ********** End Class UOrionTooltipDecorator *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipDecorator, UOrionTooltipDecorator::StaticClass, TEXT("UOrionTooltipDecorator"), &Z_Registration_Info_UClass_UOrionTooltipDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipDecorator), 724678104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h__Script_OrionUI_3712611701(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
