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
	 * 		Name   -> Function ANIMBP_M32A1.ANIMBP_M32A1_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_M32A1_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M32A1.ANIMBP_M32A1_C.AnimGraph");
		
		UANIMBP_M32A1_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M32A1.ANIMBP_M32A1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2
	 * 		Flags  -> ()
	 */
	void UANIMBP_M32A1_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M32A1.ANIMBP_M32A1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2");
		
		UANIMBP_M32A1_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M32A1.ANIMBP_M32A1_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_M32A1_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M32A1.ANIMBP_M32A1_C.BlueprintUpdateAnimation");
		
		UANIMBP_M32A1_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M32A1.ANIMBP_M32A1_C.AnimNotify_RotateCylinder
	 * 		Flags  -> ()
	 */
	void UANIMBP_M32A1_C::AnimNotify_RotateCylinder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M32A1.ANIMBP_M32A1_C.AnimNotify_RotateCylinder");
		
		UANIMBP_M32A1_C_AnimNotify_RotateCylinder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M32A1.ANIMBP_M32A1_C.ExecuteUbergraph_ANIMBP_M32A1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_M32A1_C::ExecuteUbergraph_ANIMBP_M32A1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M32A1.ANIMBP_M32A1_C.ExecuteUbergraph_ANIMBP_M32A1");
		
		UANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_M32A1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_M32A1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_M32A1.ANIMBP_M32A1_C");
		return ptr;
	}

}


