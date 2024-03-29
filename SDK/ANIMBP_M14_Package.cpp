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
	 * 		Name   -> Function ANIMBP_M14.ANIMBP_M14_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_M14_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M14.ANIMBP_M14_C.AnimGraph");
		
		UANIMBP_M14_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M14.ANIMBP_M14_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M14_AnimGraphNode_BlendListByBool_AB20F3FC4A71D6AB3D7237A47027DE1B
	 * 		Flags  -> ()
	 */
	void UANIMBP_M14_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M14_AnimGraphNode_BlendListByBool_AB20F3FC4A71D6AB3D7237A47027DE1B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M14.ANIMBP_M14_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M14_AnimGraphNode_BlendListByBool_AB20F3FC4A71D6AB3D7237A47027DE1B");
		
		UANIMBP_M14_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M14_AnimGraphNode_BlendListByBool_AB20F3FC4A71D6AB3D7237A47027DE1B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M14.ANIMBP_M14_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_M14_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M14.ANIMBP_M14_C.BlueprintUpdateAnimation");
		
		UANIMBP_M14_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M14.ANIMBP_M14_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_M14_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M14.ANIMBP_M14_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_M14_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M14.ANIMBP_M14_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_M14_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M14.ANIMBP_M14_C.AnimNotify_ShowMag");
		
		UANIMBP_M14_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M14.ANIMBP_M14_C.ExecuteUbergraph_ANIMBP_M14
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_M14_C::ExecuteUbergraph_ANIMBP_M14(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M14.ANIMBP_M14_C.ExecuteUbergraph_ANIMBP_M14");
		
		UANIMBP_M14_C_ExecuteUbergraph_ANIMBP_M14_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_M14_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_M14_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_M14.ANIMBP_M14_C");
		return ptr;
	}

}


