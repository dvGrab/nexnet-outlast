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
	 * 		Name   -> PredefinedFunction APoliceStation_T02_Mood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_T02_Mood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_T02_Mood.PoliceStation_T02_Mood_C");
		return ptr;
	}

}


