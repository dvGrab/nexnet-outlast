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
	 * 		Name   -> PredefinedFunction ADoorWoodWindow__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorWoodWindow__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorWoodWindow_03_BP.DoorWoodWindow-03_BP_C");
		return ptr;
	}

}


