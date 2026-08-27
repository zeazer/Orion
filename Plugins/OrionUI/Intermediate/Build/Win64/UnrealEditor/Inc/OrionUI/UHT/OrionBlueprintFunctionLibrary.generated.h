// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionBlueprintFunctionLibrary.h"

#ifdef ORIONUI_OrionBlueprintFunctionLibrary_generated_h
#error "OrionBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in OrionBlueprintFunctionLibrary.h"
#endif
#define ORIONUI_OrionBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UClass;
class UObject;
class UOrionMenuWidget;
class UOrionTooltipWidget;
class UOrionUIControllerBase;
class UUserWidget;

// ********** Begin Class UOrionBlueprintFunctionLibrary *******************************************
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateToolTipWidget); \
	DECLARE_FUNCTION(execBetterProjectWorldLocationToWidgetPosition); \
	DECLARE_FUNCTION(execGetUIController); \
	DECLARE_FUNCTION(execClearScreen); \
	DECLARE_FUNCTION(execHideScreen); \
	DECLARE_FUNCTION(execDisplayScreen); \
	DECLARE_FUNCTION(execGetMenuWidgets);


struct Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionBlueprintFunctionLibrary(ETypeConstructPhase);

#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics; \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionBlueprintFunctionLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionBlueprintFunctionLibrary) \
	DECLARE_SERIALIZER(UOrionBlueprintFunctionLibrary)


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionBlueprintFunctionLibrary(UOrionBlueprintFunctionLibrary&&) = delete; \
	UOrionBlueprintFunctionLibrary(const UOrionBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionBlueprintFunctionLibrary) \
	NO_API virtual ~UOrionBlueprintFunctionLibrary();


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_14_PROLOG
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionBlueprintFunctionLibrary;

// ********** End Class UOrionBlueprintFunctionLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
