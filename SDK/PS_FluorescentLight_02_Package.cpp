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
	 * 		Name   -> PredefinedFunction APS_FluorescentLight02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_FluorescentLight02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_FluorescentLight_02.PS_FluorescentLight-02_C");
		return ptr;
	}

}


