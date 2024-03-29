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
	 * 		Name   -> PredefinedFunction ACeilingFluorescent__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeilingFluorescent__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CeilingFluorescent_08.CeilingFluorescent-08_C");
		return ptr;
	}

}


