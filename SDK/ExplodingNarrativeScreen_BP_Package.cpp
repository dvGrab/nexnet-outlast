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
	 * 		Name   -> Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.OnRep_Broken
	 * 		Flags  -> ()
	 */
	void AExplodingNarrativeScreen_BP_C::OnRep_Broken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.OnRep_Broken");
		
		AExplodingNarrativeScreen_BP_C_OnRep_Broken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.Break
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayRangeMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExplodingNarrativeScreen_BP_C::Break(float DelayRangeMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.Break");
		
		AExplodingNarrativeScreen_BP_C_Break_Params params {};
		params.DelayRangeMax = DelayRangeMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AExplodingNarrativeScreen_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.Event_OnResetStage");
		
		AExplodingNarrativeScreen_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.ApplyBreakEffects
	 * 		Flags  -> ()
	 */
	void AExplodingNarrativeScreen_BP_C::ApplyBreakEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.ApplyBreakEffects");
		
		AExplodingNarrativeScreen_BP_C_ApplyBreakEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.ClearBreakEffects
	 * 		Flags  -> ()
	 */
	void AExplodingNarrativeScreen_BP_C::ClearBreakEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.ClearBreakEffects");
		
		AExplodingNarrativeScreen_BP_C_ClearBreakEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.ExecuteUbergraph_ExplodingNarrativeScreen_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExplodingNarrativeScreen_BP_C::ExecuteUbergraph_ExplodingNarrativeScreen_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C.ExecuteUbergraph_ExplodingNarrativeScreen_BP");
		
		AExplodingNarrativeScreen_BP_C_ExecuteUbergraph_ExplodingNarrativeScreen_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExplodingNarrativeScreen_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplodingNarrativeScreen_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplodingNarrativeScreen_BP.ExplodingNarrativeScreen_BP_C");
		return ptr;
	}

}


