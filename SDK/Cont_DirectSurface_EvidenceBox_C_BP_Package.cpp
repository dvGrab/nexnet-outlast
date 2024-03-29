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
	 * 		Name   -> PredefinedFunction AContDirectSurfaceEvidenceBoxC_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContDirectSurfaceEvidenceBoxC_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cont_DirectSurface_EvidenceBox_C_BP.Cont-DirectSurface-EvidenceBox-C_BP_C");
		return ptr;
	}

}


