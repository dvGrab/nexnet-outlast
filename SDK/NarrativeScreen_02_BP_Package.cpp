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
	 * 		Name   -> PredefinedFunction ANarrativeScreen__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANarrativeScreen__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NarrativeScreen_02_BP.NarrativeScreen-02_BP_C");
		return ptr;
	}

}


