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
	 * 		Name   -> PredefinedFunction AGroupCablesConduit__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGroupCablesConduit__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GroupCablesConduit_02_BP.GroupCablesConduit-02_BP_C");
		return ptr;
	}

}


