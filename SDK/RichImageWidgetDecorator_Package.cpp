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
	 * 		Name   -> PredefinedFunction URichImageWidgetDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichImageWidgetDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RichImageWidgetDecorator.RichImageWidgetDecorator_C");
		return ptr;
	}

}


