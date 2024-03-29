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
	 * 		Name   -> PredefinedFunction ASleeperActivityMarker_Ground_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASleeperActivityMarker_Ground_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SleeperActivityMarker_Ground_BP.SleeperActivityMarker_Ground_BP_C");
		return ptr;
	}

}


