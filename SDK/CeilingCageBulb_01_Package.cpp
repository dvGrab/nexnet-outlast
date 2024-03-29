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
	 * 		Name   -> PredefinedFunction ACeilingCageBulb01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeilingCageBulb01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CeilingCageBulb_01.CeilingCageBulb-01_C");
		return ptr;
	}

}


