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
	 * 		Name   -> PredefinedFunction AImpactEffects_Pistol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AImpactEffects_Pistol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ImpactEffects_Pistol.ImpactEffects_Pistol_C");
		return ptr;
	}

}


