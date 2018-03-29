// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingText.generated.h"

UCLASS()
class UN4SCHOOLPROJECT_API ARotatingText : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingText();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class UTextRenderComponent* CountdownText;
	UTextRenderComponent* MyText;

	void MakeTextFacePlayer();
	
};
