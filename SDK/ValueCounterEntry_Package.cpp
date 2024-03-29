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
	 * 		Name   -> PredefinedFunction UValueCounterEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UValueCounterEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ValueCounterEntry.ValueCounterEntry_C");
		return ptr;
	}

}


