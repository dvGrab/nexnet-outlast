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
	 * 		Name   -> Function Murkoff_ExitCeilingBorder_Straight-01_BP.Murkoff_ExitCeilingBorder_Straight-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMurkoff_ExitCeilingBorder_Straight__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Murkoff_ExitCeilingBorder_Straight-01_BP.Murkoff_ExitCeilingBorder_Straight-01_BP_C.UserConstructionScript");
		
		AMurkoff_ExitCeilingBorder_Straight__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMurkoff_ExitCeilingBorder_Straight__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMurkoff_ExitCeilingBorder_Straight__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Murkoff_ExitCeilingBorder_Straight_01_BP.Murkoff_ExitCeilingBorder_Straight-01_BP_C");
		return ptr;
	}

}


