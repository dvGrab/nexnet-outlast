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
	 * 		Name   -> Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USwitchesMatchPanel_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimGraph");
		
		USwitchesMatchPanel_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USwitchesMatchPanel_GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.FinishGhost");
		
		USwitchesMatchPanel_GhostAnimBP_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.OnPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPasscodePadComponent*                     Pad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchesMatchPanel_GhostAnimBP_C::OnPressed(class URBPasscodePadComponent* Pad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.OnPressed");
		
		USwitchesMatchPanel_GhostAnimBP_C_OnPressed_Params params {};
		params.Pad = Pad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanel_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.BP_InitializeGhost");
		
		USwitchesMatchPanel_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimNotify_Pressed
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanel_GhostAnimBP_C::AnimNotify_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimNotify_Pressed");
		
		USwitchesMatchPanel_GhostAnimBP_C_AnimNotify_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimNotify_EntryDone
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanel_GhostAnimBP_C::AnimNotify_EntryDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimNotify_EntryDone");
		
		USwitchesMatchPanel_GhostAnimBP_C_AnimNotify_EntryDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimNotify_Finished
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanel_GhostAnimBP_C::AnimNotify_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimNotify_Finished");
		
		USwitchesMatchPanel_GhostAnimBP_C_AnimNotify_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.ExecuteUbergraph_SwitchesMatchPanel_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchesMatchPanel_GhostAnimBP_C::ExecuteUbergraph_SwitchesMatchPanel_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.ExecuteUbergraph_SwitchesMatchPanel_GhostAnimBP");
		
		USwitchesMatchPanel_GhostAnimBP_C_ExecuteUbergraph_SwitchesMatchPanel_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwitchesMatchPanel_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwitchesMatchPanel_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C");
		return ptr;
	}

}


