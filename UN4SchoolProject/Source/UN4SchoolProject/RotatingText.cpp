// Fill out your copyright notice in the Description page of Project Settings.

#include "RotatingText.h"
#include "UN4SchoolProject.h"
#include "UN4SchoolProjectClasses.h"
#include "Components/TextRenderComponent.h"

// Sets default values
ARotatingText::ARotatingText()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("RotationgText"));
}

// Called when the game starts or when spawned
void ARotatingText::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MakeTextFacePlayer();
}

void ARotatingText::MakeTextFacePlayer()
{

}
