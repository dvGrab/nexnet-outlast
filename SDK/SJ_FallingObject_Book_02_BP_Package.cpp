/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> PredefinedFunction ASJ_FallingObject_Book02_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_FallingObject_Book02_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_FallingObject_Book_02_BP.SJ_FallingObject_Book-02_BP_C");
		return ptr;
	}

}


