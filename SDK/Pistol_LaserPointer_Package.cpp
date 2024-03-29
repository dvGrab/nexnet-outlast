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
	 * 		Name   -> PredefinedFunction UPistol_LaserPointer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPistol_LaserPointer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pistol_LaserPointer.Pistol_LaserPointer_C");
		return ptr;
	}

}


