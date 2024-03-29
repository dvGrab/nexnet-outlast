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
	 * 		Name   -> PredefinedFunction ADoubleDoorsBlocker_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoubleDoorsBlocker_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoubleDoorsBlocker_BP.DoubleDoorsBlocker_BP_C");
		return ptr;
	}

}


