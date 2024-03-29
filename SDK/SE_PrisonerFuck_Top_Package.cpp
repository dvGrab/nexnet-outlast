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
	 * 		Name   -> PredefinedFunction USE_PrisonerFuck_Top_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USE_PrisonerFuck_Top_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SE_PrisonerFuck_Top.SE_PrisonerFuck_Top_C");
		return ptr;
	}

}


