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
	 * 		Name   -> Function ANIMBP_P99.ANIMBP_P99_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_P99_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P99.ANIMBP_P99_C.AnimGraph");
		
		UANIMBP_P99_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_P99.ANIMBP_P99_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P99_AnimGraphNode_BlendListByBool_4E2ABF3D43704A5C4F5278AEF4C9E808
	 * 		Flags  -> ()
	 */
	void UANIMBP_P99_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P99_AnimGraphNode_BlendListByBool_4E2ABF3D43704A5C4F5278AEF4C9E808()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P99.ANIMBP_P99_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P99_AnimGraphNode_BlendListByBool_4E2ABF3D43704A5C4F5278AEF4C9E808");
		
		UANIMBP_P99_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P99_AnimGraphNode_BlendListByBool_4E2ABF3D43704A5C4F5278AEF4C9E808_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_P99.ANIMBP_P99_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_P99_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P99.ANIMBP_P99_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_P99_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_P99.ANIMBP_P99_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_P99_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P99.ANIMBP_P99_C.AnimNotify_ShowMag");
		
		UANIMBP_P99_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_P99.ANIMBP_P99_C.ExecuteUbergraph_ANIMBP_P99
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_P99_C::ExecuteUbergraph_ANIMBP_P99(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P99.ANIMBP_P99_C.ExecuteUbergraph_ANIMBP_P99");
		
		UANIMBP_P99_C_ExecuteUbergraph_ANIMBP_P99_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_P99_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_P99_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_P99.ANIMBP_P99_C");
		return ptr;
	}

}


