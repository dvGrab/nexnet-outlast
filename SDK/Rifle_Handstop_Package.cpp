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
	 * 		Name   -> PredefinedFunction URifle_Handstop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URifle_Handstop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rifle_Handstop.Rifle_Handstop_C");
		return ptr;
	}

}


