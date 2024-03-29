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
	 * 		Name   -> PredefinedFunction UFlashbangDamage_Far_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashbangDamage_Far_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FlashbangDamage_Far.FlashbangDamage_Far_C");
		return ptr;
	}

}


