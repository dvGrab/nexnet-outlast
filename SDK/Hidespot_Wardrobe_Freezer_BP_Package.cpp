/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> PredefinedFunction AHidespot_Wardrobe_Freezer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHidespot_Wardrobe_Freezer_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hidespot_Wardrobe_Freezer_BP.Hidespot_Wardrobe_Freezer_BP_C");
		return ptr;
	}

}


