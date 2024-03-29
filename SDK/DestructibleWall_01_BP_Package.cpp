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
	 * 		Name   -> PredefinedFunction ADestructibleWall__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructibleWall__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestructibleWall_01_BP.DestructibleWall-01_BP_C");
		return ptr;
	}

}


