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
	 * 		Name   -> PredefinedFunction UScope_Holosight_512_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScope_Holosight_512_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scope_Holosight_513.Scope_Holosight_512_C");
		return ptr;
	}

}


