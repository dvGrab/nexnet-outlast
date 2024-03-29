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
	 * 		Name   -> PredefinedFunction AWindow_Breakable_1M__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWindow_Breakable_1M__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Window_Breakable_1M_01_BP.Window_Breakable_1M-01_BP_C");
		return ptr;
	}

}


