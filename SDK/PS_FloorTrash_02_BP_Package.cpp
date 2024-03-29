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
	 * 		Name   -> PredefinedFunction APS_FloorTrash02_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_FloorTrash02_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_FloorTrash_02_BP.PS_FloorTrash-02_BP_C");
		return ptr;
	}

}


