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
	 * 		Name   -> PredefinedFunction AOPS_TextSign__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOPS_TextSign__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OPS_TextSign_01_BP.OPS_TextSign-01_BP_C");
		return ptr;
	}

}


