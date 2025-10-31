// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/OrionHUD.h"
#include "Blueprint/UserWidgetPool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionHUD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_AOrionHUD();
ORIONUI_API UClass* Z_Construct_UClass_AOrionHUD_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOrionHUD Function OpenStartMenu *****************************************
struct Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOrionHUD, nullptr, "OpenStartMenu", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOrionHUD_OpenStartMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrionHUD::execOpenStartMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenStartMenu();
	P_NATIVE_END;
}
// ********** End Class AOrionHUD Function OpenStartMenu *******************************************

// ********** Begin Class AOrionHUD ****************************************************************
void AOrionHUD::StaticRegisterNativesAOrionHUD()
{
	UClass* Class = AOrionHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenStartMenu", &AOrionHUD::execOpenStartMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOrionHUD;
UClass* AOrionHUD::GetPrivateStaticClass()
{
	using TClass = AOrionHUD;
	if (!Z_Registration_Info_UClass_AOrionHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionHUD"),
			Z_Registration_Info_UClass_AOrionHUD.InnerSingleton,
			StaticRegisterNativesAOrionHUD,
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
	return Z_Registration_Info_UClass_AOrionHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AOrionHUD_NoRegister()
{
	return AOrionHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOrionHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/OrionHUD.h" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterHUDWidgetClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipSystemClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuIdConvertList_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMenus_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterHUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipSystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionMenuWidgets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MasterHUDWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TooltipSystemClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuIdConvertList_ValueProp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MenuIdConvertList_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MenuIdConvertList;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartMenus_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartMenus_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StartMenus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterHUDWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TooltipSystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OrionMenuWidgets_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OrionMenuWidgets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OrionMenuWidgets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserWidgetPool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIControllers_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIControllers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UIControllers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOrionHUD_OpenStartMenu, "OpenStartMenu" }, // 524108939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrionHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidgetClass = { "MasterHUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, MasterHUDWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionMasterCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterHUDWidgetClass_MetaData), NewProp_MasterHUDWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystemClass = { "TooltipSystemClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, TooltipSystemClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipSystemClass_MetaData), NewProp_TooltipSystemClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_ValueProp = { "MenuIdConvertList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_Key_KeyProp = { "MenuIdConvertList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList = { "MenuIdConvertList", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, MenuIdConvertList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuIdConvertList_MetaData), NewProp_MenuIdConvertList_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_ValueProp = { "StartMenus", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_Key_KeyProp = { "StartMenus_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus = { "StartMenus", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, StartMenus), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMenus_MetaData), NewProp_StartMenus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidget = { "MasterHUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, MasterHUDWidget), Z_Construct_UClass_UOrionMasterCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterHUDWidget_MetaData), NewProp_MasterHUDWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystem = { "TooltipSystem", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, TooltipSystem), Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipSystem_MetaData), NewProp_TooltipSystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_ValueProp = { "OrionMenuWidgets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionMenuWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_Key_KeyProp = { "OrionMenuWidgets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets = { "OrionMenuWidgets", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, OrionMenuWidgets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionMenuWidgets_MetaData), NewProp_OrionMenuWidgets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_UserWidgetPool = { "UserWidgetPool", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, UserWidgetPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidgetPool_MetaData), NewProp_UserWidgetPool_MetaData) }; // 3703895965
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_ValueProp = { "UIControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_Key_KeyProp = { "UIControllers_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers = { "UIControllers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, UIControllers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIControllers_MetaData), NewProp_UIControllers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrionHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_UserWidgetPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOrionHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrionHUD_Statics::ClassParams = {
	&AOrionHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOrionHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AOrionHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOrionHUD()
{
	if (!Z_Registration_Info_UClass_AOrionHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrionHUD.OuterSingleton, Z_Construct_UClass_AOrionHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOrionHUD.OuterSingleton;
}
AOrionHUD::AOrionHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AOrionHUD);
AOrionHUD::~AOrionHUD() {}
// ********** End Class AOrionHUD ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOrionHUD, AOrionHUD::StaticClass, TEXT("AOrionHUD"), &Z_Registration_Info_UClass_AOrionHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrionHUD), 1514007185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h__Script_OrionUI_3864639678(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
