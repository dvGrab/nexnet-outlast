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
	 * 		Name   -> PredefinedFunction ASE_AffraidCoyleBurnsHisDickOff_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASE_AffraidCoyleBurnsHisDickOff_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SE_AffraidCoyleBurnsHisDickOff_BP.SE_AffraidCoyleBurnsHisDickOff_BP_C");
		return ptr;
	}

}


