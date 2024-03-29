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
	 * 		Name   -> PredefinedFunction ACeilingFluorescentLightBase__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeilingFluorescentLightBase__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CeilingFluorescentLightBase_02.CeilingFluorescentLightBase-02_C");
		return ptr;
	}

}


