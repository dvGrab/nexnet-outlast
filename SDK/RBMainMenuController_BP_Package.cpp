/**
 * Name: OUTLAST
 * Version: 0.0.1
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
	 * 		Name   -> PredefinedFunction ARBMainMenuController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBMainMenuController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBMainMenuController_BP.RBMainMenuController_BP_C");
		return ptr;
	}

}


