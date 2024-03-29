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
	 * 		Name   -> Function 4LightSelector_BP.4LightSelector_BP_C.UpdateLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsGreen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void A4LightSelector_BP_C::UpdateLight(int32_t Value, bool IsGreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 4LightSelector_BP.4LightSelector_BP_C.UpdateLight");
		
		A4LightSelector_BP_C_UpdateLight_Params params {};
		params.Value = Value;
		params.IsGreen = IsGreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 4LightSelector_BP.4LightSelector_BP_C.OnRep_BreakLoop
	 * 		Flags  -> ()
	 */
	void A4LightSelector_BP_C::OnRep_BreakLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 4LightSelector_BP.4LightSelector_BP_C.OnRep_BreakLoop");
		
		A4LightSelector_BP_C_OnRep_BreakLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 4LightSelector_BP.4LightSelector_BP_C.SetAllLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Light1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Light2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Light3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Light4                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void A4LightSelector_BP_C::SetAllLight(bool Light1, bool Light2, bool Light3, bool Light4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 4LightSelector_BP.4LightSelector_BP_C.SetAllLight");
		
		A4LightSelector_BP_C_SetAllLight_Params params {};
		params.Light1 = Light1;
		params.Light2 = Light2;
		params.Light3 = Light3;
		params.Light4 = Light4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 4LightSelector_BP.4LightSelector_BP_C.SetSelectorNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void A4LightSelector_BP_C::SetSelectorNumber(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 4LightSelector_BP.4LightSelector_BP_C.SetSelectorNumber");
		
		A4LightSelector_BP_C_SetSelectorNumber_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 4LightSelector_BP.4LightSelector_BP_C.UpdateLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SetNumber                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InitialDelay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LoopNumberMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LoopNumberMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LoopDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OpenClose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void A4LightSelector_BP_C::UpdateLoop(int32_t SetNumber, float InitialDelay, int32_t LoopNumberMin, int32_t LoopNumberMax, float LoopDuration, bool OpenClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 4LightSelector_BP.4LightSelector_BP_C.UpdateLoop");
		
		A4LightSelector_BP_C_UpdateLoop_Params params {};
		params.SetNumber = SetNumber;
		params.InitialDelay = InitialDelay;
		params.LoopNumberMin = LoopNumberMin;
		params.LoopNumberMax = LoopNumberMax;
		params.LoopDuration = LoopDuration;
		params.OpenClose = OpenClose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 4LightSelector_BP.4LightSelector_BP_C.UpdateLoopCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              timeLength                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              counterDelay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OpenClose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void A4LightSelector_BP_C::UpdateLoopCountdown(float timeLength, float counterDelay, bool OpenClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 4LightSelector_BP.4LightSelector_BP_C.UpdateLoopCountdown");
		
		A4LightSelector_BP_C_UpdateLoopCountdown_Params params {};
		params.timeLength = timeLength;
		params.counterDelay = counterDelay;
		params.OpenClose = OpenClose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 4LightSelector_BP.4LightSelector_BP_C.ExecuteUbergraph_4LightSelector_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void A4LightSelector_BP_C::ExecuteUbergraph_4LightSelector_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 4LightSelector_BP.4LightSelector_BP_C.ExecuteUbergraph_4LightSelector_BP");
		
		A4LightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction A4LightSelector_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* A4LightSelector_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass 4LightSelector_BP.4LightSelector_BP_C");
		return ptr;
	}

}


