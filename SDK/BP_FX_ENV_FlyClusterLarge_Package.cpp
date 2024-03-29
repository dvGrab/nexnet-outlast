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
	 * 		Name   -> Function BP_FX_ENV_FlyClusterLarge.BP_FX_ENV_FlyClusterLarge_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_FlyClusterLarge_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_FlyClusterLarge.BP_FX_ENV_FlyClusterLarge_C.UserConstructionScript");
		
		ABP_FX_ENV_FlyClusterLarge_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_ENV_FlyClusterLarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_ENV_FlyClusterLarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_ENV_FlyClusterLarge.BP_FX_ENV_FlyClusterLarge_C");
		return ptr;
	}

}


