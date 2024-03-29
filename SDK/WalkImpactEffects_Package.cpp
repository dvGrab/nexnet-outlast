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
	 * 		Name   -> PredefinedFunction AWalkImpactEffects_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWalkImpactEffects_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WalkImpactEffects.WalkImpactEffects_C");
		return ptr;
	}

}


