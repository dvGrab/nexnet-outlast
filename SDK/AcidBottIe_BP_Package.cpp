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
	 * 		Name   -> PredefinedFunction AAcidBottIe_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAcidBottIe_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AcidBottIe_BP.AcidBottIe_BP_C");
		return ptr;
	}

}


