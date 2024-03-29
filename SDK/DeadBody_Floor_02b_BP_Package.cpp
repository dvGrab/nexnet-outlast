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
	 * 		Name   -> PredefinedFunction ADeadBody_Floor_b_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeadBody_Floor_b_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_Floor_02b_BP.DeadBody_Floor-02b_BP_C");
		return ptr;
	}

}


