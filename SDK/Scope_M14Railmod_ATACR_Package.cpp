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
	 * 		Name   -> PredefinedFunction UScope_M14Railmod_ATACR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScope_M14Railmod_ATACR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scope_M14Railmod_ATACR.Scope_M14Railmod_ATACR_C");
		return ptr;
	}

}


