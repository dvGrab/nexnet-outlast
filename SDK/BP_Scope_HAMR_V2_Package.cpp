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
	 * 		Name   -> PredefinedFunction UBP_Scope_HAMR_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Scope_HAMR_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Scope_HAMR_V2.BP_Scope_HAMR_V2_C");
		return ptr;
	}

}


