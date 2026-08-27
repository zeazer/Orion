// Copyright Epic Games, Inc. All Rights Reserved.

#include "OrionGameMode.h"
#include "Orion/Player/OrionPlayerController.h"
#include "Orion/Character//OrionCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/HUD.h"


AOrionGameMode::AOrionGameMode()
{
	if (OrionPawnClass != nullptr)
	{
		DefaultPawnClass = OrionPawnClass;
	}

	if (OrionControllerClass != nullptr)
	{
		PlayerControllerClass = OrionControllerClass;
	}
	if (OrionHUDClass != nullptr)
	{
		HUDClass = OrionHUDClass;
	}
}