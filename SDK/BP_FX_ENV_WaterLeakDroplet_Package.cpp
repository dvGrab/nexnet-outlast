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
	 * 		Name   -> Function BP_FX_ENV_WaterLeakDroplet.BP_FX_ENV_WaterLeakDroplet_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_WaterLeakDroplet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_WaterLeakDroplet.BP_FX_ENV_WaterLeakDroplet_C.UserConstructionScript");
		
		ABP_FX_ENV_WaterLeakDroplet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_ENV_WaterLeakDroplet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_ENV_WaterLeakDroplet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_ENV_WaterLeakDroplet.BP_FX_ENV_WaterLeakDroplet_C");
		return ptr;
	}

}


