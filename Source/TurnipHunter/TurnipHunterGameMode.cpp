// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TurnipHunter.h"
#include "TurnipHunterGameMode.h"
#include "TurnipHunterCharacter.h"

ATurnipHunterGameMode::ATurnipHunterGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our character
	DefaultPawnClass = ATurnipHunterCharacter::StaticClass();	
}
