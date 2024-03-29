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
	 * 		Name   -> PredefinedFunction UDoorRamDamageTypePlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoorRamDamageTypePlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorRamDamageTypePlayer.DoorRamDamageTypePlayer_C");
		return ptr;
	}

}


