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
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_Benelli_M4_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimGraph");
		
		UANIMBP_Benelli_M4_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878
	 * 		Flags  -> ()
	 */
	void UANIMBP_Benelli_M4_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878");
		
		UANIMBP_Benelli_M4_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_PrimeShellRack
	 * 		Flags  -> ()
	 */
	void UANIMBP_Benelli_M4_C::AnimNotify_PrimeShellRack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_PrimeShellRack");
		
		UANIMBP_Benelli_M4_C_AnimNotify_PrimeShellRack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_FinishShellLoad
	 * 		Flags  -> ()
	 */
	void UANIMBP_Benelli_M4_C::AnimNotify_FinishShellLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_FinishShellLoad");
		
		UANIMBP_Benelli_M4_C_AnimNotify_FinishShellLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_ReplaceShellRack
	 * 		Flags  -> ()
	 */
	void UANIMBP_Benelli_M4_C::AnimNotify_ReplaceShellRack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_ReplaceShellRack");
		
		UANIMBP_Benelli_M4_C_AnimNotify_ReplaceShellRack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_ReloadNextShell
	 * 		Flags  -> ()
	 */
	void UANIMBP_Benelli_M4_C::AnimNotify_ReloadNextShell()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_ReloadNextShell");
		
		UANIMBP_Benelli_M4_C_AnimNotify_ReloadNextShell_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.ExecuteUbergraph_ANIMBP_Benelli_M4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Benelli_M4_C::ExecuteUbergraph_ANIMBP_Benelli_M4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.ExecuteUbergraph_ANIMBP_Benelli_M4");
		
		UANIMBP_Benelli_M4_C_ExecuteUbergraph_ANIMBP_Benelli_M4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_Benelli_M4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_Benelli_M4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C");
		return ptr;
	}

}


