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
	 * 		Name   -> Function PS_StreetLight_01A.PS_StreetLight_01A_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APS_StreetLight_01A_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_StreetLight_01A.PS_StreetLight_01A_C.UserConstructionScript");
		
		APS_StreetLight_01A_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APS_StreetLight_01A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_StreetLight_01A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_StreetLight_01A.PS_StreetLight_01A_C");
		return ptr;
	}

}


