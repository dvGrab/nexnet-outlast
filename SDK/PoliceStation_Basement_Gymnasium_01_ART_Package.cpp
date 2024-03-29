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
	 * 		Name   -> PredefinedFunction APoliceStation_Basement_Gymnasium01_ART_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_Basement_Gymnasium01_ART_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_Basement_Gymnasium_01_ART.PoliceStation_Basement_Gymnasium-01_ART_C");
		return ptr;
	}

}


