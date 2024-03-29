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
	 * 		Name   -> PredefinedFunction APS_PendantGlobe_01A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_PendantGlobe_01A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_PendantGlobe_01A.PS_PendantGlobe_01A_C");
		return ptr;
	}

}


