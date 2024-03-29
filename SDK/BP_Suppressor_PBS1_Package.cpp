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
	 * 		Name   -> PredefinedFunction UBP_Suppressor_PBS1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Suppressor_PBS1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Suppressor_PBS1.BP_Suppressor_PBS1_C");
		return ptr;
	}

}


