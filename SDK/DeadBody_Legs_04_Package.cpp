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
	 * 		Name   -> PredefinedFunction UDeadBody_Legs_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadBody_Legs_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_Legs_04.DeadBody_Legs_04_C");
		return ptr;
	}

}


