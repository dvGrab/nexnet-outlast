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
	 * 		Name   -> PredefinedFunction AStairs200Wood_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStairs200Wood_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Stairs200Wood_BP.Stairs200Wood_BP_C");
		return ptr;
	}

}


