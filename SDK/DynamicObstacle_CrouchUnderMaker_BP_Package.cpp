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
	 * 		Name   -> PredefinedFunction ADynamicObstacle_CrouchUnderMaker_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADynamicObstacle_CrouchUnderMaker_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DynamicObstacle_CrouchUnderMaker_BP.DynamicObstacle_CrouchUnderMaker_BP_C");
		return ptr;
	}

}


