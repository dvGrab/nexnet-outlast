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
	 * 		Name   -> Function ANIMBP_SBR.ANIMBP_SBR_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_SBR_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SBR.ANIMBP_SBR_C.AnimGraph");
		
		UANIMBP_SBR_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SBR.ANIMBP_SBR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_ModifyBone_3C723A0546DF3DF2849A99983EE90417
	 * 		Flags  -> ()
	 */
	void UANIMBP_SBR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_ModifyBone_3C723A0546DF3DF2849A99983EE90417()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SBR.ANIMBP_SBR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_ModifyBone_3C723A0546DF3DF2849A99983EE90417");
		
		UANIMBP_SBR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_ModifyBone_3C723A0546DF3DF2849A99983EE90417_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SBR.ANIMBP_SBR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_BlendListByBool_AC0A424D41C0F856351D728CFC5F049D
	 * 		Flags  -> ()
	 */
	void UANIMBP_SBR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_BlendListByBool_AC0A424D41C0F856351D728CFC5F049D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SBR.ANIMBP_SBR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_BlendListByBool_AC0A424D41C0F856351D728CFC5F049D");
		
		UANIMBP_SBR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_BlendListByBool_AC0A424D41C0F856351D728CFC5F049D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SBR.ANIMBP_SBR_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_SBR_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SBR.ANIMBP_SBR_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_SBR_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SBR.ANIMBP_SBR_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_SBR_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SBR.ANIMBP_SBR_C.AnimNotify_ShowMag");
		
		UANIMBP_SBR_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SBR.ANIMBP_SBR_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_SBR_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SBR.ANIMBP_SBR_C.BlueprintUpdateAnimation");
		
		UANIMBP_SBR_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SBR.ANIMBP_SBR_C.ExecuteUbergraph_ANIMBP_SBR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_SBR_C::ExecuteUbergraph_ANIMBP_SBR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SBR.ANIMBP_SBR_C.ExecuteUbergraph_ANIMBP_SBR");
		
		UANIMBP_SBR_C_ExecuteUbergraph_ANIMBP_SBR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_SBR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_SBR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_SBR.ANIMBP_SBR_C");
		return ptr;
	}

}


