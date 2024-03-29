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
	 * 		Name   -> PredefinedFunction APrimary_SCARL_v2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimary_SCARL_v2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Primary_SCARL_v2.Primary_SCARL_v2_C");
		return ptr;
	}

}


