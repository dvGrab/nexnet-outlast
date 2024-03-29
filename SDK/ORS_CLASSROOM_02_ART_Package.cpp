/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> PredefinedFunction AORS_CLASSROOM_02_ART_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AORS_CLASSROOM_02_ART_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ORS_CLASSROOM_02_ART.ORS_CLASSROOM_02_ART_C");
		return ptr;
	}

}


