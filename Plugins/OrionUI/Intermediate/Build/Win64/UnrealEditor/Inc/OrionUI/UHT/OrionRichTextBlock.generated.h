// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/OrionRichTextBlock.h"

#ifdef ORIONUI_OrionRichTextBlock_generated_h
#error "OrionRichTextBlock.generated.h already included, missing '#pragma once' in OrionRichTextBlock.h"
#endif
#define ORIONUI_OrionRichTextBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrionRichTextBlock ******************************************************
struct Z_Construct_UClass_UOrionRichTextBlock_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UOrionRichTextBlock_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionRichTextBlock(); \
	friend struct ::Z_Construct_UClass_UOrionRichTextBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UOrionRichTextBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionRichTextBlock, UCommonRichTextBlock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UOrionRichTextBlock_NoRegister) \
	DECLARE_SERIALIZER(UOrionRichTextBlock) \
	virtual UObject* _getUObject() const override { return const_cast<UOrionRichTextBlock*>(this); }


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionRichTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionRichTextBlock(UOrionRichTextBlock&&) = delete; \
	UOrionRichTextBlock(const UOrionRichTextBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionRichTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionRichTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionRichTextBlock) \
	NO_API virtual ~UOrionRichTextBlock();


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_13_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_16_INCLASS_NO_PURE_DECLS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionRichTextBlock;

// ********** End Class UOrionRichTextBlock ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
