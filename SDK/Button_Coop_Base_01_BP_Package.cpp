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
	 * 		Name   -> PredefinedFunction AButtonCoop_Base01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AButtonCoop_Base01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Button_Coop_Base_01_BP.Button-Coop_Base-01_BP_C");
		return ptr;
	}

}


