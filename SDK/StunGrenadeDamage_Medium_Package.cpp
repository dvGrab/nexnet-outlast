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
	 * 		Name   -> PredefinedFunction UStunGrenadeDamage_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStunGrenadeDamage_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StunGrenadeDamage_Medium.StunGrenadeDamage_Medium_C");
		return ptr;
	}

}


