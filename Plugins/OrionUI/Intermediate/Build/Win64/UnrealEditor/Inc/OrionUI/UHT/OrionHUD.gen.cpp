// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/OrionHUD.h"
#include "Blueprint/UserWidgetPool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionHUD() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AHUD(ETypeConstructPhase);
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APlayerState(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_AOrionHUD(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_AOrionHUD(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AOrionHUD Function OpenStartMenu *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenStartMenu constinit property declarations *************************
// ********** End Function OpenStartMenu constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AOrionHUD, nullptr, "OpenStartMenu", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AOrionHUD_OpenStartMenu(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AOrionHUD::execOpenStartMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenStartMenu();
	P_NATIVE_END;
}
// ********** End Class AOrionHUD Function OpenStartMenu *******************************************

// ********** Begin Class AOrionHUD ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AOrionHUD_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class AOrionHUD constinit property declarations ********************************
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
// ********** End Class AOrionHUD constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OpenStartMenu"), .Pointer = &AOrionHUD::execOpenStartMenu },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOrionHUD_OpenStartMenu, "OpenStartMenu" }, // 1a18fbdc271a289f3b1557f2bd5a747d6298b4fd
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrionHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AOrionHUD Property Definitions *******************************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_MasterHUDWidgetClass = { "MasterHUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, MasterHUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionMasterCanvas, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterHUDWidgetClass_MetaData), NewProp_MasterHUDWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_TooltipSystemClass = { "TooltipSystemClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, TooltipSystemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionCascadingTooltipSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipSystemClass_MetaData), NewProp_TooltipSystemClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_MenuIdConvertList_ValueProp = { "MenuIdConvertList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MenuIdConvertList_Key_KeyProp = { "MenuIdConvertList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_MenuIdConvertList = { "MenuIdConvertList", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, MenuIdConvertList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuIdConvertList_MetaData), NewProp_MenuIdConvertList_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_StartMenus_ValueProp = { "StartMenus", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_StartMenus_Key_KeyProp = { "StartMenus_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerState, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_StartMenus = { "StartMenus", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, StartMenus), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMenus_MetaData), NewProp_StartMenus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MasterHUDWidget = { "MasterHUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, MasterHUDWidget), Z_Construct_UClass_UOrionMasterCanvas, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterHUDWidget_MetaData), NewProp_MasterHUDWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TooltipSystem = { "TooltipSystem", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, TooltipSystem), Z_Construct_UClass_UOrionCascadingTooltipSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipSystem_MetaData), NewProp_TooltipSystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_OrionMenuWidgets_ValueProp = { "OrionMenuWidgets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionMenuWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OrionMenuWidgets_Key_KeyProp = { "OrionMenuWidgets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_OrionMenuWidgets = { "OrionMenuWidgets", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, OrionMenuWidgets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionMenuWidgets_MetaData), NewProp_OrionMenuWidgets_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_UserWidgetPool = { "UserWidgetPool", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, UserWidgetPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidgetPool_MetaData), NewProp_UserWidgetPool_MetaData) }; // dfedfc69298e427f40dcd16df6310afa268262e9
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UIControllers_ValueProp = { "UIControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 1, Z_Construct_UClass_UOrionUIControllerBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_UIControllers_Key_KeyProp = { "UIControllers_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionUIControllerBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_UIControllers = { "UIControllers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, UIControllers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIControllers_MetaData), NewProp_UIControllers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterHUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipSystemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MenuIdConvertList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MenuIdConvertList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MenuIdConvertList,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartMenus_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartMenus_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartMenus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterHUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionMenuWidgets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionMenuWidgets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionMenuWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserWidgetPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UIControllers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UIControllers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UIControllers,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AOrionHUD Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AHUD,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AOrionHUD,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AOrionHUD_StaticRegisterNativesAOrionHUD()
{
	UClass* Class = AOrionHUD::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOrionHUD;
UClass* Z_Construct_UClass_AOrionHUD(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AOrionHUD;
		if (!Z_Registration_Info_UClass_AOrionHUD.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionHUD"),
				Z_Registration_Info_UClass_AOrionHUD.InnerSingleton,
				AOrionHUD_StaticRegisterNativesAOrionHUD,
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
		return Z_Registration_Info_UClass_AOrionHUD.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AOrionHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrionHUD.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AOrionHUD.OuterSingleton;
}
#undef UHT_STATICS
AOrionHUD::AOrionHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AOrionHUD);
AOrionHUD::~AOrionHUD() {}
// ********** End Class AOrionHUD ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOrionHUD, TEXT("AOrionHUD"), &Z_Registration_Info_UClass_AOrionHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrionHUD), 960200655U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h__Script_OrionUI_841b5c67c24c805c9054434cba3fa1e5fdbba2c0{
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
