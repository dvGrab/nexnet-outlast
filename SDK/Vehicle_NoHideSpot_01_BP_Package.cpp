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
	 * 		Name   -> Function Vehicle_NoHideSpot-01_BP.Vehicle_NoHideSpot-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AVehicle_NoHideSpot__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vehicle_NoHideSpot-01_BP.Vehicle_NoHideSpot-01_BP_C.UserConstructionScript");
		
		AVehicle_NoHideSpot__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVehicle_NoHideSpot__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVehicle_NoHideSpot__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Vehicle_NoHideSpot_01_BP.Vehicle_NoHideSpot-01_BP_C");
		return ptr;
	}

}


