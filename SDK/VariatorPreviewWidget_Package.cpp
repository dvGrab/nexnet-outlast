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
	 * 		Name   -> PredefinedFunction UVariatorPreviewWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariatorPreviewWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VariatorPreviewWidget.VariatorPreviewWidget_C");
		return ptr;
	}

}


