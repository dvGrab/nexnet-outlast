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
	 * 		Name   -> PredefinedFunction AWallFluorescent__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWallFluorescent__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WallFluorescent_01.WallFluorescent-01_C");
		return ptr;
	}

}


