// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIStateChange.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UN4SCHOOLPROJECT_API UAIStateChange : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAIStateChange();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "StateChange")
		int32 stateChange;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "StateChange")
		bool chase;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "StateChange")
		bool soundPlay;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "StateChange")
	void ChangeStateInAI();
};
