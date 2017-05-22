// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Animal.generated.h"

UCLASS()
class SINKTHATBOAT_API AAnimal : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAnimal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	/*
	*	Stats	
	*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _weight;
	
};
