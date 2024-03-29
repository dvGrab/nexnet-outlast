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
	 * 		Name   -> Function Battery-01_BP.Battery-01_BP_C.PlayBurnedSFX
	 * 		Flags  -> ()
	 */
	void ABattery__BP_C::PlayBurnedSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Battery-01_BP.Battery-01_BP_C.PlayBurnedSFX");
		
		ABattery__BP_C_PlayBurnedSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Battery-01_BP.Battery-01_BP_C.PlayBurnedVFX
	 * 		Flags  -> ()
	 */
	void ABattery__BP_C::PlayBurnedVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Battery-01_BP.Battery-01_BP_C.PlayBurnedVFX");
		
		ABattery__BP_C_PlayBurnedVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Battery-01_BP.Battery-01_BP_C.OnRep_bBurned
	 * 		Flags  -> ()
	 */
	void ABattery__BP_C::OnRep_bBurned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Battery-01_BP.Battery-01_BP_C.OnRep_bBurned");
		
		ABattery__BP_C_OnRep_bBurned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Battery-01_BP.Battery-01_BP_C.SetBurned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewBurnedState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABattery__BP_C::SetBurned(bool bNewBurnedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Battery-01_BP.Battery-01_BP_C.SetBurned");
		
		ABattery__BP_C_SetBurned_Params params {};
		params.bNewBurnedState = bNewBurnedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Battery-01_BP.Battery-01_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABattery__BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Battery-01_BP.Battery-01_BP_C.Timeline_0__FinishedFunc");
		
		ABattery__BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Battery-01_BP.Battery-01_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABattery__BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Battery-01_BP.Battery-01_BP_C.Timeline_0__UpdateFunc");
		
		ABattery__BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Battery-01_BP.Battery-01_BP_C.OnConsumeItemCancelledNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattery__BP_C::OnConsumeItemCancelledNotify(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Battery-01_BP.Battery-01_BP_C.OnConsumeItemCancelledNotify");
		
		ABattery__BP_C_OnConsumeItemCancelledNotify_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Battery-01_BP.Battery-01_BP_C.OnConsumeItemStartNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattery__BP_C::OnConsumeItemStartNotify(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Battery-01_BP.Battery-01_BP_C.OnConsumeItemStartNotify");
		
		ABattery__BP_C_OnConsumeItemStartNotify_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Battery-01_BP.Battery-01_BP_C.ExecuteUbergraph_Battery-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattery__BP_C::ExecuteUbergraph_Battery__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Battery-01_BP.Battery-01_BP_C.ExecuteUbergraph_Battery-01_BP");
		
		ABattery__BP_C_ExecuteUbergraph_Battery__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABattery__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABattery__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Battery_01_BP.Battery-01_BP_C");
		return ptr;
	}

}


