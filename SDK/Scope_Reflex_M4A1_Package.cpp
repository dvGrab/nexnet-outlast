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
	 * 		Name   -> PredefinedFunction UScope_Reflex_M4A1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScope_Reflex_M4A1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scope_Reflex_M4A1.Scope_Reflex_M4A1_C");
		return ptr;
	}

}


