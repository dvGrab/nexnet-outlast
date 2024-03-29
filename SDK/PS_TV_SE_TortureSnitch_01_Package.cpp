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
	 * 		Name   -> PredefinedFunction APS_TV_SE_TortureSnitch01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_TV_SE_TortureSnitch01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_TV_SE_TortureSnitch_01.PS_TV_SE_TortureSnitch-01_C");
		return ptr;
	}

}


