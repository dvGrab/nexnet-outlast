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
	 * 		Name   -> PredefinedFunction AMurkoffWallPartition__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMurkoffWallPartition__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MurkoffWallPartition_01_BP.MurkoffWallPartition-01_BP_C");
		return ptr;
	}

}


