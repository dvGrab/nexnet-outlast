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
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USASChair_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimGraph");
		
		USASChair_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USASChair_GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.FinishGhost");
		
		USASChair_GhostAnimBP_C_FinishGhost_Params params {};
		params.finishReason = finishReason;
		params.GhostFinishCustomReason = GhostFinishCustomReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimNotify_Finished
	 * 		Flags  -> ()
	 */
	void USASChair_GhostAnimBP_C::AnimNotify_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimNotify_Finished");
		
		USASChair_GhostAnimBP_C_AnimNotify_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void USASChair_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BP_InitializeGhost");
		
		USASChair_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.OnShouldFaceTVChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USASChair_GhostAnimBP_C::OnShouldFaceTVChanged(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.OnShouldFaceTVChanged");
		
		USASChair_GhostAnimBP_C_OnShouldFaceTVChanged_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimNotify_EnteredTVState
	 * 		Flags  -> ()
	 */
	void USASChair_GhostAnimBP_C::AnimNotify_EnteredTVState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimNotify_EnteredTVState");
		
		USASChair_GhostAnimBP_C_AnimNotify_EnteredTVState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void USASChair_GhostAnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BlueprintInitializeAnimation");
		
		USASChair_GhostAnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USASChair_GhostAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BlueprintUpdateAnimation");
		
		USASChair_GhostAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.ExecuteUbergraph_SASChair_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USASChair_GhostAnimBP_C::ExecuteUbergraph_SASChair_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.ExecuteUbergraph_SASChair_GhostAnimBP");
		
		USASChair_GhostAnimBP_C_ExecuteUbergraph_SASChair_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.NewEventDispatcher_0__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USASChair_GhostAnimBP_C::NewEventDispatcher_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.NewEventDispatcher_0__DelegateSignature");
		
		USASChair_GhostAnimBP_C_NewEventDispatcher_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USASChair_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USASChair_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SASChair_GhostAnimBP.SASChair_GhostAnimBP_C");
		return ptr;
	}

}


