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
	 * 		Name   -> PredefinedFunction ACont_DirectSurface_MilkCrateMetal__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACont_DirectSurface_MilkCrateMetal__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cont_DirectSurface_MilkCrateMetal_1_BP.Cont-DirectSurface-MilkCrateMetal-1_BP_C");
		return ptr;
	}

}


