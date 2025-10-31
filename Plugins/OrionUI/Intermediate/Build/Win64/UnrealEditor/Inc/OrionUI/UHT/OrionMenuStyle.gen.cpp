// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Structs/OrionMenuStyle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionMenuStyle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuStyle();
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuStyle_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionMenuStyle **********************************************************
void UOrionMenuStyle::StaticRegisterNativesUOrionMenuStyle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionMenuStyle;
UClass* UOrionMenuStyle::GetPrivateStaticClass()
{
	using TClass = UOrionMenuStyle;
	if (!Z_Registration_Info_UClass_UOrionMenuStyle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionMenuStyle"),
			Z_Registration_Info_UClass_UOrionMenuStyle.InnerSingleton,
			StaticRegisterNativesUOrionMenuStyle,
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
	return Z_Registration_Info_UClass_UOrionMenuStyle.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionMenuStyle_NoRegister()
{
	return UOrionMenuStyle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionMenuStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Structs/OrionMenuStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePlayerInput_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideAll_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeHiddenByOtherWidgets_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "If false this widget will not be hidden by other widgets using 'bHideAll'" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGenericClosing_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayOpenSound_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCursor_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseGame_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisablePlayerInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePlayerInput;
	static void NewProp_bHideAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAll;
	static void NewProp_bCanBeHiddenByOtherWidgets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeHiddenByOtherWidgets;
	static void NewProp_bAllowGenericClosing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGenericClosing;
	static void NewProp_bPlayOpenSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOpenSound;
	static void NewProp_bShowCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCursor;
	static void NewProp_bPauseGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseGame;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionMenuStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput_SetBit(void* Obj)
{
	((UOrionMenuStyle*)Obj)->bDisablePlayerInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput = { "bDisablePlayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisablePlayerInput_MetaData), NewProp_bDisablePlayerInput_MetaData) };
void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll_SetBit(void* Obj)
{
	((UOrionMenuStyle*)Obj)->bHideAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll = { "bHideAll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideAll_MetaData), NewProp_bHideAll_MetaData) };
void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets_SetBit(void* Obj)
{
	((UOrionMenuStyle*)Obj)->bCanBeHiddenByOtherWidgets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets = { "bCanBeHiddenByOtherWidgets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeHiddenByOtherWidgets_MetaData), NewProp_bCanBeHiddenByOtherWidgets_MetaData) };
void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing_SetBit(void* Obj)
{
	((UOrionMenuStyle*)Obj)->bAllowGenericClosing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing = { "bAllowGenericClosing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowGenericClosing_MetaData), NewProp_bAllowGenericClosing_MetaData) };
void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound_SetBit(void* Obj)
{
	((UOrionMenuStyle*)Obj)->bPlayOpenSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound = { "bPlayOpenSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayOpenSound_MetaData), NewProp_bPlayOpenSound_MetaData) };
void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor_SetBit(void* Obj)
{
	((UOrionMenuStyle*)Obj)->bShowCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor = { "bShowCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCursor_MetaData), NewProp_bShowCursor_MetaData) };
void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame_SetBit(void* Obj)
{
	((UOrionMenuStyle*)Obj)->bPauseGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame = { "bPauseGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseGame_MetaData), NewProp_bPauseGame_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMenuStyle, BackgroundImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionMenuStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_BackgroundImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionMenuStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionMenuStyle_Statics::ClassParams = {
	&UOrionMenuStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionMenuStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionMenuStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionMenuStyle()
{
	if (!Z_Registration_Info_UClass_UOrionMenuStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionMenuStyle.OuterSingleton, Z_Construct_UClass_UOrionMenuStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionMenuStyle.OuterSingleton;
}
UOrionMenuStyle::UOrionMenuStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionMenuStyle);
UOrionMenuStyle::~UOrionMenuStyle() {}
// ********** End Class UOrionMenuStyle ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionMenuStyle, UOrionMenuStyle::StaticClass, TEXT("UOrionMenuStyle"), &Z_Registration_Info_UClass_UOrionMenuStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionMenuStyle), 2749682514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h__Script_OrionUI_41009128(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
