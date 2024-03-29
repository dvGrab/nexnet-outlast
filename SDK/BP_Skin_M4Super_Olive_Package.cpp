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
	 * 		Name   -> PredefinedFunction UBP_Skin_M4Super_Olive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Skin_M4Super_Olive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Skin_M4Super_Olive.BP_Skin_M4Super_Olive_C");
		return ptr;
	}

}


