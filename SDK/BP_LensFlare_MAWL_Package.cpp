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
	 * 		Name   -> PredefinedFunction ABP_LensFlare_MAWL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LensFlare_MAWL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LensFlare_MAWL.BP_LensFlare_MAWL_C");
		return ptr;
	}

}


