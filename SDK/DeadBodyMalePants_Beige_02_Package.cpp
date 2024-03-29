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
	 * 		Name   -> PredefinedFunction UDeadBodyMalePants_Beige__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadBodyMalePants_Beige__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBodyMalePants_Beige_02.DeadBodyMalePants_Beige-02_C");
		return ptr;
	}

}


