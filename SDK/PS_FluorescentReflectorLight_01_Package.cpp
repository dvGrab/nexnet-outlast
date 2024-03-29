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
	 * 		Name   -> PredefinedFunction APS_FluorescentReflectorLight01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_FluorescentReflectorLight01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_FluorescentReflectorLight_01.PS_FluorescentReflectorLight-01_C");
		return ptr;
	}

}


