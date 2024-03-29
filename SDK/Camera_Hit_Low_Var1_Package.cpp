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
	 * 		Name   -> PredefinedFunction UCamera_Hit_Low_Var1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamera_Hit_Low_Var1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Camera_Hit_Low_Var1.Camera_Hit_Low_Var1_C");
		return ptr;
	}

}


