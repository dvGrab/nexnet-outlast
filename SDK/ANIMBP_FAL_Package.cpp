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
	 * 		Name   -> Function ANIMBP_FAL.ANIMBP_FAL_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_FAL_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_FAL.ANIMBP_FAL_C.AnimGraph");
		
		UANIMBP_FAL_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_FAL.ANIMBP_FAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_ModifyBone_E55E92524736E84B621DE98D370AB091
	 * 		Flags  -> ()
	 */
	void UANIMBP_FAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_ModifyBone_E55E92524736E84B621DE98D370AB091()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_FAL.ANIMBP_FAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_ModifyBone_E55E92524736E84B621DE98D370AB091");
		
		UANIMBP_FAL_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_ModifyBone_E55E92524736E84B621DE98D370AB091_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_FAL.ANIMBP_FAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_BlendListByBool_2E761BEA4BA3CF69BF66DF82D44B7BD9
	 * 		Flags  -> ()
	 */
	void UANIMBP_FAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_BlendListByBool_2E761BEA4BA3CF69BF66DF82D44B7BD9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_FAL.ANIMBP_FAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_BlendListByBool_2E761BEA4BA3CF69BF66DF82D44B7BD9");
		
		UANIMBP_FAL_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_BlendListByBool_2E761BEA4BA3CF69BF66DF82D44B7BD9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_FAL.ANIMBP_FAL_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_FAL_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_FAL.ANIMBP_FAL_C.BlueprintUpdateAnimation");
		
		UANIMBP_FAL_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_FAL.ANIMBP_FAL_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_FAL_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_FAL.ANIMBP_FAL_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_FAL_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_FAL.ANIMBP_FAL_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_FAL_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_FAL.ANIMBP_FAL_C.AnimNotify_ShowMag");
		
		UANIMBP_FAL_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_FAL.ANIMBP_FAL_C.ExecuteUbergraph_ANIMBP_FAL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_FAL_C::ExecuteUbergraph_ANIMBP_FAL(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_FAL.ANIMBP_FAL_C.ExecuteUbergraph_ANIMBP_FAL");
		
		UANIMBP_FAL_C_ExecuteUbergraph_ANIMBP_FAL_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_FAL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_FAL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_FAL.ANIMBP_FAL_C");
		return ptr;
	}

}


