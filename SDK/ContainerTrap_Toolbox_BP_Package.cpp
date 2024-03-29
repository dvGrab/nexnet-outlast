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
	 * 		Name   -> PredefinedFunction AContainerTrap_Toolbox_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContainerTrap_Toolbox_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ContainerTrap_Toolbox_BP.ContainerTrap_Toolbox_BP_C");
		return ptr;
	}

}


