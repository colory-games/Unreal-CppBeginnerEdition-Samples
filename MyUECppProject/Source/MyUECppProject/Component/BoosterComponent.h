// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BoosterComponent.generated.h"


UCLASS( ClassGroup=(Equipment), meta=(BlueprintSpawnableComponent) )
class MYUECPPPROJECT_API UBoosterComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBoosterComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FuelMax = 60.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float FuelRest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Output = 100.0f;

	UFUNCTION(BlueprintPure)
	float GetOutput() const;
};
