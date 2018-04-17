// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef SOULSLIKETEST_SteamVoiceChat_generated_h
#error "SteamVoiceChat.generated.h already included, missing '#pragma once' in SteamVoiceChat.h"
#endif
#define SOULSLIKETEST_SteamVoiceChat_generated_h

#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopTalking) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamVoiceChat::StopTalking(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTalking) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamVoiceChat::StartTalking(Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopTalking) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamVoiceChat::StopTalking(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTalking) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamVoiceChat::StartTalking(Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamVoiceChat(); \
	friend SOULSLIKETEST_API class UClass* Z_Construct_UClass_USteamVoiceChat(); \
public: \
	DECLARE_CLASS(USteamVoiceChat, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SoulsLikeTest"), NO_API) \
	DECLARE_SERIALIZER(USteamVoiceChat) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSteamVoiceChat(); \
	friend SOULSLIKETEST_API class UClass* Z_Construct_UClass_USteamVoiceChat(); \
public: \
	DECLARE_CLASS(USteamVoiceChat, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SoulsLikeTest"), NO_API) \
	DECLARE_SERIALIZER(USteamVoiceChat) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVoiceChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVoiceChat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVoiceChat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVoiceChat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVoiceChat(USteamVoiceChat&&); \
	NO_API USteamVoiceChat(const USteamVoiceChat&); \
public:


#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVoiceChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVoiceChat(USteamVoiceChat&&); \
	NO_API USteamVoiceChat(const USteamVoiceChat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVoiceChat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVoiceChat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVoiceChat)


#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_PRIVATE_PROPERTY_OFFSET
#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_13_PROLOG
#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_PRIVATE_PROPERTY_OFFSET \
	SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_RPC_WRAPPERS \
	SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_INCLASS \
	SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_PRIVATE_PROPERTY_OFFSET \
	SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_INCLASS_NO_PURE_DECLS \
	SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SoulsLikeTest_Source_SoulsLikeTest_Public_SteamVoiceChat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
