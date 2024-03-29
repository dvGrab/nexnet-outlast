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
	 * 		Name   -> Function ANIMBP_USP.ANIMBP_USP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_USP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_USP.ANIMBP_USP_C.AnimGraph");
		
		UANIMBP_USP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_USP.ANIMBP_USP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_USP_AnimGraphNode_BlendListByBool_106DCF574D02D8841088A3A415340342
	 * 		Flags  -> ()
	 */
	void UANIMBP_USP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_USP_AnimGraphNode_BlendListByBool_106DCF574D02D8841088A3A415340342()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_USP.ANIMBP_USP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_USP_AnimGraphNode_BlendListByBool_106DCF574D02D8841088A3A415340342");
		
		UANIMBP_USP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_USP_AnimGraphNode_BlendListByBool_106DCF574D02D8841088A3A415340342_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_USP.ANIMBP_USP_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_USP_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_USP.ANIMBP_USP_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_USP_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_USP.ANIMBP_USP_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_USP_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_USP.ANIMBP_USP_C.AnimNotify_ShowMag");
		
		UANIMBP_USP_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_USP.ANIMBP_USP_C.ExecuteUbergraph_ANIMBP_USP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_USP_C::ExecuteUbergraph_ANIMBP_USP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_USP.ANIMBP_USP_C.ExecuteUbergraph_ANIMBP_USP");
		
		UANIMBP_USP_C_ExecuteUbergraph_ANIMBP_USP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_USP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_USP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_USP.ANIMBP_USP_C");
		return ptr;
	}

}


