/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_Head_Shared_Master_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.AnimGraph");
		
		UANIMBP_Head_Shared_Master_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Head_Shared_Master_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.BlueprintUpdateAnimation");
		
		UANIMBP_Head_Shared_Master_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_PoseBlendNode_A99257564D737339170EBB90FDD72DEC
	 * 		Flags  -> ()
	 */
	void UANIMBP_Head_Shared_Master_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_PoseBlendNode_A99257564D737339170EBB90FDD72DEC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_PoseBlendNode_A99257564D737339170EBB90FDD72DEC");
		
		UANIMBP_Head_Shared_Master_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_PoseBlendNode_A99257564D737339170EBB90FDD72DEC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_LookAt_C0761473496135B7511834B07DEBC79F
	 * 		Flags  -> ()
	 */
	void UANIMBP_Head_Shared_Master_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_LookAt_C0761473496135B7511834B07DEBC79F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_LookAt_C0761473496135B7511834B07DEBC79F");
		
		UANIMBP_Head_Shared_Master_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_LookAt_C0761473496135B7511834B07DEBC79F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.ExecuteUbergraph_ANIMBP_Head_Shared_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Head_Shared_Master_C::ExecuteUbergraph_ANIMBP_Head_Shared_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.ExecuteUbergraph_ANIMBP_Head_Shared_Master");
		
		UANIMBP_Head_Shared_Master_C_ExecuteUbergraph_ANIMBP_Head_Shared_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_Head_Shared_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_Head_Shared_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C");
		return ptr;
	}

}


