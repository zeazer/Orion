// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Interfaces/IUIOrionRichTextBlock.h"

#ifdef ORIONUI_IUIOrionRichTextBlock_generated_h
#error "IUIOrionRichTextBlock.generated.h already included, missing '#pragma once' in IUIOrionRichTextBlock.h"
#endif
#define ORIONUI_IUIOrionRichTextBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UUIOrionRichTextBlock ************************************************
struct Z_Construct_UClass_UUIOrionRichTextBlock_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister();

#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ORIONUI_API UUIOrionRichTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIOrionRichTextBlock(UUIOrionRichTextBlock&&) = delete; \
	UUIOrionRichTextBlock(const UUIOrionRichTextBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ORIONUI_API, UUIOrionRichTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIOrionRichTextBlock); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIOrionRichTextBlock) \
	virtual ~UUIOrionRichTextBlock() = default;


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIOrionRichTextBlock(); \
	friend struct ::Z_Construct_UClass_UUIOrionRichTextBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIOrionRichTextBlock, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister) \
	DECLARE_SERIALIZER(UUIOrionRichTextBlock)


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIOrionRichTextBlock() {} \
public: \
	typedef UUIOrionRichTextBlock UClassType; \
	typedef IUIOrionRichTextBlock ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_7_PROLOG
#define FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIOrionRichTextBlock;

// ********** End Interface UUIOrionRichTextBlock **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
