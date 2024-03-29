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
	 * 		Name   -> PredefinedFunction APsychosisAntidote_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APsychosisAntidote_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PsychosisAntidote_BP.PsychosisAntidote_BP_C");
		return ptr;
	}

}


