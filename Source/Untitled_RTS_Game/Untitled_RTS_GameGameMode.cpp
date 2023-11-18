// Copyright Epic Games, Inc. All Rights Reserved.

#include "Untitled_RTS_GameGameMode.h"
#include "Untitled_RTS_GamePlayerController.h"
#include "Untitled_RTS_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUntitled_RTS_GameGameMode::AUntitled_RTS_GameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUntitled_RTS_GamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}