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
	 * 		Name   -> PredefinedFunction ABarbWire_Half_V_01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABarbWire_Half_V_01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BarbWire_Half_V_01_BP.BarbWire_Half_V_01_BP_C");
		return ptr;
	}

}


