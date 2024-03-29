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
	 * 		Name   -> PredefinedFunction ATimerCountdownRollingDoorVariator__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATimerCountdownRollingDoorVariator__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TimerCountdownRollingDoorVariator_01_BP.TimerCountdownRollingDoorVariator-01_BP_C");
		return ptr;
	}

}


