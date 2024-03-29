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
	 * 		Name   -> PredefinedFunction AArmor_Unarmored_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArmor_Unarmored_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Armor_Unarmored.Armor_Unarmored_C");
		return ptr;
	}

}


