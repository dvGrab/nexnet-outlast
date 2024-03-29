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
	 * 		Name   -> PredefinedFunction URifle_M14_ShortBarrel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URifle_M14_ShortBarrel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rifle_M14_ShortBarrel.Rifle_M14_ShortBarrel_C");
		return ptr;
	}

}


