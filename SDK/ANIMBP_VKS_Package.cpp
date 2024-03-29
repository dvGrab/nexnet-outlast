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
	 * 		Name   -> Function ANIMBP_VKS.ANIMBP_VKS_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_VKS_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_VKS.ANIMBP_VKS_C.AnimGraph");
		
		UANIMBP_VKS_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_VKS.ANIMBP_VKS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_VKS_AnimGraphNode_BlendListByBool_28F8CEA94DB40D8573439F813FDB66AE
	 * 		Flags  -> ()
	 */
	void UANIMBP_VKS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_VKS_AnimGraphNode_BlendListByBool_28F8CEA94DB40D8573439F813FDB66AE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_VKS.ANIMBP_VKS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_VKS_AnimGraphNode_BlendListByBool_28F8CEA94DB40D8573439F813FDB66AE");
		
		UANIMBP_VKS_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_VKS_AnimGraphNode_BlendListByBool_28F8CEA94DB40D8573439F813FDB66AE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_VKS.ANIMBP_VKS_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_VKS_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_VKS.ANIMBP_VKS_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_VKS_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_VKS.ANIMBP_VKS_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_VKS_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_VKS.ANIMBP_VKS_C.AnimNotify_ShowMag");
		
		UANIMBP_VKS_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_VKS.ANIMBP_VKS_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_VKS_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_VKS.ANIMBP_VKS_C.BlueprintUpdateAnimation");
		
		UANIMBP_VKS_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_VKS.ANIMBP_VKS_C.ExecuteUbergraph_ANIMBP_VKS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_VKS_C::ExecuteUbergraph_ANIMBP_VKS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_VKS.ANIMBP_VKS_C.ExecuteUbergraph_ANIMBP_VKS");
		
		UANIMBP_VKS_C_ExecuteUbergraph_ANIMBP_VKS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_VKS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_VKS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_VKS.ANIMBP_VKS_C");
		return ptr;
	}

}


