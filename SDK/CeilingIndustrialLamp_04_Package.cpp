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
	 * 		Name   -> PredefinedFunction ACeilingIndustrialLamp__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeilingIndustrialLamp__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CeilingIndustrialLamp_04.CeilingIndustrialLamp-04_C");
		return ptr;
	}

}


