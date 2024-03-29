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
	 * 		Name   -> PredefinedFunction UW_LoudnessMeter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_LoudnessMeter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_LoudnessMeter.W_LoudnessMeter_C");
		return ptr;
	}

}


