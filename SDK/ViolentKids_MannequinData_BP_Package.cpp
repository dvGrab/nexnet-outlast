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
	 * 		Name   -> PredefinedFunction UViolentKids_MannequinData_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViolentKids_MannequinData_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ViolentKids_MannequinData_BP.ViolentKids_MannequinData_BP_C");
		return ptr;
	}

}


