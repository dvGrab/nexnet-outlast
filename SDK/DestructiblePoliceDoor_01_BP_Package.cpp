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
	 * 		Name   -> PredefinedFunction ADestructiblePoliceDoor01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructiblePoliceDoor01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestructiblePoliceDoor_01_BP.DestructiblePoliceDoor-01_BP_C");
		return ptr;
	}

}


