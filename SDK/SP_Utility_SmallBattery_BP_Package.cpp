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
	 * 		Name   -> PredefinedFunction ASPUtilitySmallBattery_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASPUtilitySmallBattery_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SP_Utility_SmallBattery_BP.SP-Utility-SmallBattery_BP_C");
		return ptr;
	}

}


