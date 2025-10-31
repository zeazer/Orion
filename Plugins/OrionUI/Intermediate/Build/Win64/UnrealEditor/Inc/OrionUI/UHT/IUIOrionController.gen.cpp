// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Interfaces/IUIOrionController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIUIOrionController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionController();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionController_NoRegister();
ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPostPlayerTravel ***************************************************
struct Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionUI, nullptr, "OnPostPlayerTravel__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPostPlayerTravel_DelegateWrapper(const FScriptDelegate& OnPostPlayerTravel)
{
	OnPostPlayerTravel.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPostPlayerTravel *****************************************************

// ********** Begin Interface UUIOrionController ***************************************************
void UUIOrionController::StaticRegisterNativesUUIOrionController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIOrionController;
UClass* UUIOrionController::GetPrivateStaticClass()
{
	using TClass = UUIOrionController;
	if (!Z_Registration_Info_UClass_UUIOrionController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UIOrionController"),
			Z_Registration_Info_UClass_UUIOrionController.InnerSingleton,
			StaticRegisterNativesUUIOrionController,
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
	return Z_Registration_Info_UClass_UUIOrionController.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIOrionController_NoRegister()
{
	return UUIOrionController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIOrionController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIOrionController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIOrionController_Statics::ClassParams = {
	&UUIOrionController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionController_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIOrionController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIOrionController()
{
	if (!Z_Registration_Info_UClass_UUIOrionController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionController.OuterSingleton, Z_Construct_UClass_UUIOrionController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIOrionController.OuterSingleton;
}
UUIOrionController::UUIOrionController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIOrionController);
// ********** End Interface UUIOrionController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionController, UUIOrionController::StaticClass, TEXT("UUIOrionController"), &Z_Registration_Info_UClass_UUIOrionController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionController), 3707389555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h__Script_OrionUI_3321545407(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
