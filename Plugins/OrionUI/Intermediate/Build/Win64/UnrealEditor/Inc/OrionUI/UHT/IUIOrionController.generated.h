// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Interfaces/IUIOrionController.h"

#ifdef ORIONUI_IUIOrionController_generated_h
#error "IUIOrionController.generated.h already included, missing '#pragma once' in IUIOrionController.h"
#endif
#define ORIONUI_IUIOrionController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UUIOrionController ***************************************************
struct Z_Construct_UClass_UUIOrionController_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionController(ETypeConstructPhase);

#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ORIONUI_API UUIOrionController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIOrionController(UUIOrionController&&) = delete; \
	UUIOrionController(const UUIOrionController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ORIONUI_API, UUIOrionController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIOrionController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIOrionController) \
	virtual ~UUIOrionController() = default;


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_UUIOrionController_Statics; \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UUIOrionController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UUIOrionController, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UUIOrionController) \
	DECLARE_SERIALIZER(UUIOrionController)


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIOrionController() {} \
public: \
	typedef UUIOrionController UClassType; \
	typedef IUIOrionController ThisClass; \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_8_PROLOG
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIOrionController;

// ********** End Interface UUIOrionController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
