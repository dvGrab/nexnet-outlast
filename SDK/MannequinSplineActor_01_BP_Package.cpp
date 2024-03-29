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
	 * 		Name   -> PredefinedFunction AMannequinSplineActor__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMannequinSplineActor__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MannequinSplineActor_01_BP.MannequinSplineActor-01_BP_C");
		return ptr;
	}

}


