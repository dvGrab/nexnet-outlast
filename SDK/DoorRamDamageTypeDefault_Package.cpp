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
	 * 		Name   -> PredefinedFunction UDoorRamDamageTypeDefault_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoorRamDamageTypeDefault_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorRamDamageTypeDefault.DoorRamDamageTypeDefault_C");
		return ptr;
	}

}


