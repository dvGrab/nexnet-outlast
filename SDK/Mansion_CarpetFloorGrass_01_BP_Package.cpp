/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> PredefinedFunction AMansion_CarpetFloorGrass01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMansion_CarpetFloorGrass01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mansion_CarpetFloorGrass_01_BP.Mansion_CarpetFloorGrass-01_BP_C");
		return ptr;
	}

}


