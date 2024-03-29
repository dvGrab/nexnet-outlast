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
			ptr = UObject::FindClass("BlueprintGeneratedClass GlassFloorTrap_02_BP.GlassFloorTrap-02_BP_C");
		return ptr;
	}

}


