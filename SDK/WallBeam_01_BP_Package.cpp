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
	 * 		Name   -> PredefinedFunction AWallBeam__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWallBeam__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WallBeam_01_BP.WallBeam-01_BP_C");
		return ptr;
	}

}


