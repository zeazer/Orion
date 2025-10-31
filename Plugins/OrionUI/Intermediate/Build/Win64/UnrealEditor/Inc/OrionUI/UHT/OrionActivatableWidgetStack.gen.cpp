// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/OrionActivatableWidgetStack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionActivatableWidgetStack() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetStack();
ORIONUI_API UClass* Z_Construct_UClass_UOrionActivatableWidgetStack();
ORIONUI_API UClass* Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionActivatableWidgetStack Function ClearToBase ************************
struct Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionActivatableWidgetStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionActivatableWidgetStack, nullptr, "ClearToBase", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionActivatableWidgetStack::execClearToBase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearToBase();
	P_NATIVE_END;
}
// ********** End Class UOrionActivatableWidgetStack Function ClearToBase **************************

// ********** Begin Class UOrionActivatableWidgetStack *********************************************
void UOrionActivatableWidgetStack::StaticRegisterNativesUOrionActivatableWidgetStack()
{
	UClass* Class = UOrionActivatableWidgetStack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearToBase", &UOrionActivatableWidgetStack::execClearToBase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionActivatableWidgetStack;
UClass* UOrionActivatableWidgetStack::GetPrivateStaticClass()
{
	using TClass = UOrionActivatableWidgetStack;
	if (!Z_Registration_Info_UClass_UOrionActivatableWidgetStack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionActivatableWidgetStack"),
			Z_Registration_Info_UClass_UOrionActivatableWidgetStack.InnerSingleton,
			StaticRegisterNativesUOrionActivatableWidgetStack,
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
	return Z_Registration_Info_UClass_UOrionActivatableWidgetStack.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister()
{
	return UOrionActivatableWidgetStack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionActivatableWidgetStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/OrionActivatableWidgetStack.h" },
		{ "ModuleRelativePath", "Public/UI/OrionActivatableWidgetStack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase, "ClearToBase" }, // 3835592673
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionActivatableWidgetStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidgetStack,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::ClassParams = {
	&UOrionActivatableWidgetStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionActivatableWidgetStack()
{
	if (!Z_Registration_Info_UClass_UOrionActivatableWidgetStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionActivatableWidgetStack.OuterSingleton, Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionActivatableWidgetStack.OuterSingleton;
}
UOrionActivatableWidgetStack::UOrionActivatableWidgetStack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionActivatableWidgetStack);
UOrionActivatableWidgetStack::~UOrionActivatableWidgetStack() {}
// ********** End Class UOrionActivatableWidgetStack ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionActivatableWidgetStack, UOrionActivatableWidgetStack::StaticClass, TEXT("UOrionActivatableWidgetStack"), &Z_Registration_Info_UClass_UOrionActivatableWidgetStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionActivatableWidgetStack), 2035275656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h__Script_OrionUI_3815360095(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
