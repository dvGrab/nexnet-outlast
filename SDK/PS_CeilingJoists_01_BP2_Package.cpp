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
	 * 		Name   -> PredefinedFunction APS_CeilingJoists01_BP2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_CeilingJoists01_BP2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_CeilingJoists_01_BP2.PS_CeilingJoists-01_BP2_C");
		return ptr;
	}

}


