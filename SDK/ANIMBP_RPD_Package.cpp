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
	 * 		Name   -> Function ANIMBP_RPD.ANIMBP_RPD_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_RPD_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_RPD.ANIMBP_RPD_C.AnimGraph");
		
		UANIMBP_RPD_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_RPD.ANIMBP_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_RPD_AnimGraphNode_BlendListByBool_85AAEFB646CB6D20E8AE93A63D05E54F
	 * 		Flags  -> ()
	 */
	void UANIMBP_RPD_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_RPD_AnimGraphNode_BlendListByBool_85AAEFB646CB6D20E8AE93A63D05E54F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_RPD.ANIMBP_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_RPD_AnimGraphNode_BlendListByBool_85AAEFB646CB6D20E8AE93A63D05E54F");
		
		UANIMBP_RPD_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_RPD_AnimGraphNode_BlendListByBool_85AAEFB646CB6D20E8AE93A63D05E54F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_RPD.ANIMBP_RPD_C.ExecuteUbergraph_ANIMBP_RPD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_RPD_C::ExecuteUbergraph_ANIMBP_RPD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_RPD.ANIMBP_RPD_C.ExecuteUbergraph_ANIMBP_RPD");
		
		UANIMBP_RPD_C_ExecuteUbergraph_ANIMBP_RPD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_RPD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_RPD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_RPD.ANIMBP_RPD_C");
		return ptr;
	}

}


