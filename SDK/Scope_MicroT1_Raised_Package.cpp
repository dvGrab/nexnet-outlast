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
	 * 		Name   -> PredefinedFunction UScope_MicroT1_Raised_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScope_MicroT1_Raised_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scope_MicroT1_Raised.Scope_MicroT1_Raised_C");
		return ptr;
	}

}


