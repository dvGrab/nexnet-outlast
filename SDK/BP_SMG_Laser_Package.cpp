﻿/**
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
	 * 		Name   -> PredefinedFunction UBP_SMG_Laser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SMG_Laser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SMG_Laser.BP_SMG_Laser_C");
		return ptr;
	}

}


