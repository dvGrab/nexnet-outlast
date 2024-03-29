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
	 * 		Name   -> PredefinedFunction UBP_Compensator_SFMB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Compensator_SFMB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Compensator_SFMB.BP_Compensator_SFMB_C");
		return ptr;
	}

}


