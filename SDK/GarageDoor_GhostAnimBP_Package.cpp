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
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UGarageDoor_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.AnimGraph");
		
		UGarageDoor_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGarageDoor_GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.FinishGhost");
		
		UGarageDoor_GhostAnimBP_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.GetCurrentGarageDoorHeightRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HeightRatio                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGarageDoor_GhostAnimBP_C::GetCurrentGarageDoorHeightRatio(float* HeightRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.GetCurrentGarageDoorHeightRatio");
		
		UGarageDoor_GhostAnimBP_C_GetCurrentGarageDoorHeightRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeightRatio != nullptr)
			*HeightRatio = params.HeightRatio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_D40F81CF4CF87C842BB5FCBC27E67962
	 * 		Flags  -> ()
	 */
	void UGarageDoor_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_D40F81CF4CF87C842BB5FCBC27E67962()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_D40F81CF4CF87C842BB5FCBC27E67962");
		
		UGarageDoor_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_D40F81CF4CF87C842BB5FCBC27E67962_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E9620A0540FA1E73238AF8A84A884782
	 * 		Flags  -> ()
	 */
	void UGarageDoor_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E9620A0540FA1E73238AF8A84A884782()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E9620A0540FA1E73238AF8A84A884782");
		
		UGarageDoor_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E9620A0540FA1E73238AF8A84A884782_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_SequenceEvaluator_5AAA0EDA49095AF564260C9435CEF136
	 * 		Flags  -> ()
	 */
	void UGarageDoor_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_SequenceEvaluator_5AAA0EDA49095AF564260C9435CEF136()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_SequenceEvaluator_5AAA0EDA49095AF564260C9435CEF136");
		
		UGarageDoor_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_SequenceEvaluator_5AAA0EDA49095AF564260C9435CEF136_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_TransitionResult_A5EE02094A5E17E6834EB185ADA9BE5D
	 * 		Flags  -> ()
	 */
	void UGarageDoor_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_TransitionResult_A5EE02094A5E17E6834EB185ADA9BE5D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_TransitionResult_A5EE02094A5E17E6834EB185ADA9BE5D");
		
		UGarageDoor_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_TransitionResult_A5EE02094A5E17E6834EB185ADA9BE5D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UGarageDoor_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.BP_InitializeGhost");
		
		UGarageDoor_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.AnimNotify_ActionDone
	 * 		Flags  -> ()
	 */
	void UGarageDoor_GhostAnimBP_C::AnimNotify_ActionDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.AnimNotify_ActionDone");
		
		UGarageDoor_GhostAnimBP_C_AnimNotify_ActionDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.AnimNotify_StepInDone
	 * 		Flags  -> ()
	 */
	void UGarageDoor_GhostAnimBP_C::AnimNotify_StepInDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.AnimNotify_StepInDone");
		
		UGarageDoor_GhostAnimBP_C_AnimNotify_StepInDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.ExecuteUbergraph_GarageDoor_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGarageDoor_GhostAnimBP_C::ExecuteUbergraph_GarageDoor_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.ExecuteUbergraph_GarageDoor_GhostAnimBP");
		
		UGarageDoor_GhostAnimBP_C_ExecuteUbergraph_GarageDoor_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGarageDoor_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGarageDoor_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C");
		return ptr;
	}

}


