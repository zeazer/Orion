// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/OrionActivatableWidgetStack.h"

#ifdef ORIONUI_OrionActivatableWidgetStack_generated_h
#error "OrionActivatableWidgetStack.generated.h already included, missing '#pragma once' in OrionActivatableWidgetStack.h"
#endif
#define ORIONUI_OrionActivatableWidgetStack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrionActivatableWidgetStack *********************************************
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearToBase);


struct Z_Construct_UClass_UOrionActivatableWidgetStack_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionActivatableWidgetStack(); \
	friend struct ::Z_Construct_UClass_UOrionActivatableWidgetStack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionActivatableWidgetStack, UCommonActivatableWidgetStack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister) \
	DECLARE_SERIALIZER(UOrionActivatableWidgetStack)


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionActivatableWidgetStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionActivatableWidgetStack(UOrionActivatableWidgetStack&&) = delete; \
	UOrionActivatableWidgetStack(const UOrionActivatableWidgetStack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionActivatableWidgetStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionActivatableWidgetStack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionActivatableWidgetStack) \
	NO_API virtual ~UOrionActivatableWidgetStack();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_12_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionActivatableWidgetStack;

// ********** End Class UOrionActivatableWidgetStack ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
