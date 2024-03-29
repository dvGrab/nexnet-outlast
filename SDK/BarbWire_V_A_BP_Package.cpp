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
	 * 		Name   -> PredefinedFunction ABarbWire_V_A_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABarbWire_V_A_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BarbWire_V_A_BP.BarbWire-V-A_BP_C");
		return ptr;
	}

}


