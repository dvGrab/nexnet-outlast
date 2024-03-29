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
	 * 		Name   -> PredefinedFunction ABloodyText_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABloodyText_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BloodyText_BP.BloodyText_BP_C");
		return ptr;
	}

}


