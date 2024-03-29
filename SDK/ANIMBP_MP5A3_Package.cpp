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
	 * 		Name   -> Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_MP5A3_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.AnimGraph");
		
		UANIMBP_MP5A3_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_ModifyBone_7F60588A46408C72A4AA889F9B5E6A07
	 * 		Flags  -> ()
	 */
	void UANIMBP_MP5A3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_ModifyBone_7F60588A46408C72A4AA889F9B5E6A07()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_ModifyBone_7F60588A46408C72A4AA889F9B5E6A07");
		
		UANIMBP_MP5A3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_ModifyBone_7F60588A46408C72A4AA889F9B5E6A07_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_BlendListByBool_C13325674DBF0C467BEC1B9A4592FEE9
	 * 		Flags  -> ()
	 */
	void UANIMBP_MP5A3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_BlendListByBool_C13325674DBF0C467BEC1B9A4592FEE9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_BlendListByBool_C13325674DBF0C467BEC1B9A4592FEE9");
		
		UANIMBP_MP5A3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_BlendListByBool_C13325674DBF0C467BEC1B9A4592FEE9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_MP5A3_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.BlueprintUpdateAnimation");
		
		UANIMBP_MP5A3_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_MP5A3_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_MP5A3_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_MP5A3_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.AnimNotify_ShowMag");
		
		UANIMBP_MP5A3_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.ExecuteUbergraph_ANIMBP_MP5A3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_MP5A3_C::ExecuteUbergraph_ANIMBP_MP5A3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.ExecuteUbergraph_ANIMBP_MP5A3");
		
		UANIMBP_MP5A3_C_ExecuteUbergraph_ANIMBP_MP5A3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_MP5A3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_MP5A3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_MP5A3.ANIMBP_MP5A3_C");
		return ptr;
	}

}


