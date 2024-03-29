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
	 * 		Name   -> PredefinedFunction APS_ExteriorLantern_01A1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_ExteriorLantern_01A1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_ExteriorLantern_01A1.PS_ExteriorLantern_01A1_C");
		return ptr;
	}

}


