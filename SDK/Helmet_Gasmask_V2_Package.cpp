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
	 * 		Name   -> PredefinedFunction AHelmet_Gasmask_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHelmet_Gasmask_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Helmet_Gasmask_V2.Helmet_Gasmask_V2_C");
		return ptr;
	}

}


