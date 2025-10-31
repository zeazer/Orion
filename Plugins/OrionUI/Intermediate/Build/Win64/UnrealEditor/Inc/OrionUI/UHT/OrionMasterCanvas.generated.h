// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/OrionMasterCanvas.h"

#ifdef ORIONUI_OrionMasterCanvas_generated_h
#error "OrionMasterCanvas.generated.h already included, missing '#pragma once' in OrionMasterCanvas.h"
#endif
#define ORIONUI_OrionMasterCanvas_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;

// ********** Begin Class UOrionMasterCanvas *******************************************************
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBackgroundImageLoaded); \
	DECLARE_FUNCTION(execHideBackgroundIamge); \
	DECLARE_FUNCTION(execDisplayBackgroundIamge);


struct Z_Construct_UClass_UOrionMasterCanvas_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionMasterCanvas(); \
	friend struct ::Z_Construct_UClass_UOrionMasterCanvas_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionMasterCanvas_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionMasterCanvas, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionMasterCanvas_NoRegister) \
	DECLARE_SERIALIZER(UOrionMasterCanvas) \
	virtual UObject* _getUObject() const override { return const_cast<UOrionMasterCanvas*>(this); }


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionMasterCanvas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionMasterCanvas(UOrionMasterCanvas&&) = delete; \
	UOrionMasterCanvas(const UOrionMasterCanvas&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionMasterCanvas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionMasterCanvas); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionMasterCanvas) \
	NO_API virtual ~UOrionMasterCanvas();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_14_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_17_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionMasterCanvas;

// ********** End Class UOrionMasterCanvas *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
