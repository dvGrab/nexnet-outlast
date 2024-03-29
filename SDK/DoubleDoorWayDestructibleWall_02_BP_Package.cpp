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
	 * 		Name   -> PredefinedFunction ADoubleDoorWayDestructibleWall__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoubleDoorWayDestructibleWall__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoubleDoorWayDestructibleWall_02_BP.DoubleDoorWayDestructibleWall-02_BP_C");
		return ptr;
	}

}


