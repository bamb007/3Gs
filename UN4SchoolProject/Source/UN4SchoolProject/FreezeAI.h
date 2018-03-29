// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class UN4SCHOOLPROJECT_API FreezeAI
{
public:
	int freezeTime;
	float currentMovementSpeed;
	float movementSpeed;
	void FreezeAIMovement(int freezeTime, float currentMovementSpeed, float movementSpeed);
	FreezeAI();
	~FreezeAI();
};
