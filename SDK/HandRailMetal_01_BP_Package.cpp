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
	 * 		Name   -> PredefinedFunction AHandRailMetal__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHandRailMetal__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HandRailMetal_01_BP.HandRailMetal-01_BP_C");
		return ptr;
	}

}


