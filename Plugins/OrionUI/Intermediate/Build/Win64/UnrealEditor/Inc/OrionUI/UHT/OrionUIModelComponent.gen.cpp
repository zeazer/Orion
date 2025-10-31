// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Model/OrionUIModelComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionUIModelComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIModelComponent();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIModelComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionUIModelComponent Function Update ***********************************
struct Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Model/OrionUIModelComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionUIModelComponent, nullptr, "Update", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionUIModelComponent_Update()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionUIModelComponent::execUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Update();
	P_NATIVE_END;
}
// ********** End Class UOrionUIModelComponent Function Update *************************************

// ********** Begin Class UOrionUIModelComponent ***************************************************
void UOrionUIModelComponent::StaticRegisterNativesUOrionUIModelComponent()
{
	UClass* Class = UOrionUIModelComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Update", &UOrionUIModelComponent::execUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionUIModelComponent;
UClass* UOrionUIModelComponent::GetPrivateStaticClass()
{
	using TClass = UOrionUIModelComponent;
	if (!Z_Registration_Info_UClass_UOrionUIModelComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionUIModelComponent"),
			Z_Registration_Info_UClass_UOrionUIModelComponent.InnerSingleton,
			StaticRegisterNativesUOrionUIModelComponent,
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
	return Z_Registration_Info_UClass_UOrionUIModelComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionUIModelComponent_NoRegister()
{
	return UOrionUIModelComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionUIModelComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UI/Model/OrionUIModelComponent.h" },
		{ "ModuleRelativePath", "Public/UI/Model/OrionUIModelComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Model/OrionUIModelComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionUIModelComponent_Update, "Update" }, // 4290802429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionUIModelComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionUIModelComponent_Statics::NewProp_UIController = { "UIController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUIModelComponent, UIController), Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIController_MetaData), NewProp_UIController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionUIModelComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionUIModelComponent_Statics::NewProp_UIController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionUIModelComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionUIModelComponent_Statics::ClassParams = {
	&UOrionUIModelComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionUIModelComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionUIModelComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionUIModelComponent()
{
	if (!Z_Registration_Info_UClass_UOrionUIModelComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionUIModelComponent.OuterSingleton, Z_Construct_UClass_UOrionUIModelComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionUIModelComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionUIModelComponent);
UOrionUIModelComponent::~UOrionUIModelComponent() {}
// ********** End Class UOrionUIModelComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionUIModelComponent, UOrionUIModelComponent::StaticClass, TEXT("UOrionUIModelComponent"), &Z_Registration_Info_UClass_UOrionUIModelComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionUIModelComponent), 3388560536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h__Script_OrionUI_3603594485(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
