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
	 * 		Name   -> Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal01__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_ItemConsume_Heal_C::Heal01__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal01__FinishedFunc");
		
		ABP_FX_ItemConsume_Heal_C_Heal01__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal01__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_ItemConsume_Heal_C::Heal01__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal01__UpdateFunc");
		
		ABP_FX_ItemConsume_Heal_C_Heal01__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal02_Smooth__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_ItemConsume_Heal_C::Heal02_Smooth__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal02_Smooth__FinishedFunc");
		
		ABP_FX_ItemConsume_Heal_C_Heal02_Smooth__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal02_Smooth__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FX_ItemConsume_Heal_C::Heal02_Smooth__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal02_Smooth__UpdateFunc");
		
		ABP_FX_ItemConsume_Heal_C_Heal02_Smooth__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FX_ItemConsume_Heal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.ReceiveBeginPlay");
		
		ABP_FX_ItemConsume_Heal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.ExecuteUbergraph_BP_FX_ItemConsume_Heal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_ItemConsume_Heal_C::ExecuteUbergraph_BP_FX_ItemConsume_Heal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.ExecuteUbergraph_BP_FX_ItemConsume_Heal");
		
		ABP_FX_ItemConsume_Heal_C_ExecuteUbergraph_BP_FX_ItemConsume_Heal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_ItemConsume_Heal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_ItemConsume_Heal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C");
		return ptr;
	}

}


