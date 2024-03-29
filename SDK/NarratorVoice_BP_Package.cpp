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
	 * 		Name   -> PredefinedFunction ANarratorVoice_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANarratorVoice_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NarratorVoice_BP.NarratorVoice_BP_C");
		return ptr;
	}

}


