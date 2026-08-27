// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Interfaces/IUIOrionAnimUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeIUIOrionAnimUserWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EOrionAnimMode(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionAnimUserWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_IUIOrionAnimUserWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionAnimUserWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_IUIOrionAnimUserWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOrionAnimMode ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrionAnimMode>()
{
	return Z_Construct_UEnum_OrionUI_EOrionAnimMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
	nullptr,
	"EOrionAnimMode",
	"EOrionAnimMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOrionAnimMode;
UEnum* Z_Construct_UEnum_OrionUI_EOrionAnimMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOrionAnimMode.OuterSingleton)
		{
			ZRIE_EOrionAnimMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EOrionAnimMode, (UObject*)Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase::Outer), TEXT("EOrionAnimMode"));
		}
		return ZRIE_EOrionAnimMode.OuterSingleton;
	}
	if (!ZRIE_EOrionAnimMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOrionAnimMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOrionAnimMode.InnerSingleton;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionAnimUserWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AnimFunction constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AnimFunction constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AnimFunction Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AnimMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AnimMode = { "AnimMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UIOrionAnimUserWidget_eventAnimFunction_Parms, AnimMode), Z_Construct_UEnum_OrionUI_EOrionAnimMode, METADATA_PARAMS(0, nullptr) }; // d0e8a0d91ad0ee5d6611711f2744aa51bcce6e97
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AnimFunction Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUIOrionAnimUserWidget, nullptr, "AnimFunction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UIOrionAnimUserWidget_eventAnimFunction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UIOrionAnimUserWidget_eventAnimFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUIOrionAnimUserWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionAnimUserWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UUIOrionAnimUserWidget constinit property declarations ***************
// ********** End Interface UUIOrionAnimUserWidget constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AnimFunction"), .Pointer = &IUIOrionAnimUserWidget::execAnimFunction },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction, "AnimFunction" }, // fe224ad606561a8ae7d35bef002e34db0ce83037
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionAnimUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUIOrionAnimUserWidget,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UUIOrionAnimUserWidget_StaticRegisterNativesUUIOrionAnimUserWidget()
{
	UClass* Class = UUIOrionAnimUserWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIOrionAnimUserWidget;
UClass* Z_Construct_UClass_UUIOrionAnimUserWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUIOrionAnimUserWidget;
		if (!Z_Registration_Info_UClass_UUIOrionAnimUserWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("UIOrionAnimUserWidget"),
				Z_Registration_Info_UClass_UUIOrionAnimUserWidget.InnerSingleton,
				UUIOrionAnimUserWidget_StaticRegisterNativesUUIOrionAnimUserWidget,
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
		return Z_Registration_Info_UClass_UUIOrionAnimUserWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UUIOrionAnimUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionAnimUserWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIOrionAnimUserWidget.OuterSingleton;
}
#undef UHT_STATICS
UUIOrionAnimUserWidget::UUIOrionAnimUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUIOrionAnimUserWidget);
// ********** End Interface UUIOrionAnimUserWidget *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_OrionUI_EOrionAnimMode, TEXT("EOrionAnimMode"), &ZRIE_EOrionAnimMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3504906457U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionAnimUserWidget, TEXT("UUIOrionAnimUserWidget"), &Z_Registration_Info_UClass_UUIOrionAnimUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionAnimUserWidget), 446638610U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h__Script_OrionUI_eae7851911c2f2642541ec2d3ed9fcb808a6df92{
	TEXT("/Script/OrionUI"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
