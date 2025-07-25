﻿/**
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
	 * 		Name   -> Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_Saiga12_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.AnimGraph");
		
		UANIMBP_Saiga12_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Saiga12_AnimGraphNode_BlendListByBool_3B1098614A54A490C1EA00AE5865DD5E
	 * 		Flags  -> ()
	 */
	void UANIMBP_Saiga12_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Saiga12_AnimGraphNode_BlendListByBool_3B1098614A54A490C1EA00AE5865DD5E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Saiga12_AnimGraphNode_BlendListByBool_3B1098614A54A490C1EA00AE5865DD5E");
		
		UANIMBP_Saiga12_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Saiga12_AnimGraphNode_BlendListByBool_3B1098614A54A490C1EA00AE5865DD5E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.AnimNotify_ReplaceMags
	 * 		Flags  -> ()
	 */
	void UANIMBP_Saiga12_C::AnimNotify_ReplaceMags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.AnimNotify_ReplaceMags");
		
		UANIMBP_Saiga12_C_AnimNotify_ReplaceMags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.AnimNotify_SpawnPhysMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_Saiga12_C::AnimNotify_SpawnPhysMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.AnimNotify_SpawnPhysMag");
		
		UANIMBP_Saiga12_C_AnimNotify_SpawnPhysMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.ExecuteUbergraph_ANIMBP_Saiga12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Saiga12_C::ExecuteUbergraph_ANIMBP_Saiga12(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.ExecuteUbergraph_ANIMBP_Saiga12");
		
		UANIMBP_Saiga12_C_ExecuteUbergraph_ANIMBP_Saiga12_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_Saiga12_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_Saiga12_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_Saiga12.ANIMBP_Saiga12_C");
		return ptr;
	}

}


