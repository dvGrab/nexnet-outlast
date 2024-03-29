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
	 * 		Name   -> PredefinedFunction UW_TeamPaperdoll_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_TeamPaperdoll_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TeamPaperdoll.W_TeamPaperdoll_C");
		return ptr;
	}

}


