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
	 * 		Name   -> PredefinedFunction UPython_Camera_Shake_Reload_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPython_Camera_Shake_Reload_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Python_Camera_Shake_Reload.Python_Camera_Shake_Reload_C");
		return ptr;
	}

}


