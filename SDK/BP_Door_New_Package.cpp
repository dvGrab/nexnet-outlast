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
	 * 		Name   -> PredefinedFunction ABP_Door_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Door_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Door_New.BP_Door_New_C");
		return ptr;
	}

}


