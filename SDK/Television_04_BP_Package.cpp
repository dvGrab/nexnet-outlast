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
	 * 		Name   -> PredefinedFunction ATelevision04_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATelevision04_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Television_04_BP.Television-04_BP_C");
		return ptr;
	}

}


