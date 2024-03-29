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
	 * 		Name   -> PredefinedFunction UC_Shake_Suppressed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UC_Shake_Suppressed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass C_Shake_Suppressed.C_Shake_Suppressed_C");
		return ptr;
	}

}


