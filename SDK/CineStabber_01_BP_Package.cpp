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
	 * 		Name   -> PredefinedFunction ACineStabber__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineStabber__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CineStabber_01_BP.CineStabber-01_BP_C");
		return ptr;
	}

}


