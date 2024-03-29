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
	 * 		Name   -> PredefinedFunction ANotReplicated_LedgeMarker_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANotReplicated_LedgeMarker_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NotReplicated_LedgeMarker_BP.NotReplicated_LedgeMarker_BP_C");
		return ptr;
	}

}


