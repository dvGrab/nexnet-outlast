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
	 * 		Name   -> PredefinedFunction AOutdoorLight__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOutdoorLight__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OutdoorLight_02.OutdoorLight-02_C");
		return ptr;
	}

}


