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
	 * 		Name   -> Function BP_FX_ItemConsume_Respawn.BP_FX_ItemConsume_Respawn_C.TCV_RespawnSmooth__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_ItemConsume_Respawn_C::TCV_RespawnSmooth__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Respawn.BP_FX_ItemConsume_Respawn_C.TCV_RespawnSmooth__FinishedFunc");
		
		ABP_FX_ItemConsume_Respawn_C_TCV_RespawnSmooth__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ItemConsume_Respawn.BP_FX_ItemConsume_Respawn_C.TCV_RespawnSmooth__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_ItemConsume_Respawn_C::TCV_RespawnSmooth__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Respawn.BP_FX_ItemConsume_Respawn_C.TCV_RespawnSmooth__UpdateFunc");
		
		ABP_FX_ItemConsume_Respawn_C_TCV_RespawnSmooth__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ItemConsume_Respawn.BP_FX_ItemConsume_Respawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FX_ItemConsume_Respawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Respawn.BP_FX_ItemConsume_Respawn_C.ReceiveBeginPlay");
		
		ABP_FX_ItemConsume_Respawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ItemConsume_Respawn.BP_FX_ItemConsume_Respawn_C.ExecuteUbergraph_BP_FX_ItemConsume_Respawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_ItemConsume_Respawn_C::ExecuteUbergraph_BP_FX_ItemConsume_Respawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Respawn.BP_FX_ItemConsume_Respawn_C.ExecuteUbergraph_BP_FX_ItemConsume_Respawn");
		
		ABP_FX_ItemConsume_Respawn_C_ExecuteUbergraph_BP_FX_ItemConsume_Respawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_ItemConsume_Respawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_ItemConsume_Respawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_ItemConsume_Respawn.BP_FX_ItemConsume_Respawn_C");
		return ptr;
	}

}


