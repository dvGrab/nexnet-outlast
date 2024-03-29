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
	 * 		Name   -> PredefinedFunction APaintBombDecal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaintBombDecal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PaintBombDecal.PaintBombDecal_C");
		return ptr;
	}

}


