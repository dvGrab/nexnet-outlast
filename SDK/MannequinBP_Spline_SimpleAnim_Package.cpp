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
	 * 		Name   -> PredefinedFunction AMannequinBP_Spline_SimpleAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMannequinBP_Spline_SimpleAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MannequinBP_Spline_SimpleAnim.MannequinBP_Spline_SimpleAnim_C");
		return ptr;
	}

}


