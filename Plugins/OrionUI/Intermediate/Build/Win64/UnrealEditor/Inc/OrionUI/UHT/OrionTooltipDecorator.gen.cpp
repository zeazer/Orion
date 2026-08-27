// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Decorator/OrionTooltipDecorator.h"
#include "Styling/SlateTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionTooltipDecorator() {}

// ********** Begin Cross Module References ********************************************************
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipDecorator(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipDecorator(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Decorator/OrionTooltipDecorator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CascadeClicked constinit property declarations ************************
// ********** End Function CascadeClicked constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionTooltipDecorator, nullptr, "CascadeClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOrionTooltipDecorator::execCascadeClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CascadeClicked_Implementation();
	P_NATIVE_END;
}
// ********** End Class UOrionTooltipDecorator Function CascadeClicked *****************************

// ********** Begin Class UOrionTooltipDecorator ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionTooltipDecorator_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class UOrionTooltipDecorator constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_style;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOrionTooltipDecorator constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CascadeClicked"), .Pointer = &UOrionTooltipDecorator::execCascadeClicked },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked, "CascadeClicked" }, // c3b373034fa996bdd1b2adcb8c09b639dd144646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipDecorator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionTooltipDecorator Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_style = { "style", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipDecorator, style), Z_Construct_UScriptStruct_FHyperlinkStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_style_MetaData), NewProp_style_MetaData) }; // b41a4ffe94f1832604c378ab4ed715b5ecf32f58
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_style,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionTooltipDecorator Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_URichTextBlockDecorator,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionTooltipDecorator,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOrionTooltipDecorator_StaticRegisterNativesUOrionTooltipDecorator()
{
	UClass* Class = UOrionTooltipDecorator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionTooltipDecorator;
UClass* Z_Construct_UClass_UOrionTooltipDecorator(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionTooltipDecorator;
		if (!Z_Registration_Info_UClass_UOrionTooltipDecorator.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionTooltipDecorator"),
				Z_Registration_Info_UClass_UOrionTooltipDecorator.InnerSingleton,
				UOrionTooltipDecorator_StaticRegisterNativesUOrionTooltipDecorator,
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
		return Z_Registration_Info_UClass_UOrionTooltipDecorator.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOrionTooltipDecorator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipDecorator.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionTooltipDecorator.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionTooltipDecorator);
UOrionTooltipDecorator::~UOrionTooltipDecorator() {}
// ********** End Class UOrionTooltipDecorator *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipDecorator, TEXT("UOrionTooltipDecorator"), &Z_Registration_Info_UClass_UOrionTooltipDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipDecorator), 2597295307U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h__Script_OrionUI_c23856f2b0e046499ff126ae3a2803fae1645e95{
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
