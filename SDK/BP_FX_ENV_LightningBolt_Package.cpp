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
	 * 		Name   -> Function BP_FX_ENV_LightningBolt.BP_FX_ENV_LightningBolt_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_LightningBolt_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_LightningBolt.BP_FX_ENV_LightningBolt_C.UserConstructionScript");
		
		ABP_FX_ENV_LightningBolt_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_LightningBolt.BP_FX_ENV_LightningBolt_C.SpawnLightningShock
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_LightningBolt_C::SpawnLightningShock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_LightningBolt.BP_FX_ENV_LightningBolt_C.SpawnLightningShock");
		
		ABP_FX_ENV_LightningBolt_C_SpawnLightningShock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_LightningBolt.BP_FX_ENV_LightningBolt_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_LightningBolt_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_LightningBolt.BP_FX_ENV_LightningBolt_C.ReceiveBeginPlay");
		
		ABP_FX_ENV_LightningBolt_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_LightningBolt.BP_FX_ENV_LightningBolt_C.ExecuteUbergraph_BP_FX_ENV_LightningBolt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_ENV_LightningBolt_C::ExecuteUbergraph_BP_FX_ENV_LightningBolt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_LightningBolt.BP_FX_ENV_LightningBolt_C.ExecuteUbergraph_BP_FX_ENV_LightningBolt");
		
		ABP_FX_ENV_LightningBolt_C_ExecuteUbergraph_BP_FX_ENV_LightningBolt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_ENV_LightningBolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_ENV_LightningBolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_ENV_LightningBolt.BP_FX_ENV_LightningBolt_C");
		return ptr;
	}

}


