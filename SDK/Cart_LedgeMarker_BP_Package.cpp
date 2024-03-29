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
	 * 		Name   -> PredefinedFunction ACart_LedgeMarker_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACart_LedgeMarker_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cart_LedgeMarker_BP.Cart_LedgeMarker_BP_C");
		return ptr;
	}

}


