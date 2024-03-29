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
	 * 		Name   -> PredefinedFunction ARBPsychosisObjectiveCoordinator_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBPsychosisObjectiveCoordinator_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBPsychosisObjectiveCoordinator_BP.RBPsychosisObjectiveCoordinator_BP_C");
		return ptr;
	}

}


