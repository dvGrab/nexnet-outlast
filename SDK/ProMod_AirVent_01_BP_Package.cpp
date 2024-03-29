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
	 * 		Name   -> PredefinedFunction AProMod_AirVent__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProMod_AirVent__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProMod_AirVent_01_BP.ProMod_AirVent-01_BP_C");
		return ptr;
	}

}


