// Copyright Epic Games, Inc. All Rights Reserved.

#include "GIS_Cam_GreyGameMode.h"
#include "GIS_Cam_GreyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGIS_Cam_GreyGameMode::AGIS_Cam_GreyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
