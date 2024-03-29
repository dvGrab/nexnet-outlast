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
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void Uplayer_3P_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.AnimGraph");
		
		Uplayer_3P_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.ToggleAFK
	 * 		Flags  -> ()
	 */
	void Uplayer_3P_AnimBP_C::ToggleAFK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.ToggleAFK");
		
		Uplayer_3P_AnimBP_C_ToggleAFK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.ShouldIgnoreLookAround
	 * 		Flags  -> ()
	 */
	bool Uplayer_3P_AnimBP_C::ShouldIgnoreLookAround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.ShouldIgnoreLookAround");
		
		Uplayer_3P_AnimBP_C_ShouldIgnoreLookAround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IsGone
	 * 		Flags  -> ()
	 */
	void Uplayer_3P_AnimBP_C::AnimNotify_IsGone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IsGone");
		
		Uplayer_3P_AnimBP_C_AnimNotify_IsGone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IsIdle
	 * 		Flags  -> ()
	 */
	void Uplayer_3P_AnimBP_C::AnimNotify_IsIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IsIdle");
		
		Uplayer_3P_AnimBP_C_AnimNotify_IsIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IsBack
	 * 		Flags  -> ()
	 */
	void Uplayer_3P_AnimBP_C::AnimNotify_IsBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IsBack");
		
		Uplayer_3P_AnimBP_C_AnimNotify_IsBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uplayer_3P_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.BlueprintUpdateAnimation");
		
		Uplayer_3P_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_Dead
	 * 		Flags  -> ()
	 */
	void Uplayer_3P_AnimBP_C::AnimNotify_Dead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_Dead");
		
		Uplayer_3P_AnimBP_C_AnimNotify_Dead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_Alive
	 * 		Flags  -> ()
	 */
	void Uplayer_3P_AnimBP_C::AnimNotify_Alive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_Alive");
		
		Uplayer_3P_AnimBP_C_AnimNotify_Alive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IdleBreaker
	 * 		Flags  -> ()
	 */
	void Uplayer_3P_AnimBP_C::AnimNotify_IdleBreaker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IdleBreaker");
		
		Uplayer_3P_AnimBP_C_AnimNotify_IdleBreaker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_StartPush_Left
	 * 		Flags  -> ()
	 */
	void Uplayer_3P_AnimBP_C::AnimNotify_StartPush_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_StartPush_Left");
		
		Uplayer_3P_AnimBP_C_AnimNotify_StartPush_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_StopPush_Left
	 * 		Flags  -> ()
	 */
	void Uplayer_3P_AnimBP_C::AnimNotify_StopPush_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_StopPush_Left");
		
		Uplayer_3P_AnimBP_C_AnimNotify_StopPush_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function player_3P_AnimBP.player_3P_AnimBP_C.ExecuteUbergraph_player_3P_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uplayer_3P_AnimBP_C::ExecuteUbergraph_player_3P_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function player_3P_AnimBP.player_3P_AnimBP_C.ExecuteUbergraph_player_3P_AnimBP");
		
		Uplayer_3P_AnimBP_C_ExecuteUbergraph_player_3P_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uplayer_3P_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uplayer_3P_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass player_3P_AnimBP.player_3P_AnimBP_C");
		return ptr;
	}

}


