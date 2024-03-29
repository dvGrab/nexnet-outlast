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
	 * 		Name   -> PredefinedFunction ADestructible_Vehicle_Van_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructible_Vehicle_Van_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Destructible_Vehicle_Van.Destructible_Vehicle_Van_C");
		return ptr;
	}

}


