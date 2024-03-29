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
	 * 		Name   -> PredefinedFunction UScope_MicroT2_FBI1301_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScope_MicroT2_FBI1301_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scope_MicroT2_FBI1301.Scope_MicroT2_FBI1301_C");
		return ptr;
	}

}


