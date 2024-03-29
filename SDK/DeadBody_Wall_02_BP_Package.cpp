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
	 * 		Name   -> PredefinedFunction ADeadBody_Wall__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeadBody_Wall__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_Wall_02_BP.DeadBody_Wall-02_BP_C");
		return ptr;
	}

}


