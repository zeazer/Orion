// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Model/OrionUIModelComponent.h"

#ifdef ORIONUI_OrionUIModelComponent_generated_h
#error "OrionUIModelComponent.generated.h already included, missing '#pragma once' in OrionUIModelComponent.h"
#endif
#define ORIONUI_OrionUIModelComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrionUIModelComponent ***************************************************
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdate);


struct Z_Construct_UClass_UOrionUIModelComponent_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIModelComponent_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionUIModelComponent(); \
	friend struct ::Z_Construct_UClass_UOrionUIModelComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionUIModelComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionUIModelComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionUIModelComponent_NoRegister) \
	DECLARE_SERIALIZER(UOrionUIModelComponent)


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionUIModelComponent(UOrionUIModelComponent&&) = delete; \
	UOrionUIModelComponent(const UOrionUIModelComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionUIModelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionUIModelComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionUIModelComponent) \
	NO_API virtual ~UOrionUIModelComponent();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_10_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionUIModelComponent;

// ********** End Class UOrionUIModelComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
