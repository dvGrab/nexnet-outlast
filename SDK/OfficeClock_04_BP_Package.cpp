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
	 * 		Name   -> PredefinedFunction AOfficeClock04_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOfficeClock04_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OfficeClock_04_BP.OfficeClock-04_BP_C");
		return ptr;
	}

}


