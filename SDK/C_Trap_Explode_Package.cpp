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
	 * 		Name   -> Function C_Trap_Explode.C_Trap_Explode_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UC_Trap_Explode_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_Trap_Explode.C_Trap_Explode_C.NewFunction_1");
		
		UC_Trap_Explode_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UC_Trap_Explode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UC_Trap_Explode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass C_Trap_Explode.C_Trap_Explode_C");
		return ptr;
	}

}


