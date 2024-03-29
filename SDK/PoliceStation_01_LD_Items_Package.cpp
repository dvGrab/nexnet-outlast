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
	 * 		Name   -> PredefinedFunction APoliceStation01_LD_Items_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation01_LD_Items_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_01_LD_Items.PoliceStation-01_LD_Items_C");
		return ptr;
	}

}


