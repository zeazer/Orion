// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Widgets/OrionViewControllerWidget.h"

#ifdef ORIONUI_OrionViewControllerWidget_generated_h
#error "OrionViewControllerWidget.generated.h already included, missing '#pragma once' in OrionViewControllerWidget.h"
#endif
#define ORIONUI_OrionViewControllerWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;

// ********** Begin Class UOrionViewControllerWidget ***********************************************
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLoadComplete); \
	DECLARE_FUNCTION(execGetActiveView); \
	DECLARE_FUNCTION(execForceUpdate);


struct Z_Construct_UClass_UOrionViewControllerWidget_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionViewControllerWidget_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionViewControllerWidget(); \
	friend struct ::Z_Construct_UClass_UOrionViewControllerWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionViewControllerWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionViewControllerWidget, UOrionUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionViewControllerWidget_NoRegister) \
	DECLARE_SERIALIZER(UOrionViewControllerWidget)


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionViewControllerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionViewControllerWidget(UOrionViewControllerWidget&&) = delete; \
	UOrionViewControllerWidget(const UOrionViewControllerWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionViewControllerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionViewControllerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionViewControllerWidget) \
	NO_API virtual ~UOrionViewControllerWidget();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_20_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionViewControllerWidget;

// ********** End Class UOrionViewControllerWidget *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h

// ********** Begin Enum EViewDataMode *************************************************************
#define FOREACH_ENUM_EVIEWDATAMODE(op) \
	op(EViewDataMode::ViewData) \
	op(EViewDataMode::DataTable) 

enum class EViewDataMode : uint8;
template<> struct TIsUEnumClass<EViewDataMode> { enum { Value = true }; };
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewDataMode>();
// ********** End Enum EViewDataMode ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
