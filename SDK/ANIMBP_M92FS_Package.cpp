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
	 * 		Name   -> Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_M92FS_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimGraph");
		
		UANIMBP_M92FS_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M92FS.ANIMBP_M92FS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20
	 * 		Flags  -> ()
	 */
	void UANIMBP_M92FS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M92FS.ANIMBP_M92FS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20");
		
		UANIMBP_M92FS_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 */
	void UANIMBP_M92FS_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimNotify_DropSpeedReloadMagazine");
		
		UANIMBP_M92FS_C_AnimNotify_DropSpeedReloadMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 */
	void UANIMBP_M92FS_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimNotify_ShowMag");
		
		UANIMBP_M92FS_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_M92FS.ANIMBP_M92FS_C.ExecuteUbergraph_ANIMBP_M92FS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_M92FS_C::ExecuteUbergraph_ANIMBP_M92FS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_M92FS.ANIMBP_M92FS_C.ExecuteUbergraph_ANIMBP_M92FS");
		
		UANIMBP_M92FS_C_ExecuteUbergraph_ANIMBP_M92FS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_M92FS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_M92FS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_M92FS.ANIMBP_M92FS_C");
		return ptr;
	}

}


