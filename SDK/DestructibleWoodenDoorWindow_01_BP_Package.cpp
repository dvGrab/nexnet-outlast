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
	 * 		Name   -> PredefinedFunction ADestructibleWoodenDoorWindow__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructibleWoodenDoorWindow__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestructibleWoodenDoorWindow_01_BP.DestructibleWoodenDoorWindow-01_BP_C");
		return ptr;
	}

}


