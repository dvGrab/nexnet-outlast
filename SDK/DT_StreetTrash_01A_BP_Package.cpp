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
	 * 		Name   -> PredefinedFunction ADT_StreetTrash_A_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADT_StreetTrash_A_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DT_StreetTrash_01A_BP.DT_StreetTrash-01A_BP_C");
		return ptr;
	}

}


