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
	 * 		Name   -> PredefinedFunction ASP_DirectSurface_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASP_DirectSurface_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SP_DirectSurface_BP.SP-DirectSurface_BP_C");
		return ptr;
	}

}


