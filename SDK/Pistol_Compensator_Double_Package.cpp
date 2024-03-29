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
	 * 		Name   -> PredefinedFunction UPistol_Compensator_Double_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPistol_Compensator_Double_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pistol_Compensator_Double.Pistol_Compensator_Double_C");
		return ptr;
	}

}


