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
	 * 		Name   -> PredefinedFunction AMansion_ConcreteFloor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMansion_ConcreteFloor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mansion_ConcreteFloor_BP.Mansion_ConcreteFloor_BP_C");
		return ptr;
	}

}


