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
	 * 		Name   -> Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UElectrocutionSwitch01_Ghost_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.AnimGraph");
		
		UElectrocutionSwitch01_Ghost_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UElectrocutionSwitch01_Ghost_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.FinishGhost");
		
		UElectrocutionSwitch01_Ghost_C_FinishGhost_Params params {};
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
	 * 		Name   -> Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UElectrocutionSwitch01_Ghost_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.BP_InitializeGhost");
		
		UElectrocutionSwitch01_Ghost_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.OnGhostAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostAnimEvent                                    animEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        animEventName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UElectrocutionSwitch01_Ghost_C::OnGhostAnimNotify(EGhostAnimEvent animEvent, const class FName& animEventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.OnGhostAnimNotify");
		
		UElectrocutionSwitch01_Ghost_C_OnGhostAnimNotify_Params params {};
		params.animEvent = animEvent;
		params.animEventName = animEventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UElectrocutionSwitch01_Ghost_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.BlueprintUpdateAnimation");
		
		UElectrocutionSwitch01_Ghost_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.ExecuteUbergraph_ElectrocutionSwitch-01_Ghost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UElectrocutionSwitch01_Ghost_C::ExecuteUbergraph_ElectrocutionSwitch01_Ghost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.ExecuteUbergraph_ElectrocutionSwitch-01_Ghost");
		
		UElectrocutionSwitch01_Ghost_C_ExecuteUbergraph_ElectrocutionSwitch01_Ghost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElectrocutionSwitch01_Ghost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectrocutionSwitch01_Ghost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ElectrocutionSwitch_01_Ghost.ElectrocutionSwitch-01_Ghost_C");
		return ptr;
	}

}


