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
	 * 		Name   -> PredefinedFunction AElevatedGuard_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElevatedGuard_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElevatedGuard_BP.ElevatedGuard_BP_C");
		return ptr;
	}

}


