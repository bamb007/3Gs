// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIFreeze.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UN4SCHOOLPROJECT_API UAIFreeze : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	int freezeTime;
	float currentMovementSpeed;
	float movementSpeed;
	bool freezeUsed = false;
	void FreezeAIMovement(int freezeTime, float currentMovementSpeed, float movementSpeed);
	UAIFreeze();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
