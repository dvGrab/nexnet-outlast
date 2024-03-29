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
	 * 		Name   -> PredefinedFunction UBP_Flashlight_M600V_UMP45_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Flashlight_M600V_UMP45_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Flashlight_M600V_UMP45.BP_Flashlight_M600V_UMP45_C");
		return ptr;
	}

}


