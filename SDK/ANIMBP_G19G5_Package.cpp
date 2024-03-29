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
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_G19G5_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimGraph");
		
		UANIMBP_G19G5_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G19G5_AnimGraphNode_BlendListByBool_60CFA88C4D4AEA81A41BB499B0DCB9F2
	 * 		Flags  -> ()
	 */
	void UANIMBP_G19G5_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G19G5_AnimGraphNode_BlendListByBool_60CFA88C4D4AEA81A41BB499B0DCB9F2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_G19G5.ANIMBP_G19G5_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G19G5_AnimGraphNode_BlendListByBool_60CFA88C4D4AEA81A41BB499B0DCB9F2");
		
		UANIMBP_G19G5_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G19G5_AnimGraphNode_BlendListByBool_60CFA88C4D4AEA81A41BB499B0DCB9F2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_G19G5_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_G19G5_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_G19G5_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimNotify_ShowMag");
		
		UANIMBP_G19G5_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_G19G5_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_G19G5.ANIMBP_G19G5_C.BlueprintUpdateAnimation");
		
		UANIMBP_G19G5_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.ExecuteUbergraph_ANIMBP_G19G5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_G19G5_C::ExecuteUbergraph_ANIMBP_G19G5(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_G19G5.ANIMBP_G19G5_C.ExecuteUbergraph_ANIMBP_G19G5");
		
		UANIMBP_G19G5_C_ExecuteUbergraph_ANIMBP_G19G5_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_G19G5_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_G19G5_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_G19G5.ANIMBP_G19G5_C");
		return ptr;
	}

}


