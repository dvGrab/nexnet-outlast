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
	 * 		Name   -> PredefinedFunction UError_ConfirmCancelPopupWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UError_ConfirmCancelPopupWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Error_ConfirmCancelPopupWidget.Error_ConfirmCancelPopupWidget_C");
		return ptr;
	}

}


