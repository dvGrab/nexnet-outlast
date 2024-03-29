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
	 * 		Name   -> PredefinedFunction AHidespot_Confessional__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHidespot_Confessional__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hidespot_Confessional_02_BP.Hidespot_Confessional-02_BP_C");
		return ptr;
	}

}


