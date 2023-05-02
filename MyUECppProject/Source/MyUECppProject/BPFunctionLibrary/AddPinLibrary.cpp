/*!
 * MyUECppProject
 *
 * Copyright (c) 2023 Colory Games
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "AddPinLibrary.h"

#include "Kismet/KismetMathLibrary.h"

FRotator UAddPinLibrary::CombineMultipleRotators(FRotator A, FRotator B)
{
	FRotator Out;

	Out = UKismetMathLibrary::ComposeRotators(A, B);

	return Out;
}
