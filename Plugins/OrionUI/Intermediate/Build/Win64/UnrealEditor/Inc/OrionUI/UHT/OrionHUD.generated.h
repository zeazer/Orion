// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/OrionHUD.h"

#ifdef ORIONUI_OrionHUD_generated_h
#error "OrionHUD.generated.h already included, missing '#pragma once' in OrionHUD.h"
#endif
#define ORIONUI_OrionHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOrionHUD ****************************************************************
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenStartMenu);


struct Z_Construct_UClass_AOrionHUD_Statics;
ORIONUI_API UClass* Z_Construct_UClass_AOrionHUD(ETypeConstructPhase);

#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AOrionHUD_Statics; \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_AOrionHUD(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AOrionHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_AOrionHUD) \
	DECLARE_SERIALIZER(AOrionHUD)


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOrionHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOrionHUD(AOrionHUD&&) = delete; \
	AOrionHUD(const AOrionHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrionHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrionHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOrionHUD) \
	NO_API virtual ~AOrionHUD();


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_15_PROLOG
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOrionHUD;

// ********** End Class AOrionHUD ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
