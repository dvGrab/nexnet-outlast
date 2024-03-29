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
	 * 		Name   -> Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_SparkBurst_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.UserConstructionScript");
		
		ABP_FX_ENV_SparkBurst_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_SparkBurst_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.Timeline_0__FinishedFunc");
		
		ABP_FX_ENV_SparkBurst_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_SparkBurst_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.Timeline_0__UpdateFunc");
		
		ABP_FX_ENV_SparkBurst_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_SparkBurst_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.ReceiveBeginPlay");
		
		ABP_FX_ENV_SparkBurst_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.Spawn_Spark02
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_SparkBurst_C::Spawn_Spark02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.Spawn_Spark02");
		
		ABP_FX_ENV_SparkBurst_C_Spawn_Spark02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.ExecuteUbergraph_BP_FX_ENV_SparkBurst
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_ENV_SparkBurst_C::ExecuteUbergraph_BP_FX_ENV_SparkBurst(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C.ExecuteUbergraph_BP_FX_ENV_SparkBurst");
		
		ABP_FX_ENV_SparkBurst_C_ExecuteUbergraph_BP_FX_ENV_SparkBurst_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_ENV_SparkBurst_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_ENV_SparkBurst_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_ENV_SparkBurst.BP_FX_ENV_SparkBurst_C");
		return ptr;
	}

}


