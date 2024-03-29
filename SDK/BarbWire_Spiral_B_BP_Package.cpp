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
	 * 		Name   -> PredefinedFunction ABarbWire_Spiral_B_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABarbWire_Spiral_B_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BarbWire_Spiral_B_BP.BarbWire-Spiral-B_BP_C");
		return ptr;
	}

}


