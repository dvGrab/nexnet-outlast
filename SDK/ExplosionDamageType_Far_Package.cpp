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
	 * 		Name   -> PredefinedFunction UExplosionDamageType_Far_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplosionDamageType_Far_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionDamageType_Far.ExplosionDamageType_Far_C");
		return ptr;
	}

}


