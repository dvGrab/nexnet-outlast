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
	 * 		Name   -> Function BP_FX_ENV_SparkFlash.BP_FX_ENV_SparkFlash_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_SparkFlash_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkFlash.BP_FX_ENV_SparkFlash_C.UserConstructionScript");
		
		ABP_FX_ENV_SparkFlash_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_SparkFlash.BP_FX_ENV_SparkFlash_C.Spawn_Spark
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_SparkFlash_C::Spawn_Spark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkFlash.BP_FX_ENV_SparkFlash_C.Spawn_Spark");
		
		ABP_FX_ENV_SparkFlash_C_Spawn_Spark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_SparkFlash.BP_FX_ENV_SparkFlash_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FX_ENV_SparkFlash_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkFlash.BP_FX_ENV_SparkFlash_C.ReceiveBeginPlay");
		
		ABP_FX_ENV_SparkFlash_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ENV_SparkFlash.BP_FX_ENV_SparkFlash_C.ExecuteUbergraph_BP_FX_ENV_SparkFlash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_ENV_SparkFlash_C::ExecuteUbergraph_BP_FX_ENV_SparkFlash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ENV_SparkFlash.BP_FX_ENV_SparkFlash_C.ExecuteUbergraph_BP_FX_ENV_SparkFlash");
		
		ABP_FX_ENV_SparkFlash_C_ExecuteUbergraph_BP_FX_ENV_SparkFlash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_ENV_SparkFlash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_ENV_SparkFlash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_ENV_SparkFlash.BP_FX_ENV_SparkFlash_C");
		return ptr;
	}

}


