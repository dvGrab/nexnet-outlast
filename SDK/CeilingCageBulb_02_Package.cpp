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
	 * 		Name   -> PredefinedFunction ACeilingCageBulb__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeilingCageBulb__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CeilingCageBulb_02.CeilingCageBulb-02_C");
		return ptr;
	}

}


