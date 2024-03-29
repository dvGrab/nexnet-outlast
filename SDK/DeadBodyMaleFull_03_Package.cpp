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
	 * 		Name   -> PredefinedFunction UDeadBodyMaleFull__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadBodyMaleFull__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBodyMaleFull_03.DeadBodyMaleFull-03_C");
		return ptr;
	}

}


