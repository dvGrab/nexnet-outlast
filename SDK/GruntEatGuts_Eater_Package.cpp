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
	 * 		Name   -> PredefinedFunction UGruntEatGuts_Eater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGruntEatGuts_Eater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass GruntEatGuts_Eater.GruntEatGuts_Eater_C");
		return ptr;
	}

}


