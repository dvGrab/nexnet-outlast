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
	 * 		Name   -> PredefinedFunction UOptionsEntryTextStyle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryTextStyle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OptionsEntryTextStyle.OptionsEntryTextStyle_C");
		return ptr;
	}

}


