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
	 * 		Name   -> PredefinedFunction ASecondary_Makarov_2Handed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecondary_Makarov_2Handed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Secondary_Makarov_2Handed.Secondary_Makarov_2Handed_C");
		return ptr;
	}

}


