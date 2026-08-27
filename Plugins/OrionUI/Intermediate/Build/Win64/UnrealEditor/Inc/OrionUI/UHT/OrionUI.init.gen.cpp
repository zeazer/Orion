// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionUI_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature(ETypeConstructPhase);
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature(ETypeConstructPhase);
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature(ETypeConstructPhase);
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature(ETypeConstructPhase);
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_TimerFinished__DelegateSignature(ETypeConstructPhase);
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_TimerUdpate__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OrionUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OrionUI(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_OrionUI.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OrionUI_TimerFinished__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_OrionUI_TimerUdpate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/OrionUI",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xF0CE925F,
			0xD782A3DA,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OrionUI.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_OrionUI.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OrionUI(Z_Construct_UPackage__Script_OrionUI, TEXT("/Script/OrionUI"), Z_Registration_Info_UPackage__Script_OrionUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF0CE925F, 0xD782A3DA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
