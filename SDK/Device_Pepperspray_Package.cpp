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
	 * 		Name   -> PredefinedFunction ADevice_Pepperspray_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADevice_Pepperspray_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Device_Pepperspray.Device_Pepperspray_C");
		return ptr;
	}

}


