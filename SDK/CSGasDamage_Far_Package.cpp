﻿/**
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
	 * 		Name   -> PredefinedFunction UCSGasDamage_Far_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGasDamage_Far_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CSGasDamage_Far.CSGasDamage_Far_C");
		return ptr;
	}

}


