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
	 * 		Name   -> PredefinedFunction AWallWindow300__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWallWindow300__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WallWindow300_01_BP.WallWindow300-01_BP_C");
		return ptr;
	}

}


