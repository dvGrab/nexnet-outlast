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
	 * 		Name   -> PredefinedFunction ARecessedLight__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARecessedLight__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RecessedLight_01_BP.RecessedLight-01_BP_C");
		return ptr;
	}

}


