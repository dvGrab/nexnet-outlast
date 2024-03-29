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
	 * 		Name   -> PredefinedFunction ACeilingLightBulbBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACeilingLightBulbBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CeilingLightBulbBase.CeilingLightBulbBase_C");
		return ptr;
	}

}


