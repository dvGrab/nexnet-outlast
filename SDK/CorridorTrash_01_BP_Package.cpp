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
	 * 		Name   -> PredefinedFunction ACorridorTrash__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACorridorTrash__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CorridorTrash_01_BP.CorridorTrash-01_BP_C");
		return ptr;
	}

}


