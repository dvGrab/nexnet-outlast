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
	 * 		Name   -> PredefinedFunction UScope_Holosight_XPS3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScope_Holosight_XPS3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scope_Holosight_XPS3.Scope_Holosight_XPS3_C");
		return ptr;
	}

}


