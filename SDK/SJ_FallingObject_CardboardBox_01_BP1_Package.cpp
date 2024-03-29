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
	 * 		Name   -> PredefinedFunction ASJ_FallingObject_CardboardBox__BP1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_FallingObject_CardboardBox__BP1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_FallingObject_CardboardBox_01_BP1.SJ_FallingObject_CardboardBox-01_BP1_C");
		return ptr;
	}

}


