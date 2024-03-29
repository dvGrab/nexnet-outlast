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
	 * 		Name   -> PredefinedFunction ACatWalk__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACatWalk__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CatWalk_01_BP.CatWalk-01_BP_C");
		return ptr;
	}

}


