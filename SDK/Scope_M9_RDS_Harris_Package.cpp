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
	 * 		Name   -> PredefinedFunction UScope_M9_RDS_Harris_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScope_M9_RDS_Harris_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scope_M9_RDS_Harris.Scope_M9_RDS_Harris_C");
		return ptr;
	}

}


