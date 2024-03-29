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
	 * 		Name   -> PredefinedFunction AProMod_GroupCable__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProMod_GroupCable__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProMod_GroupCable_03_BP.ProMod_GroupCable-03_BP_C");
		return ptr;
	}

}


