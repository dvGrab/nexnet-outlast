/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> PredefinedFunction APepperballImpactEffects_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APepperballImpactEffects_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PepperballImpactEffects.PepperballImpactEffects_C");
		return ptr;
	}

}


