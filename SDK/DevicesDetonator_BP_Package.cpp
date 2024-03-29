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
	 * 		Name   -> PredefinedFunction ADevicesDetonator_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADevicesDetonator_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DevicesDetonator_BP.DevicesDetonator_BP_C");
		return ptr;
	}

}


