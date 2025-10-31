// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Widgets/OrionAnimUserWidget.h"

#ifdef ORIONUI_OrionAnimUserWidget_generated_h
#error "OrionAnimUserWidget.generated.h already included, missing '#pragma once' in OrionAnimUserWidget.h"
#endif
#define ORIONUI_OrionAnimUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrionAnimUserWidget *****************************************************
struct Z_Construct_UClass_UOrionAnimUserWidget_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionAnimUserWidget_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionAnimUserWidget(); \
	friend struct ::Z_Construct_UClass_UOrionAnimUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionAnimUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionAnimUserWidget, UOrionUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionAnimUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UOrionAnimUserWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UOrionAnimUserWidget*>(this); }


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionAnimUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionAnimUserWidget(UOrionAnimUserWidget&&) = delete; \
	UOrionAnimUserWidget(const UOrionAnimUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionAnimUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionAnimUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionAnimUserWidget) \
	NO_API virtual ~UOrionAnimUserWidget();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_13_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionAnimUserWidget;

// ********** End Class UOrionAnimUserWidget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
