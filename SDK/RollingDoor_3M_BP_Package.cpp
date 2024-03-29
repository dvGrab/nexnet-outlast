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
	 * 		Name   -> PredefinedFunction ARollingDoor_M_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARollingDoor_M_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RollingDoor_3M_BP.RollingDoor-3M_BP_C");
		return ptr;
	}

}


