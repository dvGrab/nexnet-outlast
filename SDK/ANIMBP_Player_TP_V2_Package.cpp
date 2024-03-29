/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_Player_TP_V2_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimGraph");
		
		UANIMBP_Player_TP_V2_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Player_TP_V2_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.BlueprintUpdateAnimation");
		
		UANIMBP_Player_TP_V2_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_PlayFootstep
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_PlayFootstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_PlayFootstep");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_PlayFootstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_ToggleRagdoll
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_ToggleRagdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_ToggleRagdoll");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_ToggleRagdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_StartFullbodyRagdoll
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_StartFullbodyRagdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_StartFullbodyRagdoll");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_StartFullbodyRagdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_FinishVault
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_FinishVault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_FinishVault");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_FinishVault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_ShowTPMesh
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_ShowTPMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_ShowTPMesh");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_ShowTPMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_HideTPMesh
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_HideTPMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_HideTPMesh");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_HideTPMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_ToggleTIPRelevance
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_ToggleTIPRelevance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_ToggleTIPRelevance");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_ToggleTIPRelevance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_ResetTIPRelevancy
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_ResetTIPRelevancy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_ResetTIPRelevancy");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_ResetTIPRelevancy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_AllowTurnInPlace
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_AllowTurnInPlace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_AllowTurnInPlace");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_AllowTurnInPlace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_OnFullyBlendedStartState
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_OnFullyBlendedStartState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_OnFullyBlendedStartState");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_OnFullyBlendedStartState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_OnFullyBlendedMoving
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_OnFullyBlendedMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_OnFullyBlendedMoving");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_OnFullyBlendedMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_DisableTurnInPlace
	 * 		Flags  -> ()
	 */
	void UANIMBP_Player_TP_V2_C::AnimNotify_DisableTurnInPlace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.AnimNotify_DisableTurnInPlace");
		
		UANIMBP_Player_TP_V2_C_AnimNotify_DisableTurnInPlace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.ExecuteUbergraph_ANIMBP_Player_TP_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Player_TP_V2_C::ExecuteUbergraph_ANIMBP_Player_TP_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C.ExecuteUbergraph_ANIMBP_Player_TP_V2");
		
		UANIMBP_Player_TP_V2_C_ExecuteUbergraph_ANIMBP_Player_TP_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_Player_TP_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_Player_TP_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_Player_TP_V2.ANIMBP_Player_TP_V2_C");
		return ptr;
	}

}


