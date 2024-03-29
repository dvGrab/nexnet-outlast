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
	 * 		Name   -> PredefinedFunction AContDirectSurfaceToilet01BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContDirectSurfaceToilet01BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cont_DirectSurface_Toilet_01_BP.Cont-DirectSurface-Toilet-01-BP_C");
		return ptr;
	}

}


