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
	 * 		Name   -> PredefinedFunction UBeanbagDamageType_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeanbagDamageType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BeanbagDamageType.BeanbagDamageType_C");
		return ptr;
	}

}


