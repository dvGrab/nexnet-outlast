/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> PredefinedFunction ABP_SM_Licenseplate_Neutral_Plate1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SM_Licenseplate_Neutral_Plate1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SM_Licenseplate_Neutral_Plate1.BP_SM_Licenseplate_Neutral_Plate1_C");
		return ptr;
	}

}


