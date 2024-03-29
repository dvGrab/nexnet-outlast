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
	 * 		Name   -> PredefinedFunction UDeadBody_Legs_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadBody_Legs_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_Legs_01.DeadBody_Legs_01_C");
		return ptr;
	}

}


