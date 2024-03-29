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
	 * 		Name   -> PredefinedFunction UDeadBodyArmsFull_Severed__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadBodyArmsFull_Severed__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBodyArmsFull_Severed_01.DeadBodyArmsFull_Severed-01_C");
		return ptr;
	}

}


