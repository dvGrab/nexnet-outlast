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
	 * 		Name   -> PredefinedFunction URichInputWidgetDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichInputWidgetDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RichInputWidgetDecorator.RichInputWidgetDecorator_C");
		return ptr;
	}

}


