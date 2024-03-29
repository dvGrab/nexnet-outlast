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
	 * 		Name   -> PredefinedFunction UDoorRamDamageTypeCrumble_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoorRamDamageTypeCrumble_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorRamDamageTypeCrumble.DoorRamDamageTypeCrumble_C");
		return ptr;
	}

}


