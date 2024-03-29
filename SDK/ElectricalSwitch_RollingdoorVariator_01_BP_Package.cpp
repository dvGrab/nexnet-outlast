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
	 * 		Name   -> Function ElectricalSwitch-RollingdoorVariator-01_BP.ElectricalSwitch-RollingdoorVariator-01_BP_C.TryResetSwitch
	 * 		Flags  -> ()
	 */
	void AElectricalSwitch_RollingdoorVariator__BP_C::TryResetSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricalSwitch-RollingdoorVariator-01_BP.ElectricalSwitch-RollingdoorVariator-01_BP_C.TryResetSwitch");
		
		AElectricalSwitch_RollingdoorVariator__BP_C_TryResetSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectricalSwitch_RollingdoorVariator__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectricalSwitch_RollingdoorVariator__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectricalSwitch_RollingdoorVariator_01_BP.ElectricalSwitch-RollingdoorVariator-01_BP_C");
		return ptr;
	}

}


