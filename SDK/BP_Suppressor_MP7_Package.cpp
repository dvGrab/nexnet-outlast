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
	 * 		Name   -> PredefinedFunction UBP_Suppressor_MP7_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Suppressor_MP7_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Suppressor_MP7.BP_Suppressor_MP7_C");
		return ptr;
	}

}


