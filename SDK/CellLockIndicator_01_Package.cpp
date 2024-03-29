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
	 * 		Name   -> PredefinedFunction ACellLockIndicator01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACellLockIndicator01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CellLockIndicator_01.CellLockIndicator-01_C");
		return ptr;
	}

}


