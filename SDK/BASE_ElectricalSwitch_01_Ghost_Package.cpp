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
	 * 		Name   -> Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBASE_ElectricalSwitch__Ghost_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.AnimGraph");
		
		UBASE_ElectricalSwitch__Ghost_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBASE_ElectricalSwitch__Ghost_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.FinishGhost");
		
		UBASE_ElectricalSwitch__Ghost_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UBASE_ElectricalSwitch__Ghost_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.BP_InitializeGhost");
		
		UBASE_ElectricalSwitch__Ghost_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.OnGhostAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostAnimEvent                                    animEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        animEventName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBASE_ElectricalSwitch__Ghost_C::OnGhostAnimNotify(EGhostAnimEvent animEvent, const class FName& animEventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.OnGhostAnimNotify");
		
		UBASE_ElectricalSwitch__Ghost_C_OnGhostAnimNotify_Params params {};
		params.animEvent = animEvent;
		params.animEventName = animEventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.ExecuteUbergraph_BASE_ElectricalSwitch-01_Ghost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBASE_ElectricalSwitch__Ghost_C::ExecuteUbergraph_BASE_ElectricalSwitch__Ghost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_Ghost.BASE_ElectricalSwitch-01_Ghost_C.ExecuteUbergraph_BASE_ElectricalSwitch-01_Ghost");
		
		UBASE_ElectricalSwitch__Ghost_C_ExecuteUbergraph_BASE_ElectricalSwitch__Ghost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBASE_ElectricalSwitch__Ghost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBASE_ElectricalSwitch__Ghost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BASE_ElectricalSwitch_01_Ghost.BASE_ElectricalSwitch-01_Ghost_C");
		return ptr;
	}

}


