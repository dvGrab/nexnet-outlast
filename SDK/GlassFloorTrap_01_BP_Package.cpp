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
	 * 		Name   -> PredefinedFunction AGlassFloorTrap__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlassFloorTrap__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlassFloorTrap_01_BP.GlassFloorTrap-01_BP_C");
		return ptr;
	}

}


