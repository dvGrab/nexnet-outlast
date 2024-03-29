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
	 * 		Name   -> Function ANIMBP_AK102.ANIMBP_AK102_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_AK102_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_AK102.ANIMBP_AK102_C.AnimGraph");
		
		UANIMBP_AK102_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_AK102.ANIMBP_AK102_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AK102_AnimGraphNode_ModifyBone_F3E0A01B457F03FAEB42BCB71164D5DC
	 * 		Flags  -> ()
	 */
	void UANIMBP_AK102_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AK102_AnimGraphNode_ModifyBone_F3E0A01B457F03FAEB42BCB71164D5DC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_AK102.ANIMBP_AK102_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AK102_AnimGraphNode_ModifyBone_F3E0A01B457F03FAEB42BCB71164D5DC");
		
		UANIMBP_AK102_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AK102_AnimGraphNode_ModifyBone_F3E0A01B457F03FAEB42BCB71164D5DC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_AK102.ANIMBP_AK102_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_AK102_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_AK102.ANIMBP_AK102_C.BlueprintUpdateAnimation");
		
		UANIMBP_AK102_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_AK102.ANIMBP_AK102_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_AK102_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_AK102.ANIMBP_AK102_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_AK102_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_AK102.ANIMBP_AK102_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_AK102_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_AK102.ANIMBP_AK102_C.AnimNotify_ShowMag");
		
		UANIMBP_AK102_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_AK102.ANIMBP_AK102_C.ExecuteUbergraph_ANIMBP_AK102
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_AK102_C::ExecuteUbergraph_ANIMBP_AK102(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_AK102.ANIMBP_AK102_C.ExecuteUbergraph_ANIMBP_AK102");
		
		UANIMBP_AK102_C_ExecuteUbergraph_ANIMBP_AK102_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_AK102_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_AK102_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_AK102.ANIMBP_AK102_C");
		return ptr;
	}

}


