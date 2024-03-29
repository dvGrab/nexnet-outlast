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
	 * 		Name   -> PredefinedFunction UBP_Magazine_PMAG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Magazine_PMAG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Magazine_PMAG.BP_Magazine_PMAG_C");
		return ptr;
	}

}


