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
	 * 		Name   -> PredefinedFunction ACont_DirectSurface_WorkshopBasket__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACont_DirectSurface_WorkshopBasket__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cont_DirectSurface_WorkshopBasket_01_BP.Cont-DirectSurface-WorkshopBasket-01_BP_C");
		return ptr;
	}

}


