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
	 * 		Name   -> PredefinedFunction AMasterKey_UsableItem_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMasterKey_UsableItem_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MasterKey_UsableItem_BP.MasterKey-UsableItem_BP_C");
		return ptr;
	}

}


