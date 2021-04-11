// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test3rdProjCppGameMode.h"
#include "Test3rdProjCppCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "ThirdPersonMPCharacter.h"

ATest3rdProjCppGameMode::ATest3rdProjCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonMPCharBP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//DefaultPawnClass = AThirdPersonMPCharacter::StaticClass();
}
