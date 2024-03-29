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
	 * 		Name   -> PredefinedFunction APoliceDoorWood01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceDoorWood01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceDoorWood_01_BP.PoliceDoorWood-01_BP_C");
		return ptr;
	}

}


