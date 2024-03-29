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
	 * 		Name   -> PredefinedFunction ATriggerTrap_BatteryPowered_Left_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATriggerTrap_BatteryPowered_Left_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TriggerTrap_BatteryPowered_Left_BP.TriggerTrap_BatteryPowered_Left_BP_C");
		return ptr;
	}

}


