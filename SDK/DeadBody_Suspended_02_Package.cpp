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
	 * 		Name   -> PredefinedFunction ADeadBody_Suspended02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeadBody_Suspended02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_Suspended_02.DeadBody_Suspended-02_C");
		return ptr;
	}

}


