// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovePattern.generated.h"


UENUM()
enum class EMovePattern : uint8
{
    Static,
    Walk,
    Run
};

