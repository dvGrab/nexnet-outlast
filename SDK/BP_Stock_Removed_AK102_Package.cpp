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
	 * 		Name   -> PredefinedFunction UBP_Stock_Removed_AK102_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Stock_Removed_AK102_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Stock_Removed_AK102.BP_Stock_Removed_AK102_C");
		return ptr;
	}

}


