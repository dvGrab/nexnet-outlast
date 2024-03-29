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
	 * 		Name   -> Function Carpet_Linear-01-BP.Carpet_Linear-01-BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACarpet_Linear_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carpet_Linear-01-BP.Carpet_Linear-01-BP_C.UserConstructionScript");
		
		ACarpet_Linear_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACarpet_Linear_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACarpet_Linear_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Carpet_Linear_01_BP.Carpet_Linear-01-BP_C");
		return ptr;
	}

}


