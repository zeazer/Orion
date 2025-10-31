// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Widgets/OrionTooltipWidget.h"

#ifdef ORIONUI_OrionTooltipWidget_generated_h
#error "OrionTooltipWidget.generated.h already included, missing '#pragma once' in OrionTooltipWidget.h"
#endif
#define ORIONUI_OrionTooltipWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrionTooltipWidget ******************************************************
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UOrionTooltipWidget_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionTooltipWidget(); \
	friend struct ::Z_Construct_UClass_UOrionTooltipWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionTooltipWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionTooltipWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionTooltipWidget_NoRegister) \
	DECLARE_SERIALIZER(UOrionTooltipWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UOrionTooltipWidget*>(this); }


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionTooltipWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionTooltipWidget(UOrionTooltipWidget&&) = delete; \
	UOrionTooltipWidget(const UOrionTooltipWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionTooltipWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionTooltipWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionTooltipWidget) \
	NO_API virtual ~UOrionTooltipWidget();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_10_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_13_CALLBACK_WRAPPERS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionTooltipWidget;

// ********** End Class UOrionTooltipWidget ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
