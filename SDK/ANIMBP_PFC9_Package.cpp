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
	 * 		Name   -> Function ANIMBP_PFC9.ANIMBP_PFC9_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_PFC9_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_PFC9.ANIMBP_PFC9_C.AnimGraph");
		
		UANIMBP_PFC9_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_PFC9.ANIMBP_PFC9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_PFC9_AnimGraphNode_BlendListByBool_1227339446BD815E9E1142980883F5C3
	 * 		Flags  -> ()
	 */
	void UANIMBP_PFC9_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_PFC9_AnimGraphNode_BlendListByBool_1227339446BD815E9E1142980883F5C3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_PFC9.ANIMBP_PFC9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_PFC9_AnimGraphNode_BlendListByBool_1227339446BD815E9E1142980883F5C3");
		
		UANIMBP_PFC9_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_PFC9_AnimGraphNode_BlendListByBool_1227339446BD815E9E1142980883F5C3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_PFC9.ANIMBP_PFC9_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_PFC9_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_PFC9.ANIMBP_PFC9_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_PFC9_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_PFC9.ANIMBP_PFC9_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_PFC9_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_PFC9.ANIMBP_PFC9_C.AnimNotify_ShowMag");
		
		UANIMBP_PFC9_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_PFC9.ANIMBP_PFC9_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_PFC9_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_PFC9.ANIMBP_PFC9_C.BlueprintUpdateAnimation");
		
		UANIMBP_PFC9_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_PFC9.ANIMBP_PFC9_C.ExecuteUbergraph_ANIMBP_PFC9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_PFC9_C::ExecuteUbergraph_ANIMBP_PFC9(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_PFC9.ANIMBP_PFC9_C.ExecuteUbergraph_ANIMBP_PFC9");
		
		UANIMBP_PFC9_C_ExecuteUbergraph_ANIMBP_PFC9_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_PFC9_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_PFC9_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_PFC9.ANIMBP_PFC9_C");
		return ptr;
	}

}


