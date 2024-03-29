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
	 * 		Name   -> PredefinedFunction ACineGooseberry__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineGooseberry__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CineGooseberry_01_BP.CineGooseberry-01_BP_C");
		return ptr;
	}

}


