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
	 * 		Name   -> PredefinedFunction AContDirectSurfaceToilet04BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContDirectSurfaceToilet04BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cont_DirectSurface_Toilet_04_BP.Cont-DirectSurface-Toilet-04-BP_C");
		return ptr;
	}

}


