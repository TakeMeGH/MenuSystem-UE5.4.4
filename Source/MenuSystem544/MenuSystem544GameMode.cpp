// Copyright Epic Games, Inc. All Rights Reserved.

#include "MenuSystem544GameMode.h"
#include "MenuSystem544Character.h"
#include "UObject/ConstructorHelpers.h"

AMenuSystem544GameMode::AMenuSystem544GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
