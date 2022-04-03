// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayer.h"

// Sets default values
AGamePlayer::AGamePlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGamePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGamePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGamePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Shot", IE_Pressed, this, &AGamePlayer::ActionShotPressed);
	PlayerInputComponent->BindAction("Shot", IE_Released, this, &AGamePlayer::ActionShotReleased);

	PlayerInputComponent->BindAxis("Move", this, &AGamePlayer::AxisMove);
}

void AGamePlayer::ActionShotPressed()
{
	bShooting = true;
}

void AGamePlayer::ActionShotReleased()
{
	bShooting = false;
}

void AGamePlayer::AxisMove(float AxisValue)
{
	FVector Location = GetActorLocation();
	Location.X += AxisValue;
	SetActorLocation(Location);
}
