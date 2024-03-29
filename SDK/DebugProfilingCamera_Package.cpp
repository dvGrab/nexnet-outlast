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
	 * 		Name   -> PredefinedFunction ADebugProfilingCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugProfilingCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DebugProfilingCamera.DebugProfilingCamera_C");
		return ptr;
	}

}


