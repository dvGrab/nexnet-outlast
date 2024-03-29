/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> PredefinedFunction URifle_Compensator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URifle_Compensator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rifle_Compensator.Rifle_Compensator_C");
		return ptr;
	}

}


