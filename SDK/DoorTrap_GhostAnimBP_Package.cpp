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
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDoorTrap_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.AnimGraph");
		
		UDoorTrap_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UDoorTrap_GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.FinishGhost");
		
		UDoorTrap_GhostAnimBP_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9F1093994A9181A8611176AC74423FB2
	 * 		Flags  -> ()
	 */
	void UDoorTrap_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9F1093994A9181A8611176AC74423FB2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9F1093994A9181A8611176AC74423FB2");
		
		UDoorTrap_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9F1093994A9181A8611176AC74423FB2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_577D8F8D41BB1F9DD0D661A410CCD875
	 * 		Flags  -> ()
	 */
	void UDoorTrap_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_577D8F8D41BB1F9DD0D661A410CCD875()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_577D8F8D41BB1F9DD0D661A410CCD875");
		
		UDoorTrap_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_577D8F8D41BB1F9DD0D661A410CCD875_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9CD9F7154AA6629B65EA898BF8FAAF4B
	 * 		Flags  -> ()
	 */
	void UDoorTrap_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9CD9F7154AA6629B65EA898BF8FAAF4B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9CD9F7154AA6629B65EA898BF8FAAF4B");
		
		UDoorTrap_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9CD9F7154AA6629B65EA898BF8FAAF4B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_DAD92257416CBE228F3739A9F16B6B0B
	 * 		Flags  -> ()
	 */
	void UDoorTrap_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_DAD92257416CBE228F3739A9F16B6B0B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_DAD92257416CBE228F3739A9F16B6B0B");
		
		UDoorTrap_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_DAD92257416CBE228F3739A9F16B6B0B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_BB6F6C3A4C989E1ADEF73A98D2E8978C
	 * 		Flags  -> ()
	 */
	void UDoorTrap_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_BB6F6C3A4C989E1ADEF73A98D2E8978C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_BB6F6C3A4C989E1ADEF73A98D2E8978C");
		
		UDoorTrap_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_BB6F6C3A4C989E1ADEF73A98D2E8978C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UDoorTrap_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.BP_InitializeGhost");
		
		UDoorTrap_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.AnimNotify_Finish
	 * 		Flags  -> ()
	 */
	void UDoorTrap_GhostAnimBP_C::AnimNotify_Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.AnimNotify_Finish");
		
		UDoorTrap_GhostAnimBP_C_AnimNotify_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.AnimNotify_SuccessDone
	 * 		Flags  -> ()
	 */
	void UDoorTrap_GhostAnimBP_C::AnimNotify_SuccessDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.AnimNotify_SuccessDone");
		
		UDoorTrap_GhostAnimBP_C_AnimNotify_SuccessDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.AnimNotify_EntryDone
	 * 		Flags  -> ()
	 */
	void UDoorTrap_GhostAnimBP_C::AnimNotify_EntryDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.AnimNotify_EntryDone");
		
		UDoorTrap_GhostAnimBP_C_AnimNotify_EntryDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.ExecuteUbergraph_DoorTrap_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDoorTrap_GhostAnimBP_C::ExecuteUbergraph_DoorTrap_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C.ExecuteUbergraph_DoorTrap_GhostAnimBP");
		
		UDoorTrap_GhostAnimBP_C_ExecuteUbergraph_DoorTrap_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoorTrap_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoorTrap_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C");
		return ptr;
	}

}


