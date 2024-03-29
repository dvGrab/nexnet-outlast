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
	 * 		Name   -> PredefinedFunction ADevice_Zipcuffs_Placed_FP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADevice_Zipcuffs_Placed_FP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Device_Zipcuffs_Placed_FP.Device_Zipcuffs_Placed_FP_C");
		return ptr;
	}

}


