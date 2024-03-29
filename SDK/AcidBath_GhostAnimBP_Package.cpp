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
	 * 		Name   -> Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAcidBath_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.AnimGraph");
		
		UAcidBath_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UAcidBath_GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.FinishGhost");
		
		UAcidBath_GhostAnimBP_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UAcidBath_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.BP_InitializeGhost");
		
		UAcidBath_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.BP_ClearGhost
	 * 		Flags  -> ()
	 */
	void UAcidBath_GhostAnimBP_C::BP_ClearGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.BP_ClearGhost");
		
		UAcidBath_GhostAnimBP_C_BP_ClearGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.AnimNotify_Finish
	 * 		Flags  -> ()
	 */
	void UAcidBath_GhostAnimBP_C::AnimNotify_Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.AnimNotify_Finish");
		
		UAcidBath_GhostAnimBP_C_AnimNotify_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.AnimNotify_Holding
	 * 		Flags  -> ()
	 */
	void UAcidBath_GhostAnimBP_C::AnimNotify_Holding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.AnimNotify_Holding");
		
		UAcidBath_GhostAnimBP_C_AnimNotify_Holding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.ExecuteUbergraph_AcidBath_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAcidBath_GhostAnimBP_C::ExecuteUbergraph_AcidBath_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.ExecuteUbergraph_AcidBath_GhostAnimBP");
		
		UAcidBath_GhostAnimBP_C_ExecuteUbergraph_AcidBath_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAcidBath_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAcidBath_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C");
		return ptr;
	}

}


