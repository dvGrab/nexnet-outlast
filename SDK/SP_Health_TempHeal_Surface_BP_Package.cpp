/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> PredefinedFunction ASPHealthTempHealSurface_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASPHealthTempHealSurface_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SP_Health_TempHeal_Surface_BP.SP-Health-TempHeal-Surface_BP_C");
		return ptr;
	}

}


