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
	 * 		Name   -> PredefinedFunction AOrphanageStairs__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOrphanageStairs__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OrphanageStairs_01_BP.OrphanageStairs-01_BP_C");
		return ptr;
	}

}


