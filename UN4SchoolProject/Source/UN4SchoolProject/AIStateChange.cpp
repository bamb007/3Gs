// Fill out your copyright notice in the Description page of Project Settings.

#include "AIStateChange.h"


// Sets default values for this component's properties
UAIStateChange::UAIStateChange()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAIStateChange::BeginPlay()
{
	Super::BeginPlay();

	chase = true;
	soundPlay = false;
	power = false;
	stateChange = 0;
	// ...
}


// Called every frame
void UAIStateChange::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// ...
}

void UAIStateChange::ChangeStateInAI()
{
	if (stateChange == 0 && power == true)
	{
		power = false;
		stateChange = 1;
	}
	
}

