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
	 * 		Name   -> PredefinedFunction UShotgun_Flashlight_Integrated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShotgun_Flashlight_Integrated_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Shotgun_Flashlight_Integrated.Shotgun_Flashlight_Integrated_C");
		return ptr;
	}

}


