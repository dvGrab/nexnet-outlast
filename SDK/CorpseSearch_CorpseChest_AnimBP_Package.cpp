/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UCorpseSearch_CorpseChest_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.AnimGraph");
		
		UCorpseSearch_CorpseChest_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_CorpseChest_AnimBP_AnimGraphNode_TransitionResult_09E53F8F4D4E203F3CF41780D10DC86C
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_CorpseChest_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_CorpseChest_AnimBP_AnimGraphNode_TransitionResult_09E53F8F4D4E203F3CF41780D10DC86C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_CorpseChest_AnimBP_AnimGraphNode_TransitionResult_09E53F8F4D4E203F3CF41780D10DC86C");
		
		UCorpseSearch_CorpseChest_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_CorpseChest_AnimBP_AnimGraphNode_TransitionResult_09E53F8F4D4E203F3CF41780D10DC86C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_CorpseChest_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.BlueprintBeginPlay");
		
		UCorpseSearch_CorpseChest_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.Stop Animation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCorpseSearch_CorpseChest_AnimBP_C::StopAnimation(bool IsSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.Stop Animation");
		
		UCorpseSearch_CorpseChest_AnimBP_C_StopAnimation_Params params {};
		params.IsSuccess = IsSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.StartAnimation
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_CorpseChest_AnimBP_C::StartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.StartAnimation");
		
		UCorpseSearch_CorpseChest_AnimBP_C_StartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.Reset Animation
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_CorpseChest_AnimBP_C::ResetAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.Reset Animation");
		
		UCorpseSearch_CorpseChest_AnimBP_C_ResetAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.ExecuteUbergraph_CorpseSearch_CorpseChest_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCorpseSearch_CorpseChest_AnimBP_C::ExecuteUbergraph_CorpseSearch_CorpseChest_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C.ExecuteUbergraph_CorpseSearch_CorpseChest_AnimBP");
		
		UCorpseSearch_CorpseChest_AnimBP_C_ExecuteUbergraph_CorpseSearch_CorpseChest_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorpseSearch_CorpseChest_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorpseSearch_CorpseChest_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CorpseSearch_CorpseChest_AnimBP.CorpseSearch_CorpseChest_AnimBP_C");
		return ptr;
	}

}


