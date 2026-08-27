// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionBlueprintFunctionLibrary.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOrionBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APlayerController(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionBlueprintFunctionLibrary(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionBlueprintFunctionLibrary(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnUserWidgetCreated **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_OrionUI_eventOnUserWidgetCreated_Parms
	{
		UUserWidget* UserWidgetCreated;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetCreated_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserWidgetCreated constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidgetCreated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserWidgetCreated constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserWidgetCreated Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UserWidgetCreated = { "UserWidgetCreated", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventOnUserWidgetCreated_Parms, UserWidgetCreated), Z_Construct_UClass_UUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidgetCreated_MetaData), NewProp_UserWidgetCreated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserWidgetCreated,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnUserWidgetCreated Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI, nullptr, "OnUserWidgetCreated__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_OrionUI_eventOnUserWidgetCreated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_OrionUI_eventOnUserWidgetCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnUserWidgetCreated ****************************************************

// ********** Begin Class UOrionBlueprintFunctionLibrary Function BetterProjectWorldLocationToWidgetPosition 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition_Statics
struct UHT_STATICS
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BetterProjectWorldLocationToWidgetPosition constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
	static void NewProp_bPlayerViewportRelative_SetBit(void* Obj)
	{
		((OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms*)Obj)->bPlayerViewportRelative = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerViewportRelative;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BetterProjectWorldLocationToWidgetPosition constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BetterProjectWorldLocationToWidgetPosition Property Definitions *******
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms, PlayerController), Z_Construct_UClass_APlayerController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPlayerViewportRelative = { "bPlayerViewportRelative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms), &UHT_STATICS::NewProp_bPlayerViewportRelative_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewportPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPlayerViewportRelative,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BetterProjectWorldLocationToWidgetPosition Property Definitions *********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "BetterProjectWorldLocationToWidgetPosition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OrionBlueprintFunctionLibrary_eventBetterProjectWorldLocationToWidgetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen_Statics
struct UHT_STATICS
{
	struct OrionBlueprintFunctionLibrary_eventClearScreen_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearScreen constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearScreen constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearScreen Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventClearScreen_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ClearScreen Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "ClearScreen", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OrionBlueprintFunctionLibrary_eventClearScreen_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OrionBlueprintFunctionLibrary_eventClearScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget_Statics
struct UHT_STATICS
{
	struct OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UOrionTooltipWidget> TooltipWidgetClass;
		UOrionTooltipWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateToolTipWidget constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TooltipWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateToolTipWidget constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateToolTipWidget Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_TooltipWidgetClass = { "TooltipWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms, TooltipWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionTooltipWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms, ReturnValue), Z_Construct_UClass_UOrionTooltipWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TooltipWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateToolTipWidget Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "CreateToolTipWidget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OrionBlueprintFunctionLibrary_eventCreateToolTipWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen_Statics
struct UHT_STATICS
{
	struct OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms
	{
		UObject* WorldContextObject;
		FName MenuId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisplayScreen constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisplayScreen constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisplayScreen Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_MenuId = { "MenuId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms, MenuId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MenuId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DisplayScreen Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "DisplayScreen", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OrionBlueprintFunctionLibrary_eventDisplayScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets_Statics
struct UHT_STATICS
{
	struct OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms
	{
		UObject* WorldContextObject;
		TMap<FName,TSubclassOf<UOrionMenuWidget>> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMenuWidgets constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMenuWidgets constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMenuWidgets Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionMenuWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMenuWidgets Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "GetMenuWidgets", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OrionBlueprintFunctionLibrary_eventGetMenuWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController_Statics
struct UHT_STATICS
{
	struct OrionBlueprintFunctionLibrary_eventGetUIController_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UOrionUIControllerBase> UIControllerClass;
		UOrionUIControllerBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUIController constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUIController constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUIController Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetUIController_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_UIControllerClass = { "UIControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetUIController_Parms, UIControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionUIControllerBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventGetUIController_Parms, ReturnValue), Z_Construct_UClass_UOrionUIControllerBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UIControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetUIController Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "GetUIController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OrionBlueprintFunctionLibrary_eventGetUIController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OrionBlueprintFunctionLibrary_eventGetUIController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen_Statics
struct UHT_STATICS
{
	struct OrionBlueprintFunctionLibrary_eventHideScreen_Parms
	{
		UObject* WorldContextObject;
		UOrionMenuWidget* MenuWidget;
		UOrionMenuWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function HideScreen constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HideScreen constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HideScreen Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventHideScreen_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventHideScreen_Parms, MenuWidget), Z_Construct_UClass_UOrionMenuWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidget_MetaData), NewProp_MenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OrionBlueprintFunctionLibrary_eventHideScreen_Parms, ReturnValue), Z_Construct_UClass_UOrionMenuWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HideScreen Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOrionBlueprintFunctionLibrary, nullptr, "HideScreen", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OrionBlueprintFunctionLibrary_eventHideScreen_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OrionBlueprintFunctionLibrary_eventHideScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "OrionBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OrionBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOrionBlueprintFunctionLibrary constinit property declarations ***********
// ********** End Class UOrionBlueprintFunctionLibrary constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BetterProjectWorldLocationToWidgetPosition"), .Pointer = &UOrionBlueprintFunctionLibrary::execBetterProjectWorldLocationToWidgetPosition },
		{ .NameUTF8 = UTF8TEXT("ClearScreen"), .Pointer = &UOrionBlueprintFunctionLibrary::execClearScreen },
		{ .NameUTF8 = UTF8TEXT("CreateToolTipWidget"), .Pointer = &UOrionBlueprintFunctionLibrary::execCreateToolTipWidget },
		{ .NameUTF8 = UTF8TEXT("DisplayScreen"), .Pointer = &UOrionBlueprintFunctionLibrary::execDisplayScreen },
		{ .NameUTF8 = UTF8TEXT("GetMenuWidgets"), .Pointer = &UOrionBlueprintFunctionLibrary::execGetMenuWidgets },
		{ .NameUTF8 = UTF8TEXT("GetUIController"), .Pointer = &UOrionBlueprintFunctionLibrary::execGetUIController },
		{ .NameUTF8 = UTF8TEXT("HideScreen"), .Pointer = &UOrionBlueprintFunctionLibrary::execHideScreen },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_BetterProjectWorldLocationToWidgetPosition, "BetterProjectWorldLocationToWidgetPosition" }, // e2cee61d448af149edd4dc94e8a7726828a50e05
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_ClearScreen, "ClearScreen" }, // cdcac0b561f40a1d97de2e37bc4a946b6a067560
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_CreateToolTipWidget, "CreateToolTipWidget" }, // 51ae536bb388f8f692368a55916f631234b6998e
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_DisplayScreen, "DisplayScreen" }, // 4b7ba14920701d93bf3d9dd37c8d86f7afb44914
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetMenuWidgets, "GetMenuWidgets" }, // 997629ae7bcd94f175387344bc8966b93af8b525
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_GetUIController, "GetUIController" }, // be5710e7288de936eb1216ec0c23e2ad8f442931
		{ &Z_Construct_UFunction_UOrionBlueprintFunctionLibrary_HideScreen, "HideScreen" }, // 72e22a75bd6508638bcb335040edf0e1dcbcc94f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOrionBlueprintFunctionLibrary,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOrionBlueprintFunctionLibrary_StaticRegisterNativesUOrionBlueprintFunctionLibrary()
{
	UClass* Class = UOrionBlueprintFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary;
UClass* Z_Construct_UClass_UOrionBlueprintFunctionLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOrionBlueprintFunctionLibrary;
		if (!Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OrionBlueprintFunctionLibrary"),
				Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.InnerSingleton,
				UOrionBlueprintFunctionLibrary_StaticRegisterNativesUOrionBlueprintFunctionLibrary,
				DataSizeOf<TClass>(),
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
	if (!Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary.OuterSingleton;
}
#undef UHT_STATICS
UOrionBlueprintFunctionLibrary::UOrionBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOrionBlueprintFunctionLibrary);
UOrionBlueprintFunctionLibrary::~UOrionBlueprintFunctionLibrary() {}
// ********** End Class UOrionBlueprintFunctionLibrary *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionBlueprintFunctionLibrary, TEXT("UOrionBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UOrionBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionBlueprintFunctionLibrary), 266346070U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h__Script_OrionUI_fde5a99b8dbf4322337637d60ff8846e255130b1{
	TEXT("/Script/OrionUI"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
