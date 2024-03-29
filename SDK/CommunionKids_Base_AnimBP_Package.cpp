/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UCommunionKids_Base_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.AnimGraph");
		
		UCommunionKids_Base_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.StartEat
	 * 		Flags  -> ()
	 */
	void UCommunionKids_Base_AnimBP_C::StartEat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.StartEat");
		
		UCommunionKids_Base_AnimBP_C_StartEat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CommunionKids_Base_AnimBP_AnimGraphNode_TransitionResult_227B87124A616DB46B321482661DE352
	 * 		Flags  -> ()
	 */
	void UCommunionKids_Base_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CommunionKids_Base_AnimBP_AnimGraphNode_TransitionResult_227B87124A616DB46B321482661DE352()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CommunionKids_Base_AnimBP_AnimGraphNode_TransitionResult_227B87124A616DB46B321482661DE352");
		
		UCommunionKids_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CommunionKids_Base_AnimBP_AnimGraphNode_TransitionResult_227B87124A616DB46B321482661DE352_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunionKids_Base_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.BlueprintUpdateAnimation");
		
		UCommunionKids_Base_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.AnimNotify_Eating
	 * 		Flags  -> ()
	 */
	void UCommunionKids_Base_AnimBP_C::AnimNotify_Eating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.AnimNotify_Eating");
		
		UCommunionKids_Base_AnimBP_C_AnimNotify_Eating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.ExecuteUbergraph_CommunionKids_Base_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunionKids_Base_AnimBP_C::ExecuteUbergraph_CommunionKids_Base_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C.ExecuteUbergraph_CommunionKids_Base_AnimBP");
		
		UCommunionKids_Base_AnimBP_C_ExecuteUbergraph_CommunionKids_Base_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommunionKids_Base_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommunionKids_Base_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CommunionKids_Base_AnimBP.CommunionKids_Base_AnimBP_C");
		return ptr;
	}

}


