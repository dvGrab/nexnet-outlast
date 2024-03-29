/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> PredefinedFunction ASecurityRoomSign01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityRoomSign01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityRoomSign_01.SecurityRoomSign-01_C");
		return ptr;
	}

}


