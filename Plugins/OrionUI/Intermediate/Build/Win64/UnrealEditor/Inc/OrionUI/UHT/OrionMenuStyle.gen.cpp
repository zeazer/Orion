// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Structs/OrionMenuStyle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionMenuStyle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuStyle(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuStyle(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UOrionMenuStyle **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionMenuStyle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class UOrionMenuStyle constinit property declarations **************************
	static void NewProp_bDisablePlayerInput_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bDisablePlayerInput = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePlayerInput;
	static void NewProp_bHideAll_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bHideAll = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAll;
	static void NewProp_bCanBeHiddenByOtherWidgets_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bCanBeHiddenByOtherWidgets = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeHiddenByOtherWidgets;
	static void NewProp_bAllowGenericClosing_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bAllowGenericClosing = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGenericClosing;
	static void NewProp_bPlayOpenSound_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bPlayOpenSound = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOpenSound;
	static void NewProp_bShowCursor_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bShowCursor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCursor;
	static void NewProp_bPauseGame_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bPauseGame = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseGame;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOrionMenuStyle constinit property declarations ****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionMenuStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOrionMenuStyle Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisablePlayerInput = { "bDisablePlayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &UHT_STATICS::NewProp_bDisablePlayerInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisablePlayerInput_MetaData), NewProp_bDisablePlayerInput_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHideAll = { "bHideAll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &UHT_STATICS::NewProp_bHideAll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideAll_MetaData), NewProp_bHideAll_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCanBeHiddenByOtherWidgets = { "bCanBeHiddenByOtherWidgets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &UHT_STATICS::NewProp_bCanBeHiddenByOtherWidgets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeHiddenByOtherWidgets_MetaData), NewProp_bCanBeHiddenByOtherWidgets_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowGenericClosing = { "bAllowGenericClosing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &UHT_STATICS::NewProp_bAllowGenericClosing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowGenericClosing_MetaData), NewProp_bAllowGenericClosing_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPlayOpenSound = { "bPlayOpenSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &UHT_STATICS::NewProp_bPlayOpenSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayOpenSound_MetaData), NewProp_bPlayOpenSound_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowCursor = { "bShowCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &UHT_STATICS::NewProp_bShowCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCursor_MetaData), NewProp_bShowCursor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPauseGame = { "bPauseGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &UHT_STATICS::NewProp_bPauseGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseGame_MetaData), NewProp_bPauseGame_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMenuStyle, BackgroundImage), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisablePlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHideAll,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCanBeHiddenByOtherWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowGenericClosing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPlayOpenSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPauseGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackgroundImage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOrionMenuStyle Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionMenuStyle,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionMenuStyle;
UClass* Z_Construct_UClass_UOrionMenuStyle(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionMenuStyle;
		if (!Z_Registration_Info_UClass_UOrionMenuStyle.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionMenuStyle"),
				Z_Registration_Info_UClass_UOrionMenuStyle.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UOrionMenuStyle.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOrionMenuStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionMenuStyle.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionMenuStyle.OuterSingleton;
}
#undef UHT_STATICS
UOrionMenuStyle::UOrionMenuStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionMenuStyle);
UOrionMenuStyle::~UOrionMenuStyle() {}
// ********** End Class UOrionMenuStyle ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionMenuStyle, TEXT("UOrionMenuStyle"), &Z_Registration_Info_UClass_UOrionMenuStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionMenuStyle), 1593838802U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h__Script_OrionUI_55567703749fd6d383aa6e0acb1f807ed3266a6e{
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
