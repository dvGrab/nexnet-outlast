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
	 * 		Name   -> PredefinedFunction ATile_Plywood__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATile_Plywood__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tile_Plywood_01_BP.Tile_Plywood-01_BP_C");
		return ptr;
	}

}


