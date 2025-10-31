// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Structs/ViewData.h"

#ifdef ORIONUI_ViewData_generated_h
#error "ViewData.generated.h already included, missing '#pragma once' in ViewData.h"
#endif
#define ORIONUI_ViewData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewData ****************************************************************
struct Z_Construct_UClass_UViewData_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UViewData_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewData(); \
	friend struct ::Z_Construct_UClass_UViewData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UViewData_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UViewData_NoRegister) \
	DECLARE_SERIALIZER(UViewData)


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewData(UViewData&&) = delete; \
	UViewData(const UViewData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewData) \
	NO_API virtual ~UViewData();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_5_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_8_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewData;

// ********** End Class UViewData ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
