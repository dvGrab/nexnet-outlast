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
	 * 		Name   -> Function ANIMBP_SPC9.ANIMBP_SPC9_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_SPC9_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SPC9.ANIMBP_SPC9_C.AnimGraph");
		
		UANIMBP_SPC9_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SPC9.ANIMBP_SPC9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SPC9_AnimGraphNode_ModifyBone_8D89D14D47FA4169068A178D53A55018
	 * 		Flags  -> ()
	 */
	void UANIMBP_SPC9_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SPC9_AnimGraphNode_ModifyBone_8D89D14D47FA4169068A178D53A55018()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SPC9.ANIMBP_SPC9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SPC9_AnimGraphNode_ModifyBone_8D89D14D47FA4169068A178D53A55018");
		
		UANIMBP_SPC9_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SPC9_AnimGraphNode_ModifyBone_8D89D14D47FA4169068A178D53A55018_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SPC9.ANIMBP_SPC9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SPC9_AnimGraphNode_BlendListByBool_B124E23849B1ABC2ED6812B88037B899
	 * 		Flags  -> ()
	 */
	void UANIMBP_SPC9_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SPC9_AnimGraphNode_BlendListByBool_B124E23849B1ABC2ED6812B88037B899()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SPC9.ANIMBP_SPC9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SPC9_AnimGraphNode_BlendListByBool_B124E23849B1ABC2ED6812B88037B899");
		
		UANIMBP_SPC9_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SPC9_AnimGraphNode_BlendListByBool_B124E23849B1ABC2ED6812B88037B899_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SPC9.ANIMBP_SPC9_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_SPC9_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SPC9.ANIMBP_SPC9_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_SPC9_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SPC9.ANIMBP_SPC9_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_SPC9_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SPC9.ANIMBP_SPC9_C.AnimNotify_ShowMag");
		
		UANIMBP_SPC9_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SPC9.ANIMBP_SPC9_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_SPC9_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SPC9.ANIMBP_SPC9_C.BlueprintUpdateAnimation");
		
		UANIMBP_SPC9_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_SPC9.ANIMBP_SPC9_C.ExecuteUbergraph_ANIMBP_SPC9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_SPC9_C::ExecuteUbergraph_ANIMBP_SPC9(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_SPC9.ANIMBP_SPC9_C.ExecuteUbergraph_ANIMBP_SPC9");
		
		UANIMBP_SPC9_C_ExecuteUbergraph_ANIMBP_SPC9_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_SPC9_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_SPC9_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_SPC9.ANIMBP_SPC9_C");
		return ptr;
	}

}


