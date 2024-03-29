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
	 * 		Name   -> PredefinedFunction AStinger_Thrown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStinger_Thrown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Stinger_Thrown.Stinger_Thrown_C");
		return ptr;
	}

}


