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
	 * 		Name   -> PredefinedFunction AElectrifiedDoorTrap_Left_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectrifiedDoorTrap_Left_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectrifiedDoorTrap_Left_BP.ElectrifiedDoorTrap-Left_BP_C");
		return ptr;
	}

}


