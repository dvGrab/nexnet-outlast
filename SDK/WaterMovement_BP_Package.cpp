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
	 * 		Name   -> Function WaterMovement_BP.WaterMovement_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AWaterMovement_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterMovement_BP.WaterMovement_BP_C.Timeline_0__FinishedFunc");
		
		AWaterMovement_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaterMovement_BP.WaterMovement_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AWaterMovement_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterMovement_BP.WaterMovement_BP_C.Timeline_0__UpdateFunc");
		
		AWaterMovement_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaterMovement_BP.WaterMovement_BP_C.StartWave
	 * 		Flags  -> ()
	 */
	void AWaterMovement_BP_C::StartWave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterMovement_BP.WaterMovement_BP_C.StartWave");
		
		AWaterMovement_BP_C_StartWave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaterMovement_BP.WaterMovement_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWaterMovement_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterMovement_BP.WaterMovement_BP_C.ReceiveBeginPlay");
		
		AWaterMovement_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaterMovement_BP.WaterMovement_BP_C.ExecuteUbergraph_WaterMovement_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWaterMovement_BP_C::ExecuteUbergraph_WaterMovement_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterMovement_BP.WaterMovement_BP_C.ExecuteUbergraph_WaterMovement_BP");
		
		AWaterMovement_BP_C_ExecuteUbergraph_WaterMovement_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterMovement_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterMovement_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaterMovement_BP.WaterMovement_BP_C");
		return ptr;
	}

}


