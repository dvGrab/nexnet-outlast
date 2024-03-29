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
	 * 		Name   -> PredefinedFunction ASpotlightTripod__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpotlightTripod__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpotlightTripod_01.SpotlightTripod-01_C");
		return ptr;
	}

}


