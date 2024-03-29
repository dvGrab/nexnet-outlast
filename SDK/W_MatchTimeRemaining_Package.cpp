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
	 * 		Name   -> PredefinedFunction UW_MatchTimeRemaining_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MatchTimeRemaining_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MatchTimeRemaining.W_MatchTimeRemaining_C");
		return ptr;
	}

}


