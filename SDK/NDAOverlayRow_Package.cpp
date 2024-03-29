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
	 * 		Name   -> PredefinedFunction UNDAOverlayRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNDAOverlayRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NDAOverlayRow.NDAOverlayRow_C");
		return ptr;
	}

}


