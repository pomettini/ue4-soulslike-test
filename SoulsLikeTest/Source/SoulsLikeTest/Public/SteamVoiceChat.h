// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/PlayerController.h"
#include "SteamVoiceChat.generated.h"

/**
 * 
 */
UCLASS()
class SOULSLIKETEST_API USteamVoiceChat : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Steam")
	static void StartTalking(APlayerController *PlayerController);

	UFUNCTION(BlueprintCallable, Category = "Steam")
	static void StopTalking(APlayerController *PlayerController);
};