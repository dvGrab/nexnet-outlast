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
	 * 		Name   -> PredefinedFunction UShotgun_VFG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShotgun_VFG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Shotgun_VFG.Shotgun_VFG_C");
		return ptr;
	}

}


