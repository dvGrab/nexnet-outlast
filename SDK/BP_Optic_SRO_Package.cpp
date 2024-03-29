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
	 * 		Name   -> PredefinedFunction UBP_Optic_SRO_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Optic_SRO_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Optic_SRO.BP_Optic_SRO_C");
		return ptr;
	}

}


