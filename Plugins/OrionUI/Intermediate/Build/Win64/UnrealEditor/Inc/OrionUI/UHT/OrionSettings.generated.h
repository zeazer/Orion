// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSettings.h"

#ifdef ORIONUI_OrionSettings_generated_h
#error "OrionSettings.generated.h already included, missing '#pragma once' in OrionSettings.h"
#endif
#define ORIONUI_OrionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrionSettings ***********************************************************
struct Z_Construct_UClass_UOrionSettings_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionSettings(ETypeConstructPhase);

#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSettings_Statics; \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionSettings) \
	DECLARE_SERIALIZER(UOrionSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSettings(UOrionSettings&&) = delete; \
	UOrionSettings(const UOrionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSettings) \
	NO_API virtual ~UOrionSettings();


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_18_PROLOG
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSettings;

// ********** End Class UOrionSettings *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h

// ********** Begin Enum EViewType *****************************************************************
#define FOREACH_ENUM_EVIEWTYPE(op) \
	op(PC) \
	op(PS5) \
	op(XBOXONE) \
	op(COUNT) 

enum EViewType : uint8;
template<> UE_NODEBUG ORIONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewType>();
// ********** End Enum EViewType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
