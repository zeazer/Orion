// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Interfaces/IUIOrionAnimUserWidget.h"

#ifdef ORIONUI_IUIOrionAnimUserWidget_generated_h
#error "IUIOrionAnimUserWidget.generated.h already included, missing '#pragma once' in IUIOrionAnimUserWidget.h"
#endif
#define ORIONUI_IUIOrionAnimUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOrionAnimMode : uint8;

// ********** Begin Interface UUIOrionAnimUserWidget ***********************************************
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AnimFunction_Implementation(EOrionAnimMode AnimMode) {}; \
	DECLARE_FUNCTION(execAnimFunction);


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UUIOrionAnimUserWidget_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ORIONUI_API UUIOrionAnimUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIOrionAnimUserWidget(UUIOrionAnimUserWidget&&) = delete; \
	UUIOrionAnimUserWidget(const UUIOrionAnimUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ORIONUI_API, UUIOrionAnimUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIOrionAnimUserWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIOrionAnimUserWidget) \
	virtual ~UUIOrionAnimUserWidget() = default;


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIOrionAnimUserWidget(); \
	friend struct ::Z_Construct_UClass_UUIOrionAnimUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIOrionAnimUserWidget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UUIOrionAnimUserWidget)


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIOrionAnimUserWidget() {} \
public: \
	typedef UUIOrionAnimUserWidget UClassType; \
	typedef IUIOrionAnimUserWidget ThisClass; \
	static void Execute_AnimFunction(UObject* O, EOrionAnimMode AnimMode); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_15_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_CALLBACK_WRAPPERS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIOrionAnimUserWidget;

// ********** End Interface UUIOrionAnimUserWidget *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h

// ********** Begin Enum EOrionAnimMode ************************************************************
#define FOREACH_ENUM_EORIONANIMMODE(op) \
	op(EOrionAnimMode::InAnim) \
	op(EOrionAnimMode::OutAnim) 

enum class EOrionAnimMode : uint8;
template<> struct TIsUEnumClass<EOrionAnimMode> { enum { Value = true }; };
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrionAnimMode>();
// ********** End Enum EOrionAnimMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
