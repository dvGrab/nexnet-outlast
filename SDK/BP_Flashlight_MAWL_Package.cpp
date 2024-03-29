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
	 * 		Name   -> PredefinedFunction UBP_Flashlight_MAWL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Flashlight_MAWL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Flashlight_MAWL.BP_Flashlight_MAWL_C");
		return ptr;
	}

}


