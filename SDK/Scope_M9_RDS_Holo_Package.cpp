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
	 * 		Name   -> PredefinedFunction UScope_M9_RDS_Holo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScope_M9_RDS_Holo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scope_M9_RDS_Holo.Scope_M9_RDS_Holo_C");
		return ptr;
	}

}


