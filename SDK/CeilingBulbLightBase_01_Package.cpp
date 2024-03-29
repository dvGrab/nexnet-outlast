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
	 * 		Name   -> PredefinedFunction ACeilingBulbLightBase__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeilingBulbLightBase__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CeilingBulbLightBase_01.CeilingBulbLightBase-01_C");
		return ptr;
	}

}


