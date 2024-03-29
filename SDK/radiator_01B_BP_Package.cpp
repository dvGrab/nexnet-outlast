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
	 * 		Name   -> PredefinedFunction Aradiator_B_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Aradiator_B_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass radiator_01B_BP.radiator-01B_BP_C");
		return ptr;
	}

}


