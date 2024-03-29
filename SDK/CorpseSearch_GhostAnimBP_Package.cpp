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
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UCorpseSearch_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimGraph");
		
		UCorpseSearch_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.GetSpawnedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPickup*                                   Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCorpseSearch_GhostAnimBP_C::GetSpawnedItem(class ARBPickup** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.GetSpawnedItem");
		
		UCorpseSearch_GhostAnimBP_C_GetSpawnedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCorpseSearch_GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.FinishGhost");
		
		UCorpseSearch_GhostAnimBP_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.IsGameplayCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCorpseSearch_GhostAnimBP_C::IsGameplayCompleted(bool* completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.IsGameplayCompleted");
		
		UCorpseSearch_GhostAnimBP_C_IsGameplayCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (completed != nullptr)
			*completed = params.completed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_8AF3320C485D5B1C8392A0BDC3F17B9E
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_8AF3320C485D5B1C8392A0BDC3F17B9E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_8AF3320C485D5B1C8392A0BDC3F17B9E");
		
		UCorpseSearch_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_8AF3320C485D5B1C8392A0BDC3F17B9E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_78B43B654C0CB9CF6336D9B014C0A002
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_78B43B654C0CB9CF6336D9B014C0A002()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_78B43B654C0CB9CF6336D9B014C0A002");
		
		UCorpseSearch_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_78B43B654C0CB9CF6336D9B014C0A002_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.BP_InitializeGhost");
		
		UCorpseSearch_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_EntryDone
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_GhostAnimBP_C::AnimNotify_EntryDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_EntryDone");
		
		UCorpseSearch_GhostAnimBP_C_AnimNotify_EntryDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_Finished
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_GhostAnimBP_C::AnimNotify_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_Finished");
		
		UCorpseSearch_GhostAnimBP_C_AnimNotify_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_AttachObject
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_GhostAnimBP_C::AnimNotify_AttachObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_AttachObject");
		
		UCorpseSearch_GhostAnimBP_C_AnimNotify_AttachObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.BP_ClearGhost
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_GhostAnimBP_C::BP_ClearGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.BP_ClearGhost");
		
		UCorpseSearch_GhostAnimBP_C_BP_ClearGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_Stop Interact
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_GhostAnimBP_C::AnimNotify_StopInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_Stop Interact");
		
		UCorpseSearch_GhostAnimBP_C_AnimNotify_StopInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_EnterDone
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_GhostAnimBP_C::AnimNotify_EnterDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_EnterDone");
		
		UCorpseSearch_GhostAnimBP_C_AnimNotify_EnterDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.ExecuteUbergraph_CorpseSearch_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCorpseSearch_GhostAnimBP_C::ExecuteUbergraph_CorpseSearch_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.ExecuteUbergraph_CorpseSearch_GhostAnimBP");
		
		UCorpseSearch_GhostAnimBP_C_ExecuteUbergraph_CorpseSearch_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorpseSearch_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorpseSearch_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C");
		return ptr;
	}

}


