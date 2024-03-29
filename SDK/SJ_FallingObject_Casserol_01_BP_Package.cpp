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
	 * 		Name   -> PredefinedFunction ASJ_FallingObject_Casserol__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_FallingObject_Casserol__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_FallingObject_Casserol_01_BP.SJ_FallingObject_Casserol-01_BP_C");
		return ptr;
	}

}


