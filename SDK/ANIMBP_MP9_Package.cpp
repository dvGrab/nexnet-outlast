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
	 * 		Name   -> Function ANIMBP_MP9.ANIMBP_MP9_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_MP9_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP9.ANIMBP_MP9_C.AnimGraph");
		
		UANIMBP_MP9_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP9.ANIMBP_MP9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP9_AnimGraphNode_ModifyBone_8335A6A240B4D0D2D6F04E8F43C91127
	 * 		Flags  -> ()
	 */
	void UANIMBP_MP9_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP9_AnimGraphNode_ModifyBone_8335A6A240B4D0D2D6F04E8F43C91127()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP9.ANIMBP_MP9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP9_AnimGraphNode_ModifyBone_8335A6A240B4D0D2D6F04E8F43C91127");
		
		UANIMBP_MP9_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP9_AnimGraphNode_ModifyBone_8335A6A240B4D0D2D6F04E8F43C91127_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP9.ANIMBP_MP9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP9_AnimGraphNode_BlendListByBool_EC5AC927414CEEE5671BA796BD045590
	 * 		Flags  -> ()
	 */
	void UANIMBP_MP9_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP9_AnimGraphNode_BlendListByBool_EC5AC927414CEEE5671BA796BD045590()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP9.ANIMBP_MP9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP9_AnimGraphNode_BlendListByBool_EC5AC927414CEEE5671BA796BD045590");
		
		UANIMBP_MP9_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP9_AnimGraphNode_BlendListByBool_EC5AC927414CEEE5671BA796BD045590_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP9.ANIMBP_MP9_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_MP9_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP9.ANIMBP_MP9_C.BlueprintUpdateAnimation");
		
		UANIMBP_MP9_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP9.ANIMBP_MP9_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_MP9_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP9.ANIMBP_MP9_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_MP9_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP9.ANIMBP_MP9_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_MP9_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP9.ANIMBP_MP9_C.AnimNotify_ShowMag");
		
		UANIMBP_MP9_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MP9.ANIMBP_MP9_C.ExecuteUbergraph_ANIMBP_MP9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_MP9_C::ExecuteUbergraph_ANIMBP_MP9(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_MP9.ANIMBP_MP9_C.ExecuteUbergraph_ANIMBP_MP9");
		
		UANIMBP_MP9_C_ExecuteUbergraph_ANIMBP_MP9_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_MP9_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_MP9_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_MP9.ANIMBP_MP9_C");
		return ptr;
	}

}


