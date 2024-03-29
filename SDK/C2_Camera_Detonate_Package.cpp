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
	 * 		Name   -> PredefinedFunction UC2_Camera_Detonate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UC2_Camera_Detonate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass C2_Camera_Detonate.C2_Camera_Detonate_C");
		return ptr;
	}

}


