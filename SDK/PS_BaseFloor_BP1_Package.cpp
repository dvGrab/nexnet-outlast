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
	 * 		Name   -> PredefinedFunction APS_BaseFloor_BP1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_BaseFloor_BP1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_BaseFloor_BP1.PS_BaseFloor_BP1_C");
		return ptr;
	}

}


