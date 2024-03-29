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
	 * 		Name   -> PredefinedFunction APickupAndUse_ObjCoord_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APickupAndUse_ObjCoord_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PickupAndUse_ObjCoord_BP.PickupAndUse_ObjCoord_BP_C");
		return ptr;
	}

}


