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
	 * 		Name   -> PredefinedFunction ARBStationnaryActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBStationnaryActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBStationnaryActor.RBStationnaryActor_C");
		return ptr;
	}

}


