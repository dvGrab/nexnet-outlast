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
	 * 		Name   -> PredefinedFunction ABrickWalls__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABrickWalls__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BrickWalls_01_BP.BrickWalls-01_BP_C");
		return ptr;
	}

}


