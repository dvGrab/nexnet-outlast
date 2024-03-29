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
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UHackPanel__GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimGraph");
		
		UHackPanel__GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UHackPanel__GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.FinishGhost");
		
		UHackPanel__GhostAnimBP_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel-02_GhostAnimBP_AnimGraphNode_TransitionResult_180D392748E14FFDEEFEDD8282C505F7
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel__GhostAnimBP_AnimGraphNode_TransitionResult_180D392748E14FFDEEFEDD8282C505F7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel-02_GhostAnimBP_AnimGraphNode_TransitionResult_180D392748E14FFDEEFEDD8282C505F7");
		
		UHackPanel__GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel__GhostAnimBP_AnimGraphNode_TransitionResult_180D392748E14FFDEEFEDD8282C505F7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel-02_GhostAnimBP_AnimGraphNode_BlendListByBool_95A43F584624DE3DB36C0286487F5509
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel__GhostAnimBP_AnimGraphNode_BlendListByBool_95A43F584624DE3DB36C0286487F5509()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel-02_GhostAnimBP_AnimGraphNode_BlendListByBool_95A43F584624DE3DB36C0286487F5509");
		
		UHackPanel__GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel__GhostAnimBP_AnimGraphNode_BlendListByBool_95A43F584624DE3DB36C0286487F5509_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel-02_GhostAnimBP_AnimGraphNode_TransitionResult_04FC446749FC77D79D5B3BAEF75D2924
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel__GhostAnimBP_AnimGraphNode_TransitionResult_04FC446749FC77D79D5B3BAEF75D2924()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel-02_GhostAnimBP_AnimGraphNode_TransitionResult_04FC446749FC77D79D5B3BAEF75D2924");
		
		UHackPanel__GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel__GhostAnimBP_AnimGraphNode_TransitionResult_04FC446749FC77D79D5B3BAEF75D2924_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel-02_GhostAnimBP_AnimGraphNode_TransitionResult_82E12932416CB3033E600795B1745E18
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel__GhostAnimBP_AnimGraphNode_TransitionResult_82E12932416CB3033E600795B1745E18()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel-02_GhostAnimBP_AnimGraphNode_TransitionResult_82E12932416CB3033E600795B1745E18");
		
		UHackPanel__GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HackPanel__GhostAnimBP_AnimGraphNode_TransitionResult_82E12932416CB3033E600795B1745E18_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.Stop Animation
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::Stop_Animation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.Stop Animation");
		
		UHackPanel__GhostAnimBP_C_Stop_Animation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.BP_InitializeGhost");
		
		UHackPanel__GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimNotify_FailDone
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::AnimNotify_FailDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimNotify_FailDone");
		
		UHackPanel__GhostAnimBP_C_AnimNotify_FailDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimNotify_SuccessDone
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::AnimNotify_SuccessDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimNotify_SuccessDone");
		
		UHackPanel__GhostAnimBP_C_AnimNotify_SuccessDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.OnGhostAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostAnimEvent                                    animEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        animEventName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHackPanel__GhostAnimBP_C::OnGhostAnimNotify(EGhostAnimEvent animEvent, const class FName& animEventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.OnGhostAnimNotify");
		
		UHackPanel__GhostAnimBP_C_OnGhostAnimNotify_Params params {};
		params.animEvent = animEvent;
		params.animEventName = animEventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.DetachPanel
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::DetachPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.DetachPanel");
		
		UHackPanel__GhostAnimBP_C_DetachPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AttachPanel
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::AttachPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AttachPanel");
		
		UHackPanel__GhostAnimBP_C_AttachPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimNotify_Finish
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::AnimNotify_Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimNotify_Finish");
		
		UHackPanel__GhostAnimBP_C_AnimNotify_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.BP_ClearGhost
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::BP_ClearGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.BP_ClearGhost");
		
		UHackPanel__GhostAnimBP_C_BP_ClearGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.OnStageSucceeded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHackPanel__GhostAnimBP_C::OnStageSucceeded_Event(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.OnStageSucceeded_Event");
		
		UHackPanel__GhostAnimBP_C_OnStageSucceeded_Event_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimNotify_EnterHold
	 * 		Flags  -> ()
	 */
	void UHackPanel__GhostAnimBP_C::AnimNotify_EnterHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.AnimNotify_EnterHold");
		
		UHackPanel__GhostAnimBP_C_AnimNotify_EnterHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.OnSoftFail_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHackPanel__GhostAnimBP_C::OnSoftFail_Event(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.OnSoftFail_Event");
		
		UHackPanel__GhostAnimBP_C_OnSoftFail_Event_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.ExecuteUbergraph_HackPanel-02_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHackPanel__GhostAnimBP_C::ExecuteUbergraph_HackPanel__GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HackPanel-02_GhostAnimBP.HackPanel-02_GhostAnimBP_C.ExecuteUbergraph_HackPanel-02_GhostAnimBP");
		
		UHackPanel__GhostAnimBP_C_ExecuteUbergraph_HackPanel__GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHackPanel__GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHackPanel__GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass HackPanel_02_GhostAnimBP.HackPanel-02_GhostAnimBP_C");
		return ptr;
	}

}


