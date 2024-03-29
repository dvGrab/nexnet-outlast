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
	 * 		Name   -> PredefinedFunction ACineHangBody01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineHangBody01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CineHangBody_01_BP.CineHangBody-01_BP_C");
		return ptr;
	}

}


