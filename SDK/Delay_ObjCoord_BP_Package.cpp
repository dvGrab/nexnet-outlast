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
	 * 		Name   -> PredefinedFunction ADelay_ObjCoord_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADelay_ObjCoord_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Delay_ObjCoord_BP.Delay_ObjCoord_BP_C");
		return ptr;
	}

}


