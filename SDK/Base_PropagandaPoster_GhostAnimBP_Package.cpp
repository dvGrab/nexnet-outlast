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
	 * 		Name   -> Function Base_PropagandaPoster_GhostAnimBP.Base_PropagandaPoster_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBase_PropagandaPoster_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_PropagandaPoster_GhostAnimBP.Base_PropagandaPoster_GhostAnimBP_C.AnimGraph");
		
		UBase_PropagandaPoster_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_PropagandaPoster_GhostAnimBP.Base_PropagandaPoster_GhostAnimBP_C.AnimNotify_Done
	 * 		Flags  -> ()
	 */
	void UBase_PropagandaPoster_GhostAnimBP_C::AnimNotify_Done()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_PropagandaPoster_GhostAnimBP.Base_PropagandaPoster_GhostAnimBP_C.AnimNotify_Done");
		
		UBase_PropagandaPoster_GhostAnimBP_C_AnimNotify_Done_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_PropagandaPoster_GhostAnimBP.Base_PropagandaPoster_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UBase_PropagandaPoster_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_PropagandaPoster_GhostAnimBP.Base_PropagandaPoster_GhostAnimBP_C.BP_InitializeGhost");
		
		UBase_PropagandaPoster_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_PropagandaPoster_GhostAnimBP.Base_PropagandaPoster_GhostAnimBP_C.ExecuteUbergraph_Base_PropagandaPoster_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBase_PropagandaPoster_GhostAnimBP_C::ExecuteUbergraph_Base_PropagandaPoster_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_PropagandaPoster_GhostAnimBP.Base_PropagandaPoster_GhostAnimBP_C.ExecuteUbergraph_Base_PropagandaPoster_GhostAnimBP");
		
		UBase_PropagandaPoster_GhostAnimBP_C_ExecuteUbergraph_Base_PropagandaPoster_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBase_PropagandaPoster_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBase_PropagandaPoster_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Base_PropagandaPoster_GhostAnimBP.Base_PropagandaPoster_GhostAnimBP_C");
		return ptr;
	}

}


