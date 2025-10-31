// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Interfaces/IUIOrionAnimUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIUIOrionAnimUserWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionAnimUserWidget();
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister();
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EOrionAnimMode();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOrionAnimMode ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionAnimMode;
static UEnum* EOrionAnimMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionAnimMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionAnimMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EOrionAnimMode, (UObject*)Z_Construct_UPackage__Script_OrionUI(), TEXT("EOrionAnimMode"));
	}
	return Z_Registration_Info_UEnum_EOrionAnimMode.OuterSingleton;
}
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrionAnimMode>()
{
	return EOrionAnimMode_StaticEnum();
}
struct Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InAnim.Name", "EOrionAnimMode::InAnim" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionAnimUserWidget.h" },
		{ "OutAnim.Name", "EOrionAnimMode::OutAnim" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionAnimMode::InAnim", (int64)EOrionAnimMode::InAnim },
		{ "EOrionAnimMode::OutAnim", (int64)EOrionAnimMode::OutAnim },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionUI,
	nullptr,
	"EOrionAnimMode",
	"EOrionAnimMode",
	Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionUI_EOrionAnimMode()
{
	if (!Z_Registration_Info_UEnum_EOrionAnimMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionAnimMode.InnerSingleton, Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionAnimMode.InnerSingleton;
}
// ********** End Enum EOrionAnimMode **************************************************************

// ********** Begin Interface UUIOrionAnimUserWidget Function AnimFunction *************************
struct UIOrionAnimUserWidget_eventAnimFunction_Parms
{
	EOrionAnimMode AnimMode;
};
void IUIOrionAnimUserWidget::AnimFunction(EOrionAnimMode AnimMode)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AnimFunction instead.");
}
static FName NAME_UUIOrionAnimUserWidget_AnimFunction = FName(TEXT("AnimFunction"));
void IUIOrionAnimUserWidget::Execute_AnimFunction(UObject* O, EOrionAnimMode AnimMode)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UUIOrionAnimUserWidget::StaticClass()));
	UIOrionAnimUserWidget_eventAnimFunction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UUIOrionAnimUserWidget_AnimFunction);
	if (Func)
	{
		Parms.AnimMode=std::move(AnimMode);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IUIOrionAnimUserWidget*)(O->GetNativeInterfaceAddress(UUIOrionAnimUserWidget::StaticClass())))
	{
		I->AnimFunction_Implementation(AnimMode);
	}
}
struct Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionAnimUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::NewProp_AnimMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::NewProp_AnimMode = { "AnimMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOrionAnimUserWidget_eventAnimFunction_Parms, AnimMode), Z_Construct_UEnum_OrionUI_EOrionAnimMode, METADATA_PARAMS(0, nullptr) }; // 468845766
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::NewProp_AnimMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::NewProp_AnimMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIOrionAnimUserWidget, nullptr, "AnimFunction", Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::PropPointers), sizeof(UIOrionAnimUserWidget_eventAnimFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UIOrionAnimUserWidget_eventAnimFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IUIOrionAnimUserWidget::execAnimFunction)
{
	P_GET_ENUM(EOrionAnimMode,Z_Param_AnimMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimFunction_Implementation(EOrionAnimMode(Z_Param_AnimMode));
	P_NATIVE_END;
}
// ********** End Interface UUIOrionAnimUserWidget Function AnimFunction ***************************

// ********** Begin Interface UUIOrionAnimUserWidget ***********************************************
void UUIOrionAnimUserWidget::StaticRegisterNativesUUIOrionAnimUserWidget()
{
	UClass* Class = UUIOrionAnimUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimFunction", &IUIOrionAnimUserWidget::execAnimFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIOrionAnimUserWidget;
UClass* UUIOrionAnimUserWidget::GetPrivateStaticClass()
{
	using TClass = UUIOrionAnimUserWidget;
	if (!Z_Registration_Info_UClass_UUIOrionAnimUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UIOrionAnimUserWidget"),
			Z_Registration_Info_UClass_UUIOrionAnimUserWidget.InnerSingleton,
			StaticRegisterNativesUUIOrionAnimUserWidget,
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
	return Z_Registration_Info_UClass_UUIOrionAnimUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister()
{
	return UUIOrionAnimUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIOrionAnimUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionAnimUserWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction, "AnimFunction" }, // 1998758736
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionAnimUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::ClassParams = {
	&UUIOrionAnimUserWidget::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIOrionAnimUserWidget()
{
	if (!Z_Registration_Info_UClass_UUIOrionAnimUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionAnimUserWidget.OuterSingleton, Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIOrionAnimUserWidget.OuterSingleton;
}
UUIOrionAnimUserWidget::UUIOrionAnimUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIOrionAnimUserWidget);
// ********** End Interface UUIOrionAnimUserWidget *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h__Script_OrionUI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOrionAnimMode_StaticEnum, TEXT("EOrionAnimMode"), &Z_Registration_Info_UEnum_EOrionAnimMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 468845766U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionAnimUserWidget, UUIOrionAnimUserWidget::StaticClass, TEXT("UUIOrionAnimUserWidget"), &Z_Registration_Info_UClass_UUIOrionAnimUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionAnimUserWidget), 3982258051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h__Script_OrionUI_1465454249(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h__Script_OrionUI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h__Script_OrionUI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
