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
	 * 		Name   -> PredefinedFunction AWallIndustrialLamp__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWallIndustrialLamp__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WallIndustrialLamp_04.WallIndustrialLamp-04_C");
		return ptr;
	}

}


