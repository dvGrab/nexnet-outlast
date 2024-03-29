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
	 * 		Name   -> PredefinedFunction ACineGroupVeins_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineGroupVeins_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CineGroupVeins.CineGroupVeins_C");
		return ptr;
	}

}


