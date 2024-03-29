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
	 * 		Name   -> Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UFrequencyMatchPanel_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.AnimGraph");
		
		UFrequencyMatchPanel_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFrequencyMatchPanel_GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.FinishGhost");
		
		UFrequencyMatchPanel_GhostAnimBP_C_FinishGhost_Params params {};
		params.finishReason = finishReason;
		params.GhostFinishCustomReason = GhostFinishCustomReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchPanel_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.BP_InitializeGhost");
		
		UFrequencyMatchPanel_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.AnimNotify_EntryDone
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchPanel_GhostAnimBP_C::AnimNotify_EntryDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.AnimNotify_EntryDone");
		
		UFrequencyMatchPanel_GhostAnimBP_C_AnimNotify_EntryDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.AnimNotify_Finished
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchPanel_GhostAnimBP_C::AnimNotify_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.AnimNotify_Finished");
		
		UFrequencyMatchPanel_GhostAnimBP_C_AnimNotify_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.ExecuteUbergraph_FrequencyMatchPanel_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrequencyMatchPanel_GhostAnimBP_C::ExecuteUbergraph_FrequencyMatchPanel_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.ExecuteUbergraph_FrequencyMatchPanel_GhostAnimBP");
		
		UFrequencyMatchPanel_GhostAnimBP_C_ExecuteUbergraph_FrequencyMatchPanel_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrequencyMatchPanel_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrequencyMatchPanel_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C");
		return ptr;
	}

}


