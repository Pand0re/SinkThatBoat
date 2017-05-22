#pragma once

/*
	This file contains all the enum used in C++
*/

UENUM(BlueprintType)
enum class EAnimalEnum : uint8{
	ANIMAL_ELEPHANT	UMETA(DisplayName = "Elephant"),
	ANIMAL_SEAL		UMETA(DisplayName = "Seal"),
	ANIMAL_PANDA	UMETA(DisplayName = "Panda"),
	ANIMAL_CHICKEN	UMETA(DisplayName = "Chicken")
};