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
	 * 		Name   -> Function ANIMBP_M16A4.ANIMBP_M16A4_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_M16A4_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M16A4.ANIMBP_M16A4_C.AnimGraph");
		
		UANIMBP_M16A4_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M16A4.ANIMBP_M16A4_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_ModifyBone_D01617FC42B6C1E06820F0B7178D6EA2
	 * 		Flags  -> ()
	 */
	void UANIMBP_M16A4_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_ModifyBone_D01617FC42B6C1E06820F0B7178D6EA2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M16A4.ANIMBP_M16A4_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_ModifyBone_D01617FC42B6C1E06820F0B7178D6EA2");
		
		UANIMBP_M16A4_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_ModifyBone_D01617FC42B6C1E06820F0B7178D6EA2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M16A4.ANIMBP_M16A4_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_BlendListByBool_B44AA927484E23B12380D38B2857D621
	 * 		Flags  -> ()
	 */
	void UANIMBP_M16A4_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_BlendListByBool_B44AA927484E23B12380D38B2857D621()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M16A4.ANIMBP_M16A4_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_BlendListByBool_B44AA927484E23B12380D38B2857D621");
		
		UANIMBP_M16A4_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_BlendListByBool_B44AA927484E23B12380D38B2857D621_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M16A4.ANIMBP_M16A4_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_M16A4_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M16A4.ANIMBP_M16A4_C.BlueprintUpdateAnimation");
		
		UANIMBP_M16A4_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M16A4.ANIMBP_M16A4_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_M16A4_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M16A4.ANIMBP_M16A4_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_M16A4_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M16A4.ANIMBP_M16A4_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_M16A4_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M16A4.ANIMBP_M16A4_C.AnimNotify_ShowMag");
		
		UANIMBP_M16A4_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M16A4.ANIMBP_M16A4_C.ExecuteUbergraph_ANIMBP_M16A4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_M16A4_C::ExecuteUbergraph_ANIMBP_M16A4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M16A4.ANIMBP_M16A4_C.ExecuteUbergraph_ANIMBP_M16A4");
		
		UANIMBP_M16A4_C_ExecuteUbergraph_ANIMBP_M16A4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_M16A4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_M16A4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_M16A4.ANIMBP_M16A4_C");
		return ptr;
	}

}


