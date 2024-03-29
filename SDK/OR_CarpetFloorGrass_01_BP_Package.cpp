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
	 * 		Name   -> PredefinedFunction AOR_CarpetFloorGrass__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOR_CarpetFloorGrass__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OR_CarpetFloorGrass_01_BP.OR_CarpetFloorGrass-01_BP_C");
		return ptr;
	}

}


