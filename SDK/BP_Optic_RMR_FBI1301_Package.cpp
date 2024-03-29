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
	 * 		Name   -> PredefinedFunction UBP_Optic_RMR_FBI1301_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Optic_RMR_FBI1301_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Optic_RMR_FBI1301.BP_Optic_RMR_FBI1301_C");
		return ptr;
	}

}


