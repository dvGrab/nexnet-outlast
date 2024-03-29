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
	 * 		Name   -> PredefinedFunction ADevice_LockPick_Gun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADevice_LockPick_Gun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Device_LockPick_Gun.Device_LockPick_Gun_C");
		return ptr;
	}

}


