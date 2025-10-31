// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Structs/OrionTooltipSettingStyle.h"

#ifdef ORIONUI_OrionTooltipSettingStyle_generated_h
#error "OrionTooltipSettingStyle.generated.h already included, missing '#pragma once' in OrionTooltipSettingStyle.h"
#endif
#define ORIONUI_OrionTooltipSettingStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrionTooltipSettingStyle ************************************************
struct Z_Construct_UClass_UOrionTooltipSettingStyle_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionTooltipSettingStyle(); \
	friend struct ::Z_Construct_UClass_UOrionTooltipSettingStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionTooltipSettingStyle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister) \
	DECLARE_SERIALIZER(UOrionTooltipSettingStyle)


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionTooltipSettingStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionTooltipSettingStyle(UOrionTooltipSettingStyle&&) = delete; \
	UOrionTooltipSettingStyle(const UOrionTooltipSettingStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionTooltipSettingStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionTooltipSettingStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionTooltipSettingStyle) \
	NO_API virtual ~UOrionTooltipSettingStyle();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_14_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_17_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionTooltipSettingStyle;

// ********** End Class UOrionTooltipSettingStyle **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h

// ********** Begin Enum EToolTipMode **************************************************************
#define FOREACH_ENUM_ETOOLTIPMODE(op) \
	op(EToolTipMode::Hover) \
	op(EToolTipMode::LeftClick) \
	op(EToolTipMode::RightClick) \
	op(EToolTipMode::MiddleClick) 

enum class EToolTipMode : uint8;
template<> struct TIsUEnumClass<EToolTipMode> { enum { Value = true }; };
template<> ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolTipMode>();
// ********** End Enum EToolTipMode ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
