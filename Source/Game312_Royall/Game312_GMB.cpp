// Fill out your copyright notice in the Description page of Project Settings.


#include "Game312_GMB.h"
#include "UObject/ConstructorHelpers.h"
#include "PlayerChar.h"

AGame312_GMB::AGame312_GMB()
{
	// Set default pawn class to your PlayerChar
	DefaultPawnClass = APlayerChar::StaticClass();
}


