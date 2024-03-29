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
	 * 		Name   -> Function SJ_ElectricSpark_Intercom-01_BP.SJ_ElectricSpark_Intercom-01_BP_C.CanTriggerScareJump
	 * 		Flags  -> ()
	 */
	bool ASJ_ElectricSpark_Intercom01_BP_C::CanTriggerScareJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_ElectricSpark_Intercom-01_BP.SJ_ElectricSpark_Intercom-01_BP_C.CanTriggerScareJump");
		
		ASJ_ElectricSpark_Intercom01_BP_C_CanTriggerScareJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASJ_ElectricSpark_Intercom01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_ElectricSpark_Intercom01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_ElectricSpark_Intercom_01_BP.SJ_ElectricSpark_Intercom-01_BP_C");
		return ptr;
	}

}


