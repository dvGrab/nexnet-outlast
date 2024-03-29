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
	 * 		Name   -> PredefinedFunction UDeadBodyMalePants_Blue__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadBodyMalePants_Blue__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBodyMalePants_Blue_02.DeadBodyMalePants_Blue-02_C");
		return ptr;
	}

}


