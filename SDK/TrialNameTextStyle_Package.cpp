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
	 * 		Name   -> PredefinedFunction UTrialNameTextStyle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrialNameTextStyle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrialNameTextStyle.TrialNameTextStyle_C");
		return ptr;
	}

}


