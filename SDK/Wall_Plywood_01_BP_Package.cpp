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
	 * 		Name   -> Function Wall_Plywood-01_BP.Wall_Plywood-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWall_Plywood__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall_Plywood-01_BP.Wall_Plywood-01_BP_C.UserConstructionScript");
		
		AWall_Plywood__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWall_Plywood__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWall_Plywood__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Wall_Plywood_01_BP.Wall_Plywood-01_BP_C");
		return ptr;
	}

}


