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
	 * 		Name   -> Function Barlow_Novel_AnimBP.Barlow_Novel_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBarlow_Novel_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Barlow_Novel_AnimBP.Barlow_Novel_AnimBP_C.AnimGraph");
		
		UBarlow_Novel_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Barlow_Novel_AnimBP.Barlow_Novel_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Barlow_Novel_AnimBP_AnimGraphNode_TransitionResult_73A750814A66AC2C19992E8AE1488F3D
	 * 		Flags  -> ()
	 */
	void UBarlow_Novel_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Barlow_Novel_AnimBP_AnimGraphNode_TransitionResult_73A750814A66AC2C19992E8AE1488F3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Barlow_Novel_AnimBP.Barlow_Novel_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Barlow_Novel_AnimBP_AnimGraphNode_TransitionResult_73A750814A66AC2C19992E8AE1488F3D");
		
		UBarlow_Novel_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Barlow_Novel_AnimBP_AnimGraphNode_TransitionResult_73A750814A66AC2C19992E8AE1488F3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Barlow_Novel_AnimBP.Barlow_Novel_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Barlow_Novel_AnimBP_AnimGraphNode_TransitionResult_1BB9637D417E9CABF47593AB8FC89FD1
	 * 		Flags  -> ()
	 */
	void UBarlow_Novel_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Barlow_Novel_AnimBP_AnimGraphNode_TransitionResult_1BB9637D417E9CABF47593AB8FC89FD1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Barlow_Novel_AnimBP.Barlow_Novel_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Barlow_Novel_AnimBP_AnimGraphNode_TransitionResult_1BB9637D417E9CABF47593AB8FC89FD1");
		
		UBarlow_Novel_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Barlow_Novel_AnimBP_AnimGraphNode_TransitionResult_1BB9637D417E9CABF47593AB8FC89FD1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Barlow_Novel_AnimBP.Barlow_Novel_AnimBP_C.ExecuteUbergraph_Barlow_Novel_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBarlow_Novel_AnimBP_C::ExecuteUbergraph_Barlow_Novel_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Barlow_Novel_AnimBP.Barlow_Novel_AnimBP_C.ExecuteUbergraph_Barlow_Novel_AnimBP");
		
		UBarlow_Novel_AnimBP_C_ExecuteUbergraph_Barlow_Novel_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarlow_Novel_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarlow_Novel_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Barlow_Novel_AnimBP.Barlow_Novel_AnimBP_C");
		return ptr;
	}

}


