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
	 * 		Name   -> PredefinedFunction USeveredHead_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeveredHead_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SeveredHead_GhostAnimBP.SeveredHead_GhostAnimBP_C");
		return ptr;
	}

}


