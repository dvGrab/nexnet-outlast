/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> PredefinedFunction APS_Dyn_SecurityBounceLight_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_Dyn_SecurityBounceLight_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_Dyn_SecurityBounceLight_01.PS_Dyn_SecurityBounceLight_01_C");
		return ptr;
	}

}


