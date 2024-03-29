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
	 * 		Name   -> PredefinedFunction AOldLookBus__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOldLookBus__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OldLookBus_02_BP.OldLookBus-02_BP_C");
		return ptr;
	}

}


