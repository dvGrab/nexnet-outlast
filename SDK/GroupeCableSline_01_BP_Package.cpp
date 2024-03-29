/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> PredefinedFunction AGroupeCableSline01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGroupeCableSline01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GroupeCableSline_01_BP.GroupeCableSline-01_BP_C");
		return ptr;
	}

}


