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
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_Floor_01_BP.DeadBody_Floor-01_BP_C");
		return ptr;
	}

}


