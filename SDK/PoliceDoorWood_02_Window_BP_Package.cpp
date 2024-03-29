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
	 * 		Name   -> PredefinedFunction APoliceDoorWood02_Window_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceDoorWood02_Window_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceDoorWood_02_Window_BP.PoliceDoorWood-02_Window_BP_C");
		return ptr;
	}

}


