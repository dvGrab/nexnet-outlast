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
	 * 		Name   -> PredefinedFunction AOR_Dyn_TV_BounceLights_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOR_Dyn_TV_BounceLights_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OR_Dyn_TV_BounceLights_01.OR_Dyn_TV_BounceLights_01_C");
		return ptr;
	}

}


