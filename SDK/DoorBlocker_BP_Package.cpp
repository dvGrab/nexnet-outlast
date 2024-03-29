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
	 * 		Name   -> PredefinedFunction ADoorBlocker_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorBlocker_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorBlocker_BP.DoorBlocker_BP_C");
		return ptr;
	}

}


