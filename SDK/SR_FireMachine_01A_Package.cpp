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
	 * 		Name   -> Function SR_FireMachine_01A.SR_FireMachine_01A_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASR_FireMachine_01A_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SR_FireMachine_01A.SR_FireMachine_01A_C.UserConstructionScript");
		
		ASR_FireMachine_01A_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASR_FireMachine_01A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASR_FireMachine_01A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SR_FireMachine_01A.SR_FireMachine_01A_C");
		return ptr;
	}

}


