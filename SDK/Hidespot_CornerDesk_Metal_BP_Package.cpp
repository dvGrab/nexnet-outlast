/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> PredefinedFunction AHidespot_CornerDeskMetal_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHidespot_CornerDeskMetal_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hidespot_CornerDesk_Metal_BP.Hidespot_CornerDesk-Metal_BP_C");
		return ptr;
	}

}


