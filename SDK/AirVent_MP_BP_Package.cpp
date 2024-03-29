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
	 * 		Name   -> PredefinedFunction AAirVent_MP_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAirVent_MP_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AirVent_MP_BP.AirVent_MP_BP_C");
		return ptr;
	}

}


