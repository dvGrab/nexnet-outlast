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
	 * 		Name   -> PredefinedFunction UC_SCARL_Reload_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UC_SCARL_Reload_Empty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass C_SCARL_Reload_Empty.C_SCARL_Reload_Empty_C");
		return ptr;
	}

}


