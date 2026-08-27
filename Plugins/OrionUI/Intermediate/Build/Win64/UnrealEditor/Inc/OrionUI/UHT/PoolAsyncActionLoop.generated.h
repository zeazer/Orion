// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Async/PoolAsyncActionLoop.h"

#ifdef ORIONUI_PoolAsyncActionLoop_generated_h
#error "PoolAsyncActionLoop.generated.h already included, missing '#pragma once' in PoolAsyncActionLoop.h"
#endif
#define ORIONUI_PoolAsyncActionLoop_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
class UOrionUserWidget;
class UPoolAsyncActionLoop;

// ********** Begin Class UPoolAsyncActionLoop *****************************************************
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInternalCompleted); \
	DECLARE_FUNCTION(execInternalTick); \
	DECLARE_FUNCTION(execPoolLoopAsyncNode);


struct Z_Construct_UClass_UPoolAsyncActionLoop_Statics;
ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncActionLoop(ETypeConstructPhase);

#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UPoolAsyncActionLoop_Statics; \
	friend ORIONUI_API UClass* ::Z_Construct_UClass_UPoolAsyncActionLoop(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UPoolAsyncActionLoop, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), Z_Construct_UClass_UPoolAsyncActionLoop) \
	DECLARE_SERIALIZER(UPoolAsyncActionLoop)


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolAsyncActionLoop(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoolAsyncActionLoop(UPoolAsyncActionLoop&&) = delete; \
	UPoolAsyncActionLoop(const UPoolAsyncActionLoop&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolAsyncActionLoop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolAsyncActionLoop); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolAsyncActionLoop) \
	NO_API virtual ~UPoolAsyncActionLoop();


#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_14_PROLOG
#define FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoolAsyncActionLoop;

// ********** End Class UPoolAsyncActionLoop *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
