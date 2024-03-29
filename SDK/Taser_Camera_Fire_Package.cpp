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
	 * 		Name   -> PredefinedFunction UTaser_Camera_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaser_Camera_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Taser_Camera_Fire.Taser_Camera_Fire_C");
		return ptr;
	}

}


