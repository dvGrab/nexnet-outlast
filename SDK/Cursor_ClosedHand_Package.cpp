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
	 * 		Name   -> PredefinedFunction UCursor_ClosedHand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCursor_ClosedHand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cursor_ClosedHand.Cursor_ClosedHand_C");
		return ptr;
	}

}


