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
	 * 		Name   -> PredefinedFunction AOR_GlobeLightWall_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOR_GlobeLightWall_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OR_GlobeLightWall_BP.OR_GlobeLightWall_BP_C");
		return ptr;
	}

}


