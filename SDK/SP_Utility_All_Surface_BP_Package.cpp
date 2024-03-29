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
	 * 		Name   -> PredefinedFunction ASP_Utility_All_Surface_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASP_Utility_All_Surface_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SP_Utility_All_Surface_BP.SP-Utility-All-Surface_BP_C");
		return ptr;
	}

}


