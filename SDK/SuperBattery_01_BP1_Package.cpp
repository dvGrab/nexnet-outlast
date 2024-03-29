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
	 * 		Name   -> PredefinedFunction ASuperBattery__BP1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASuperBattery__BP1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SuperBattery_01_BP1.SuperBattery-01_BP1_C");
		return ptr;
	}

}


