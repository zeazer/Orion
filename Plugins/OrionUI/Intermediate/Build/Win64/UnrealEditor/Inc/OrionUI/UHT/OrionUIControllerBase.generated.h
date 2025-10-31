// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Controllers/OrionUIControllerBase.h"

#ifdef ORIONUI_OrionUIControllerBase_generated_h
#error "OrionUIControllerBase.generated.h already included, missing '#pragma once' in OrionUIControllerBase.h"
#endif
#define ORIONUI_OrionUIControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UWidget;

// ********** Begin Class UOrionUIControllerBase ***************************************************
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveView);


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UOrionUIControllerBase_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionUIControllerBase(); \
	friend struct ::Z_Construct_UClass_UOrionUIControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionUIControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionUIControllerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionUIControllerBase_NoRegister) \
	DECLARE_SERIALIZER(UOrionUIControllerBase)


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionUIControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionUIControllerBase(UOrionUIControllerBase&&) = delete; \
	UOrionUIControllerBase(const UOrionUIControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionUIControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionUIControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionUIControllerBase) \
	NO_API virtual ~UOrionUIControllerBase();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_11_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_14_CALLBACK_WRAPPERS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionUIControllerBase;

// ********** End Class UOrionUIControllerBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
