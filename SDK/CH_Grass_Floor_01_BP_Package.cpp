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
	 * 		Name   -> PredefinedFunction ACH_Grass_Floor__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACH_Grass_Floor__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CH_Grass_Floor_01_BP.CH_Grass_Floor-01_BP_C");
		return ptr;
	}

}


