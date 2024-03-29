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
	 * 		Name   -> PredefinedFunction ABrokenConcreteSlab_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABrokenConcreteSlab_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BrokenConcreteSlab_BP.BrokenConcreteSlab_BP_C");
		return ptr;
	}

}


