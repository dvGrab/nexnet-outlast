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
	 * 		Name   -> PredefinedFunction UCamera_Stun_Stinger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamera_Stun_Stinger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Camera_Stun_Stinger.Camera_Stun_Stinger_C");
		return ptr;
	}

}


