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
	 * 		Name   -> Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USASChair_ChairAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimGraph");
		
		USASChair_ChairAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.SetShouldFaceTV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USASChair_ChairAnimBP_C::SetShouldFaceTV(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.SetShouldFaceTV");
		
		USASChair_ChairAnimBP_C_SetShouldFaceTV_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_OnIdle
	 * 		Flags  -> ()
	 */
	void USASChair_ChairAnimBP_C::AnimNotify_OnIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_OnIdle");
		
		USASChair_ChairAnimBP_C_AnimNotify_OnIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_OnFacingTV
	 * 		Flags  -> ()
	 */
	void USASChair_ChairAnimBP_C::AnimNotify_OnFacingTV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_OnFacingTV");
		
		USASChair_ChairAnimBP_C_AnimNotify_OnFacingTV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_ChairLeave
	 * 		Flags  -> ()
	 */
	void USASChair_ChairAnimBP_C::AnimNotify_ChairLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_ChairLeave");
		
		USASChair_ChairAnimBP_C_AnimNotify_ChairLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USASChair_ChairAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.BlueprintUpdateAnimation");
		
		USASChair_ChairAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.ExecuteUbergraph_SASChair_ChairAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USASChair_ChairAnimBP_C::ExecuteUbergraph_SASChair_ChairAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.ExecuteUbergraph_SASChair_ChairAnimBP");
		
		USASChair_ChairAnimBP_C_ExecuteUbergraph_SASChair_ChairAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USASChair_ChairAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USASChair_ChairAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SASChair_ChairAnimBP.SASChair_ChairAnimBP_C");
		return ptr;
	}

}


