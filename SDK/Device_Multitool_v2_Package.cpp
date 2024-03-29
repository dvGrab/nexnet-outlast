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
	 * 		Name   -> PredefinedFunction ADevice_Multitool_v2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADevice_Multitool_v2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Device_Multitool_v2.Device_Multitool_v2_C");
		return ptr;
	}

}


