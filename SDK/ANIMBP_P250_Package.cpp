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
	 * 		Name   -> Function ANIMBP_P250.ANIMBP_P250_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_P250_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P250.ANIMBP_P250_C.AnimGraph");
		
		UANIMBP_P250_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_P250.ANIMBP_P250_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P250_AnimGraphNode_BlendListByBool_B7EA37804E7E1BB26EDE0F95B4ED3ECE
	 * 		Flags  -> ()
	 */
	void UANIMBP_P250_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P250_AnimGraphNode_BlendListByBool_B7EA37804E7E1BB26EDE0F95B4ED3ECE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P250.ANIMBP_P250_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P250_AnimGraphNode_BlendListByBool_B7EA37804E7E1BB26EDE0F95B4ED3ECE");
		
		UANIMBP_P250_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P250_AnimGraphNode_BlendListByBool_B7EA37804E7E1BB26EDE0F95B4ED3ECE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_P250.ANIMBP_P250_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_P250_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P250.ANIMBP_P250_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_P250_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_P250.ANIMBP_P250_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_P250_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P250.ANIMBP_P250_C.AnimNotify_ShowMag");
		
		UANIMBP_P250_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_P250.ANIMBP_P250_C.ExecuteUbergraph_ANIMBP_P250
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_P250_C::ExecuteUbergraph_ANIMBP_P250(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_P250.ANIMBP_P250_C.ExecuteUbergraph_ANIMBP_P250");
		
		UANIMBP_P250_C_ExecuteUbergraph_ANIMBP_P250_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_P250_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_P250_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_P250.ANIMBP_P250_C");
		return ptr;
	}

}


