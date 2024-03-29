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
	 * 		Name   -> PredefinedFunction UExplosiveTrapDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplosiveTrapDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplosiveTrapDamage.ExplosiveTrapDamage_C");
		return ptr;
	}

}


