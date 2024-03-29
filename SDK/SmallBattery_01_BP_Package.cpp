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
	 * 		Name   -> PredefinedFunction ASmallBattery__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASmallBattery__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SmallBattery_01_BP.SmallBattery-01_BP_C");
		return ptr;
	}

}


