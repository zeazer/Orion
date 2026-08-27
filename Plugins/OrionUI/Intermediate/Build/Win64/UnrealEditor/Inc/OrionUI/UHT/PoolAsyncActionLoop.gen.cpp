// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Async/PoolAsyncActionLoop.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodePoolAsyncActionLoop() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncActionLoop(ETypeConstructPhase);
ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget(ETypeConstructPhase);
ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncActionLoop(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FPoolLoopOutputPin ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_OrionUI_eventPoolLoopOutputPin_Parms
	{
		UOrionUserWidget* OrionUserWidget;
		int32 IndexCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrionUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPoolLoopOutputPin constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionUserWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPoolLoopOutputPin constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPoolLoopOutputPin Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OrionUserWidget = { "OrionUserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventPoolLoopOutputPin_Parms, OrionUserWidget), Z_Construct_UClass_UOrionUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrionUserWidget_MetaData), NewProp_OrionUserWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_IndexCount = { "IndexCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventPoolLoopOutputPin_Parms, IndexCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrionUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IndexCount,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FPoolLoopOutputPin Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI, nullptr, "PoolLoopOutputPin__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_OrionUI_eventPoolLoopOutputPin_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_OrionUI_eventPoolLoopOutputPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FPoolLoopOutputPin ******************************************************

// ********** Begin Class UPoolAsyncActionLoop Function InternalCompleted **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InternalCompleted constinit property declarations *********************
// ********** End Function InternalCompleted constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPoolAsyncActionLoop, nullptr, "InternalCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPoolAsyncActionLoop::execInternalCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InternalCompleted();
	P_NATIVE_END;
}
// ********** End Class UPoolAsyncActionLoop Function InternalCompleted ****************************

// ********** Begin Class UPoolAsyncActionLoop Function InternalTick *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InternalTick constinit property declarations **************************
// ********** End Function InternalTick constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPoolAsyncActionLoop, nullptr, "InternalTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPoolAsyncActionLoop::execInternalTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InternalTick();
	P_NATIVE_END;
}
// ********** End Class UPoolAsyncActionLoop Function InternalTick *********************************

// ********** Begin Class UPoolAsyncActionLoop Function PoolLoopAsyncNode **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics
struct UHT_STATICS
{
	struct PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms
	{
		const UObject* WorldContextObject;
		TSoftClassPtr<UOrionUserWidget>  PoolWidget;
		int32 Count;
		UPoolAsyncActionLoop* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionUIAsynch" },
		{ "CPP_Default_Count", "1" },
		{ "MetaClass", "/Script/UMG.UserWidget" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PoolLoopAsyncNode constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PoolWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PoolLoopAsyncNode constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PoolLoopAsyncNode Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams UHT_STATICS::NewProp_PoolWidget = { "PoolWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, PoolWidget), Z_Construct_UClass_UOrionUserWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, ReturnValue), Z_Construct_UClass_UPoolAsyncActionLoop, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PoolWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PoolLoopAsyncNode Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPoolAsyncActionLoop, nullptr, "PoolLoopAsyncNode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPoolAsyncActionLoop::execPoolLoopAsyncNode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_SOFTCLASS(TSoftClassPtr<UOrionUserWidget> ,Z_Param_PoolWidget);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPoolAsyncActionLoop**)Z_Param__Result=UPoolAsyncActionLoop::PoolLoopAsyncNode(Z_Param_WorldContextObject,Z_Param_PoolWidget,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UPoolAsyncActionLoop Function PoolLoopAsyncNode ****************************

// ********** Begin Class UPoolAsyncActionLoop *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UPoolAsyncActionLoop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Async/PoolAsyncActionLoop.h" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Category", "OrionUIAsynch" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultingWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPoolAsyncActionLoop constinit property declarations *********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResultingWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPoolAsyncActionLoop constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InternalCompleted"), .Pointer = &UPoolAsyncActionLoop::execInternalCompleted },
		{ .NameUTF8 = UTF8TEXT("InternalTick"), .Pointer = &UPoolAsyncActionLoop::execInternalTick },
		{ .NameUTF8 = UTF8TEXT("PoolLoopAsyncNode"), .Pointer = &UPoolAsyncActionLoop::execPoolLoopAsyncNode },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted, "InternalCompleted" }, // efcc0573ad5f51e369cb63551cdd815ab650a4a3
		{ &Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick, "InternalTick" }, // d5317f0b8a6adeabf2707a87d7beda73c842bc24
		{ &Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode, "PoolLoopAsyncNode" }, // 9ab5b68d17cccb63dbed43fd53e1a350910ff740
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolAsyncActionLoop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UPoolAsyncActionLoop Property Definitions ********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncActionLoop, Completed), Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // eb28073267f35202a1874f47e17d2a584c36601c
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ResultingWidgetClass = { "ResultingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncActionLoop, ResultingWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultingWidgetClass_MetaData), NewProp_ResultingWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncActionLoop, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResultingWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UPoolAsyncActionLoop Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_OrionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UPoolAsyncActionLoop,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UPoolAsyncActionLoop_StaticRegisterNativesUPoolAsyncActionLoop()
{
	UClass* Class = UPoolAsyncActionLoop::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolAsyncActionLoop;
UClass* Z_Construct_UClass_UPoolAsyncActionLoop(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UPoolAsyncActionLoop;
		if (!Z_Registration_Info_UClass_UPoolAsyncActionLoop.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("PoolAsyncActionLoop"),
				Z_Registration_Info_UClass_UPoolAsyncActionLoop.InnerSingleton,
				UPoolAsyncActionLoop_StaticRegisterNativesUPoolAsyncActionLoop,
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
		return Z_Registration_Info_UClass_UPoolAsyncActionLoop.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UPoolAsyncActionLoop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolAsyncActionLoop.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolAsyncActionLoop.OuterSingleton;
}
#undef UHT_STATICS
UPoolAsyncActionLoop::UPoolAsyncActionLoop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPoolAsyncActionLoop);
UPoolAsyncActionLoop::~UPoolAsyncActionLoop() {}
// ********** End Class UPoolAsyncActionLoop *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h__Script_OrionUI_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolAsyncActionLoop, TEXT("UPoolAsyncActionLoop"), &Z_Registration_Info_UClass_UPoolAsyncActionLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolAsyncActionLoop), 2126715309U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_Orion_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h__Script_OrionUI_ef4d08843c0f50c2998f5a3b061f438884e18c4f{
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
