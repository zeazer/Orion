// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionBlueprintFunctionLibrary.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ORIONUI_API UClass* Z_Construct_UClass_UOrionBlueprintFunctionLibrary();
ORIONUI_API UClass* Z_Construct_UClass_UOrionBlueprintFunctionLibrary_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget_NoRegister();
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister();
ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnUserWidgetCreated **************************************************
struct Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics
{
	struct _Script_OrionUI_eventOnUserWidgetCreated_Parms
	{
		UUserWidget* UserWidgetCreated;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetCreated_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidgetCreated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::NewProp_UserWidgetCreated = { "UserWidgetCreated", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventOnUserWidgetCreated_Parms, UserWidgetCreated), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidgetCreated_MetaData), NewProp_UserWidgetCreated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::NewProp_UserWidgetCreated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionUI, nullptr, "OnUserWidgetCreated__DelegateSignature", Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::_Script_OrionUI_eventOnUserWidgetCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::_Script_OrionUI_eventOnUserWidgetCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserWidgetCreated_DelegateWrapper(const FScriptDelegate& OnUserWidgetCreated, UUserWidget* UserWidgetCreated)
{
	struct _Script_OrionUI_eventOnUserWidgetCreated_Parms
	{
		UUserWidget* UserWidgetCreated;
	};
	_Script_OrionUI_eventOnUserWidgetCreated_Parms Parms;
	Parms.UserWidgetCreated=UserWidgetCreated;
	OnUserWidgetCreated.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUserWidgetCreated ****************************************************

// ********** Begin Class UOrionBlueprintFunctionLibrary Function BetterProjectWorldLocationToWidgetPosition 
struct Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics
{
	struct OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms
	{
		APlayerController* PlayerController;
		FVector WorldLocation;
		FVector2D ViewportPosition;
		bool bPlayerViewportRelative;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
	static void NewProp_bPlayerViewportRelative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerViewportRelative;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_bPlayerViewportRelative_SetBit(void* Obj)
{
	((OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms*)Obj)->bPlayerViewportRelative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_bPlayerViewportRelative = { "bPlayerViewportRelative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms), &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_bPlayerViewportRelative_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms), &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_ViewportPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_bPlayerViewportRelative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "BetterProjectWorldLocationToWidgetPosition", Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionBlueprintFunctionLibrary::execBetterProjectWorldLocationToWidgetPosition)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
	P_GET_UBOOL(Z_Param_bPlayerViewportRelative);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionBlueprintFunctionLibrary::BetterProjectWorldLocationToWidgetPosition(Z_Param_PlayerController,Z_Param_WorldLocation,Z_Param_Out_ViewportPosition,Z_Param_bPlayerViewportRelative);
	P_NATIVE_END;
}
// ********** End Class UOrionBlueprintFunctionLibrary Function BetterProjectWorldLocationToWidgetPosition 

// ********** Begin Class UOrionBlueprintFunctionLibrary Function ClearScreen **********************
struct Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics
{
	struct OrionBlueprintFunctionLibrary_eventClearScreen_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventClearScreen_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "ClearScreen", Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::OrionBlueprintFunctionLibrary_eventClearScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::OrionBlueprintFunctionLibrary_eventClearScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionBlueprintFunctionLibrary::execClearScreen)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionBlueprintFunctionLibrary::ClearScreen(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UOrionBlueprintFunctionLibrary Function ClearScreen ************************

// ********** Begin Class UOrionBlueprintFunctionLibrary Function CreateToolTipWidget **************
struct Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics
{
	struct OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UOrionTooltipWidget> TooltipWidgetClass;
		UOrionTooltipWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TooltipWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::NewProp_TooltipWidgetClass = { "TooltipWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms, TooltipWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionTooltipWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms, ReturnValue), Z_Construct_UClass_UOrionTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::NewProp_TooltipWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "CreateToolTipWidget", Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionBlueprintFunctionLibrary::execCreateToolTipWidget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_TooltipWidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionTooltipWidget**)Z_Param__Result=UOrionBlueprintFunctionLibrary::CreateToolTipWidget(Z_Param_WorldContextObject,Z_Param_TooltipWidgetClass);
	P_NATIVE_END;
}
// ********** End Class UOrionBlueprintFunctionLibrary Function CreateToolTipWidget ****************

// ********** Begin Class UOrionBlueprintFunctionLibrary Function DisplayScreen ********************
struct Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics
{
	struct OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms
	{
		UObject* WorldContextObject;
		FName MenuId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::NewProp_MenuId = { "MenuId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms, MenuId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::NewProp_MenuId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "DisplayScreen", Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionBlueprintFunctionLibrary::execDisplayScreen)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_MenuId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionBlueprintFunctionLibrary::DisplayScreen(Z_Param_WorldContextObject,Z_Param_MenuId);
	P_NATIVE_END;
}
// ********** End Class UOrionBlueprintFunctionLibrary Function DisplayScreen **********************

// ********** Begin Class UOrionBlueprintFunctionLibrary Function GetMenuWidgets *******************
struct Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics
{
	struct OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms
	{
		UObject* WorldContextObject;
		TMap<FName,TSubclassOf<UOrionMenuWidget>> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionMenuWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "GetMenuWidgets", Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionBlueprintFunctionLibrary::execGetMenuWidgets)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,TSubclassOf<UOrionMenuWidget>>*)Z_Param__Result=UOrionBlueprintFunctionLibrary::GetMenuWidgets(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UOrionBlueprintFunctionLibrary Function GetMenuWidgets *********************

// ********** Begin Class UOrionBlueprintFunctionLibrary Function GetUIController ******************
struct Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics
{
	struct OrionBlueprintFunctionLibrary_eventGetUIController_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UOrionUIControllerBase> UIControllerClass;
		UOrionUIControllerBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetUIController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::NewProp_UIControllerClass = { "UIControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetUIController_Parms, UIControllerClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetUIController_Parms, ReturnValue), Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::NewProp_UIControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "GetUIController", Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::OrionBlueprintFunctionLibrary_eventGetUIController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::OrionBlueprintFunctionLibrary_eventGetUIController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionBlueprintFunctionLibrary::execGetUIController)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_UIControllerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionUIControllerBase**)Z_Param__Result=UOrionBlueprintFunctionLibrary::GetUIController(Z_Param_WorldContextObject,Z_Param_UIControllerClass);
	P_NATIVE_END;
}
// ********** End Class UOrionBlueprintFunctionLibrary Function GetUIController ********************

// ********** Begin Class UOrionBlueprintFunctionLibrary Function HideScreen ***********************
struct Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics
{
	struct OrionBlueprintFunctionLibrary_eventHideScreen_Parms
	{
		UObject* WorldContextObject;
		UOrionMenuWidget* MenuWidget;
		UOrionMenuWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventHideScreen_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventHideScreen_Parms, MenuWidget), Z_Construct_UClass_UOrionMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidget_MetaData), NewProp_MenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventHideScreen_Parms, ReturnValue), Z_Construct_UClass_UOrionMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::NewProp_MenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "HideScreen", Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::OrionBlueprintFunctionLibrary_eventHideScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::OrionBlueprintFunctionLibrary_eventHideScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionBlueprintFunctionLibrary::execHideScreen)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UOrionMenuWidget,Z_Param_MenuWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionMenuWidget**)Z_Param__Result=UOrionBlueprintFunctionLibrary::HideScreen(Z_Param_WorldContextObject,Z_Param_MenuWidget);
	P_NATIVE_END;
}
// ********** End Class UOrionBlueprintFunctionLibrary Function HideScreen *************************

// ********** Begin Class UOrionBlueprintFunctionLibrary *******************************************
void UOrionBlueprintFunctionLibrary::StaticRegisterNativesUOrionBlueprintFunctionLibrary()
{
	UClass* Class = UOrionBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BetterProjectWorldLocationToWidgetPosition", &UOrionBlueprintFunctionLibrary::execBetterProjectWorldLocationToWidgetPosition },
		{ "ClearScreen", &UOrionBlueprintFunctionLibrary::execClearScreen },
		{ "CreateToolTipWidget", &UOrionBlueprintFunctionLibrary::execCreateToolTipWidget },
		{ "DisplayScreen", &UOrionBlueprintFunctionLibrary::execDisplayScreen },
		{ "GetMenuWidgets", &UOrionBlueprintFunctionLibrary::execGetMenuWidgets },
		{ "GetUIController", &UOrionBlueprintFunctionLibrary::execGetUIController },
		{ "HideScreen", &UOrionBlueprintFunctionLibrary::execHideScreen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary;
UClass* UOrionBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UOrionBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OrionBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUOrionBlueprintFunctionLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionBlueprintFunctionLibrary_NoRegister()
{
	return UOrionBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition, "BetterProjectWorldLocationToWidgetPosition" }, // 3641917350
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen, "ClearScreen" }, // 2579716290
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget, "CreateToolTipWidget" }, // 2144726813
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen, "DisplayScreen" }, // 1963223714
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets, "GetMenuWidgets" }, // 1736352557
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController, "GetUIController" }, // 666022511
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen, "HideScreen" }, // 356329275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics::ClassParams = {
	&UOrionBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.OuterSingleton;
}
UOrionBlueprintFunctionLibrary::UOrionBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionBlueprintFunctionLibrary);
UOrionBlueprintFunctionLibrary::~UOrionBlueprintFunctionLibrary() {}
// ********** End Class UOrionBlueprintFunctionLibrary *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h__Script_OrionUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionBlueprintFunctionLibrary, UOrionBlueprintFunctionLibrary::StaticClass, TEXT("UOrionBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionBlueprintFunctionLibrary), 534801662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h__Script_OrionUI_2349405651(TEXT("/Script/OrionUI"),
	Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h__Script_OrionUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h__Script_OrionUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
