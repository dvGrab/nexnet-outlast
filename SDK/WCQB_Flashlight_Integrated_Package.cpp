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
	 * 		Name   -> PredefinedFunction UWCQB_Flashlight_Integrated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWCQB_Flashlight_Integrated_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WCQB_Flashlight_Integrated.WCQB_Flashlight_Integrated_C");
		return ptr;
	}

}


