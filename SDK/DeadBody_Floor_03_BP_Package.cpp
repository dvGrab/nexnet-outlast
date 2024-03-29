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
	 * 		Name   -> PredefinedFunction ADeadBody_Floor__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeadBody_Floor__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_Floor_03_BP.DeadBody_Floor-03_BP_C");
		return ptr;
	}

}


