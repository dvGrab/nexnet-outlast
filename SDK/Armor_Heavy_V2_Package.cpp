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
	 * 		Name   -> PredefinedFunction AArmor_Heavy_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArmor_Heavy_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Armor_Heavy_V2.Armor_Heavy_V2_C");
		return ptr;
	}

}


