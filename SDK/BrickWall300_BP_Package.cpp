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
	 * 		Name   -> PredefinedFunction ABrickWall300_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABrickWall300_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BrickWall300_BP.BrickWall300_BP_C");
		return ptr;
	}

}


