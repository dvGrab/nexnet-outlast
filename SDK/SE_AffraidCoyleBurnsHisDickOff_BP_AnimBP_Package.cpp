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
	 * 		Name   -> PredefinedFunction USE_AffraidCoyleBurnsHisDickOff_BP_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USE_AffraidCoyleBurnsHisDickOff_BP_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SE_AffraidCoyleBurnsHisDickOff_BP_AnimBP.SE_AffraidCoyleBurnsHisDickOff_BP_AnimBP_C");
		return ptr;
	}

}


