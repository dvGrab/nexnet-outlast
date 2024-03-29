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
	 * 		Name   -> Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UKeyItemDestination_GhostAnim_BP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.AnimGraph");
		
		UKeyItemDestination_GhostAnim_BP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UKeyItemDestination_GhostAnim_BP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.FinishGhost");
		
		UKeyItemDestination_GhostAnim_BP_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UKeyItemDestination_GhostAnim_BP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.BP_InitializeGhost");
		
		UKeyItemDestination_GhostAnim_BP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.OnGhostAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostAnimEvent                                    animEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        animEventName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyItemDestination_GhostAnim_BP_C::OnGhostAnimNotify(EGhostAnimEvent animEvent, const class FName& animEventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.OnGhostAnimNotify");
		
		UKeyItemDestination_GhostAnim_BP_C_OnGhostAnimNotify_Params params {};
		params.animEvent = animEvent;
		params.animEventName = animEventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.ExecuteUbergraph_KeyItemDestination_GhostAnim_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyItemDestination_GhostAnim_BP_C::ExecuteUbergraph_KeyItemDestination_GhostAnim_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.ExecuteUbergraph_KeyItemDestination_GhostAnim_BP");
		
		UKeyItemDestination_GhostAnim_BP_C_ExecuteUbergraph_KeyItemDestination_GhostAnim_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyItemDestination_GhostAnim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyItemDestination_GhostAnim_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C");
		return ptr;
	}

}


