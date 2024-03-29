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
	 * 		Name   -> PredefinedFunction AOR_CoveredNeonLight01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOR_CoveredNeonLight01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OR_CoveredNeonLight_01.OR_CoveredNeonLight-01_C");
		return ptr;
	}

}


