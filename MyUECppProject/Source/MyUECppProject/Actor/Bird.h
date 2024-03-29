/*!
 * MyUECppProject
 *
 * Copyright (c) 2023 Colory Games
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#pragma once

#include "../Component/BoosterComponent.h"
#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Bird.generated.h"

UCLASS()
class MYUECPPPROJECT_API ABird : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABird();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameter", meta = (ClampMin = 0.0, ClampMax = 1000.0))
	double Weight = 10.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Parameter")
	bool bFlyable = true;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Parameter", meta = (ClampMin = 1, ClampMax = 5000))
	int32 VitalityMax = 100;

	UPROPERTY()
	int32 Vitality = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Status")
	bool bPoisoned = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Internal")
	int32 BirdID = -1;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Internal")
	int32 InstanceID = -1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<class UBoxComponent> VisualField;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<class UBoosterComponent> FlightBooster;

	UFUNCTION(BlueprintCallable)
	void Damage(int32 Amount);

	UFUNCTION(BlueprintCallable)
	void Cure(int32 Amount);

	UFUNCTION(BlueprintPure)
	int32 GetVitality() const;

	UFUNCTION(BlueprintPure)
	double GetWalkingSpeed() const;

	UFUNCTION(BlueprintPure)
	double GetFlightSpeed() const;
};
