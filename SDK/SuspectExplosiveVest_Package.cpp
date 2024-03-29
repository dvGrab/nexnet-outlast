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
	 * 		Name   -> PredefinedFunction ASuspectExplosiveVest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASuspectExplosiveVest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SuspectExplosiveVest.SuspectExplosiveVest_C");
		return ptr;
	}

}


