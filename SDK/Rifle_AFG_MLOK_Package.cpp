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
	 * 		Name   -> PredefinedFunction URifle_AFG_MLOK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URifle_AFG_MLOK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rifle_AFG_MLOK.Rifle_AFG_MLOK_C");
		return ptr;
	}

}


