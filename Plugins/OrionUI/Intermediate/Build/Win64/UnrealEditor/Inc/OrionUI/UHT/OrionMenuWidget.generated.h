// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Widgets/OrionMenuWidget.h"

#ifdef ORIONUI_OrionMenuWidget_generated_h
#error "OrionMenuWidget.generated.h already included, missing '#pragma once' in OrionMenuWidget.h"
#endif
#define ORIONUI_OrionMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrionMenuWidget *********************************************************
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnHide_Implementation(); \
	virtual void OnDisplay_Implementation(); \
	DECLARE_FUNCTION(execOnHideComplete); \
	DECLARE_FUNCTION(execOnHide); \
	DECLARE_FUNCTION(execOnDisplayComplete); \
	DECLARE_FUNCTION(execOnDisplay);


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UOrionMenuWidget_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget(ETypeConstructPhase);

#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionMenuWidget_Statics; \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionMenuWidget(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionMenuWidget, UOrionUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionMenuWidget) \
	DECLARE_SERIALIZER(UOrionMenuWidget)


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionMenuWidget(UOrionMenuWidget&&) = delete; \
	UOrionMenuWidget(const UOrionMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionMenuWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionMenuWidget) \
	NO_API virtual ~UOrionMenuWidget();


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_14_PROLOG
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_17_CALLBACK_WRAPPERS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionMenuWidget;

// ********** End Class UOrionMenuWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionMenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
