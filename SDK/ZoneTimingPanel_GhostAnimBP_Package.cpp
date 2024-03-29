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
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UZoneTimingPanel_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimGraph");
		
		UZoneTimingPanel_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.PlayHandleAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWin                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETimingInputResultType                             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UZoneTimingPanel_GhostAnimBP_C::PlayHandleAnimation(bool IsWin, ETimingInputResultType Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.PlayHandleAnimation");
		
		UZoneTimingPanel_GhostAnimBP_C_PlayHandleAnimation_Params params {};
		params.IsWin = IsWin;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UZoneTimingPanel_GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.FinishGhost");
		
		UZoneTimingPanel_GhostAnimBP_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.IsGameplayCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZoneTimingPanel_GhostAnimBP_C::IsGameplayCompleted(bool* completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.IsGameplayCompleted");
		
		UZoneTimingPanel_GhostAnimBP_C_IsGameplayCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (completed != nullptr)
			*completed = params.completed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_55BAD8D248767A509558DDBD1732AD8B
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_55BAD8D248767A509558DDBD1732AD8B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_55BAD8D248767A509558DDBD1732AD8B");
		
		UZoneTimingPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_55BAD8D248767A509558DDBD1732AD8B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_0C5102BF4E32A86A96A556A054CEB926
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_0C5102BF4E32A86A96A556A054CEB926()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_0C5102BF4E32A86A96A556A054CEB926");
		
		UZoneTimingPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_0C5102BF4E32A86A96A556A054CEB926_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2D1A56E5492C202037EF1DB46AAA8918
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2D1A56E5492C202037EF1DB46AAA8918()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2D1A56E5492C202037EF1DB46AAA8918");
		
		UZoneTimingPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2D1A56E5492C202037EF1DB46AAA8918_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_E2DA909E4F537B41E4E99194BBBF9C77
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_E2DA909E4F537B41E4E99194BBBF9C77()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_E2DA909E4F537B41E4E99194BBBF9C77");
		
		UZoneTimingPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_E2DA909E4F537B41E4E99194BBBF9C77_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_DB7D910542FD83701E37EC96BEC0952D
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_DB7D910542FD83701E37EC96BEC0952D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_DB7D910542FD83701E37EC96BEC0952D");
		
		UZoneTimingPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_DB7D910542FD83701E37EC96BEC0952D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_421E4A2E427270F6B0A212B101BA0F6C
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_421E4A2E427270F6B0A212B101BA0F6C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_421E4A2E427270F6B0A212B101BA0F6C");
		
		UZoneTimingPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_421E4A2E427270F6B0A212B101BA0F6C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_3B5BB8DF40BE74EFC561B3A3985BC47C
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_3B5BB8DF40BE74EFC561B3A3985BC47C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_3B5BB8DF40BE74EFC561B3A3985BC47C");
		
		UZoneTimingPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_3B5BB8DF40BE74EFC561B3A3985BC47C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.BP_InitializeGhost");
		
		UZoneTimingPanel_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_TurnStart
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::AnimNotify_TurnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_TurnStart");
		
		UZoneTimingPanel_GhostAnimBP_C_AnimNotify_TurnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_EntryDone
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::AnimNotify_EntryDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_EntryDone");
		
		UZoneTimingPanel_GhostAnimBP_C_AnimNotify_EntryDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_Finished
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::AnimNotify_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_Finished");
		
		UZoneTimingPanel_GhostAnimBP_C_AnimNotify_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.BP_ClearGhost
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::BP_ClearGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.BP_ClearGhost");
		
		UZoneTimingPanel_GhostAnimBP_C_BP_ClearGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_EnterHold
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::AnimNotify_EnterHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_EnterHold");
		
		UZoneTimingPanel_GhostAnimBP_C_AnimNotify_EnterHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.CustomEvent_1");
		
		UZoneTimingPanel_GhostAnimBP_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.Minigame Result
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBZoneTimingPanelComponent*                 panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            targetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Timestamp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETimingInputResultType                             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UZoneTimingPanel_GhostAnimBP_C::MinigameResult(class URBZoneTimingPanelComponent* panel, class ARBPlayer* Player, int32_t targetIndex, float Timestamp, ETimingInputResultType Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.Minigame Result");
		
		UZoneTimingPanel_GhostAnimBP_C_MinigameResult_Params params {};
		params.panel = panel;
		params.Player = Player;
		params.targetIndex = targetIndex;
		params.Timestamp = Timestamp;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_Leave
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::AnimNotify_Leave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_Leave");
		
		UZoneTimingPanel_GhostAnimBP_C_AnimNotify_Leave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_Win
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::AnimNotify_Win()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.AnimNotify_Win");
		
		UZoneTimingPanel_GhostAnimBP_C_AnimNotify_Win_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UZoneTimingPanel_GhostAnimBP_C::ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP");
		
		UZoneTimingPanel_GhostAnimBP_C_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.FinishedComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::FinishedComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.FinishedComplete__DelegateSignature");
		
		UZoneTimingPanel_GhostAnimBP_C_FinishedComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EntryComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanel_GhostAnimBP_C::EntryComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C.EntryComplete__DelegateSignature");
		
		UZoneTimingPanel_GhostAnimBP_C_EntryComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZoneTimingPanel_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZoneTimingPanel_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C");
		return ptr;
	}

}


