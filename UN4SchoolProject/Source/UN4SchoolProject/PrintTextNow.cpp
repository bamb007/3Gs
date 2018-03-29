// Fill out your copyright notice in the Description page of Project Settings.

#include "PrintTextNow.h"


// Sets default values
APrintTextNow::APrintTextNow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//myString = FString(TEXT("Hello World"));
	number = 5.0f;
}

// Called when the game starts or when spawned
void APrintTextNow::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APrintTextNow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

