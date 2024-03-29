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
	 * 		Name   -> PredefinedFunction AContainerTrap_Pharmacy_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContainerTrap_Pharmacy_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ContainerTrap_Pharmacy_BP.ContainerTrap_Pharmacy_BP_C");
		return ptr;
	}

}


