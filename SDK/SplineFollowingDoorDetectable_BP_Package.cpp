/**
 * Name: TRIALS
 * Version: FINAL
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASplineFollowingDoorDetectable_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineFollowingDoorDetectable_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplineFollowingDoorDetectable_BP.SplineFollowingDoorDetectable_BP_C");
		return ptr;
	}

}


