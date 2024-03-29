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
	 * 		Name   -> PredefinedFunction ACineNun__BP1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineNun__BP1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CineNun_01_BP1.CineNun-01_BP1_C");
		return ptr;
	}

}


