// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Async/PoolAsyncAction.h"

#ifdef ORIONUI_PoolAsyncAction_generated_h
#error "PoolAsyncAction.generated.h already included, missing '#pragma once' in PoolAsyncAction.h"
#endif
#define ORIONUI_PoolAsyncAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UCommonUserWidget;
class UObject;
class UPoolAsyncAction;

// ********** Begin Class UPoolAsyncAction *********************************************************
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInternalCompleted); \
	DECLARE_FUNCTION(execInternalTick); \
	DECLARE_FUNCTION(execPoolAsyncNode);


struct Z_Construct_UClass_UPoolAsyncAction_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncAction(ETypeConstructPhase);

#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UPoolAsyncAction_Statics; \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UPoolAsyncAction(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UPoolAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UPoolAsyncAction) \
	DECLARE_SERIALIZER(UPoolAsyncAction)


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoolAsyncAction(UPoolAsyncAction&&) = delete; \
	UPoolAsyncAction(const UPoolAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolAsyncAction) \
	NO_API virtual ~UPoolAsyncAction();


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_14_PROLOG
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoolAsyncAction;

// ********** End Class UPoolAsyncAction ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
