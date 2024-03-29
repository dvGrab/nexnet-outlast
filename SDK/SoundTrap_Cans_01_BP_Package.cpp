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
	 * 		Name   -> PredefinedFunction ASoundTrap_Cans__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoundTrap_Cans__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SoundTrap_Cans_01_BP.SoundTrap-Cans-01_BP_C");
		return ptr;
	}

}


