/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> PredefinedFunction UBP_Rifle_Laser_AK102_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Rifle_Laser_AK102_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_Laser_AK102.BP_Rifle_Laser_AK102_C");
		return ptr;
	}

}


