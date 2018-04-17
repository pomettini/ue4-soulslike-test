// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SteamVoiceChat.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVoiceChat() {}
// Cross Module References
	SOULSLIKETEST_API UFunction* Z_Construct_UFunction_USteamVoiceChat_StartTalking();
	SOULSLIKETEST_API UClass* Z_Construct_UClass_USteamVoiceChat();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	SOULSLIKETEST_API UFunction* Z_Construct_UFunction_USteamVoiceChat_StopTalking();
	SOULSLIKETEST_API UClass* Z_Construct_UClass_USteamVoiceChat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SoulsLikeTest();
// End Cross Module References
	void USteamVoiceChat::StaticRegisterNativesUSteamVoiceChat()
	{
		UClass* Class = USteamVoiceChat::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "StartTalking", (Native)&USteamVoiceChat::execStartTalking },
			{ "StopTalking", (Native)&USteamVoiceChat::execStopTalking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USteamVoiceChat_StartTalking()
	{
		struct SteamVoiceChat_eventStartTalking_Parms
		{
			APlayerController* PlayerController;
		};
		UObject* Outer = Z_Construct_UClass_USteamVoiceChat();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartTalking"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04042401, 65535, sizeof(SteamVoiceChat_eventStartTalking_Parms));
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, SteamVoiceChat_eventStartTalking_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Steam"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVoiceChat.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USteamVoiceChat_StopTalking()
	{
		struct SteamVoiceChat_eventStopTalking_Parms
		{
			APlayerController* PlayerController;
		};
		UObject* Outer = Z_Construct_UClass_USteamVoiceChat();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopTalking"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04042401, 65535, sizeof(SteamVoiceChat_eventStopTalking_Parms));
			UProperty* NewProp_PlayerController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerController, SteamVoiceChat_eventStopTalking_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Steam"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVoiceChat.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVoiceChat_NoRegister()
	{
		return USteamVoiceChat::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamVoiceChat()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_SoulsLikeTest();
			OuterClass = USteamVoiceChat::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USteamVoiceChat_StartTalking());
				OuterClass->LinkChild(Z_Construct_UFunction_USteamVoiceChat_StopTalking());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamVoiceChat_StartTalking(), "StartTalking"); // 2785972091
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamVoiceChat_StopTalking(), "StopTalking"); // 3892017733
				static TCppClassTypeInfo<TCppClassTypeTraits<USteamVoiceChat> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SteamVoiceChat.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SteamVoiceChat.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamVoiceChat, 2233015999);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVoiceChat(Z_Construct_UClass_USteamVoiceChat, &USteamVoiceChat::StaticClass, TEXT("/Script/SoulsLikeTest"), TEXT("USteamVoiceChat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVoiceChat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
