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
	 * 		Name   -> Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UExecutionActor_NPC_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.AnimGraph");
		
		UExecutionActor_NPC_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UExecutionActor_NPC_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.BlueprintBeginPlay");
		
		UExecutionActor_NPC_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.OnWitnessStartedChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStarted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExecutionActor_NPC_AnimBP_C::OnWitnessStartedChanged(bool bStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.OnWitnessStartedChanged");
		
		UExecutionActor_NPC_AnimBP_C_OnWitnessStartedChanged_Params params {};
		params.bStarted = bStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UExecutionActor_NPC_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.BlueprintInitializeAnimation");
		
		UExecutionActor_NPC_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.ExecuteUbergraph_ExecutionActor_NPC_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UExecutionActor_NPC_AnimBP_C::ExecuteUbergraph_ExecutionActor_NPC_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.ExecuteUbergraph_ExecutionActor_NPC_AnimBP");
		
		UExecutionActor_NPC_AnimBP_C_ExecuteUbergraph_ExecutionActor_NPC_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExecutionActor_NPC_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExecutionActor_NPC_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C");
		return ptr;
	}

}


