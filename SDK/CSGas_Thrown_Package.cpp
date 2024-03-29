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
	 * 		Name   -> PredefinedFunction ACSGas_Thrown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACSGas_Thrown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CSGas_Thrown.CSGas_Thrown_C");
		return ptr;
	}

}


