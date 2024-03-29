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
	 * 		Name   -> PredefinedFunction UDeadBody_Legs_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadBody_Legs_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_Legs_02.DeadBody_Legs_02_C");
		return ptr;
	}

}


