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
	 * 		Name   -> PredefinedFunction UCSGasDamage_Close_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGasDamage_Close_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CSGasDamage_Close.CSGasDamage_Close_C");
		return ptr;
	}

}


