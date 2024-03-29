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
	 * 		Name   -> PredefinedFunction AWallIndustrialLamp05_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWallIndustrialLamp05_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WallIndustrialLamp_05.WallIndustrialLamp-05_C");
		return ptr;
	}

}


