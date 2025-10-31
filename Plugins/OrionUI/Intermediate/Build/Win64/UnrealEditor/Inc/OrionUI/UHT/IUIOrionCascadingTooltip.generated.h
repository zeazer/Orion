// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Interfaces/IUIOrionCascadingTooltip.h"

#ifdef ORIONUI_IUIOrionCascadingTooltip_generated_h
#error "IUIOrionCascadingTooltip.generated.h already included, missing '#pragma once' in IUIOrionCascadingTooltip.h"
#endif
#define ORIONUI_IUIOrionCascadingTooltip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UUIOrionCascadingTooltip *********************************************
struct Z_Construct_UClass_UUIOrionCascadingTooltip_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ORIONUI_API UUIOrionCascadingTooltip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIOrionCascadingTooltip(UUIOrionCascadingTooltip&&) = delete; \
	UUIOrionCascadingTooltip(const UUIOrionCascadingTooltip&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ORIONUI_API, UUIOrionCascadingTooltip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIOrionCascadingTooltip); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIOrionCascadingTooltip) \
	virtual ~UUIOrionCascadingTooltip() = default;


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIOrionCascadingTooltip(); \
	friend struct ::Z_Construct_UClass_UUIOrionCascadingTooltip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIOrionCascadingTooltip, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister) \
	DECLARE_SERIALIZER(UUIOrionCascadingTooltip)


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIOrionCascadingTooltip() {} \
public: \
	typedef UUIOrionCascadingTooltip UClassType; \
	typedef IUIOrionCascadingTooltip ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h_8_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIOrionCascadingTooltip;

// ********** End Interface UUIOrionCascadingTooltip ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionCascadingTooltip_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
