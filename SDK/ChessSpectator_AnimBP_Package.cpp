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
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UChessSpectator_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimGraph");
		
		UChessSpectator_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UChessSpectator_AnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.FinishGhost");
		
		UChessSpectator_AnimBP_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_EF9EFD0E44872E9C83DF399F9A558EE8
	 * 		Flags  -> ()
	 */
	void UChessSpectator_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_EF9EFD0E44872E9C83DF399F9A558EE8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_EF9EFD0E44872E9C83DF399F9A558EE8");
		
		UChessSpectator_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_EF9EFD0E44872E9C83DF399F9A558EE8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_037C8ADC4AEEBADC4E22AF936A899D02
	 * 		Flags  -> ()
	 */
	void UChessSpectator_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_037C8ADC4AEEBADC4E22AF936A899D02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_037C8ADC4AEEBADC4E22AF936A899D02");
		
		UChessSpectator_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_037C8ADC4AEEBADC4E22AF936A899D02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_C3D093CA4976A71660805899C315CBFD
	 * 		Flags  -> ()
	 */
	void UChessSpectator_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_C3D093CA4976A71660805899C315CBFD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_C3D093CA4976A71660805899C315CBFD");
		
		UChessSpectator_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_C3D093CA4976A71660805899C315CBFD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimNotify_Exit
	 * 		Flags  -> ()
	 */
	void UChessSpectator_AnimBP_C::AnimNotify_Exit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimNotify_Exit");
		
		UChessSpectator_AnimBP_C_AnimNotify_Exit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimNotify_Emote
	 * 		Flags  -> ()
	 */
	void UChessSpectator_AnimBP_C::AnimNotify_Emote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimNotify_Emote");
		
		UChessSpectator_AnimBP_C_AnimNotify_Emote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimNotify_EnteredPounding
	 * 		Flags  -> ()
	 */
	void UChessSpectator_AnimBP_C::AnimNotify_EnteredPounding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimNotify_EnteredPounding");
		
		UChessSpectator_AnimBP_C_AnimNotify_EnteredPounding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UChessSpectator_AnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.BP_InitializeGhost");
		
		UChessSpectator_AnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimNotify_Enter
	 * 		Flags  -> ()
	 */
	void UChessSpectator_AnimBP_C::AnimNotify_Enter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.AnimNotify_Enter");
		
		UChessSpectator_AnimBP_C_AnimNotify_Enter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.ExecuteUbergraph_ChessSpectator_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessSpectator_AnimBP_C::ExecuteUbergraph_ChessSpectator_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessSpectator_AnimBP.ChessSpectator_AnimBP_C.ExecuteUbergraph_ChessSpectator_AnimBP");
		
		UChessSpectator_AnimBP_C_ExecuteUbergraph_ChessSpectator_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChessSpectator_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChessSpectator_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ChessSpectator_AnimBP.ChessSpectator_AnimBP_C");
		return ptr;
	}

}


