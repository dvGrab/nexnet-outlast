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
	 * 		Name   -> PredefinedFunction ASideWallRubbish__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASideWallRubbish__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SideWallRubbish_01_BP.SideWallRubbish-01_BP_C");
		return ptr;
	}

}


