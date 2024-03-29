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
	 * 		Name   -> PredefinedFunction UScope_MP5_SRO_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScope_MP5_SRO_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scope_MP5_SRO.Scope_MP5_SRO_C");
		return ptr;
	}

}


