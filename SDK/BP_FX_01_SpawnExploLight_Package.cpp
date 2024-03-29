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
	 * 		Name   -> Function BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_01_SpawnExploLight_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C.Timeline_0__FinishedFunc");
		
		ABP_FX_01_SpawnExploLight_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_01_SpawnExploLight_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C.Timeline_0__UpdateFunc");
		
		ABP_FX_01_SpawnExploLight_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FX_01_SpawnExploLight_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C.ReceiveBeginPlay");
		
		ABP_FX_01_SpawnExploLight_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C.ExecuteUbergraph_BP_FX_01_SpawnExploLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_01_SpawnExploLight_C::ExecuteUbergraph_BP_FX_01_SpawnExploLight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C.ExecuteUbergraph_BP_FX_01_SpawnExploLight");
		
		ABP_FX_01_SpawnExploLight_C_ExecuteUbergraph_BP_FX_01_SpawnExploLight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_01_SpawnExploLight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_01_SpawnExploLight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C");
		return ptr;
	}

}


