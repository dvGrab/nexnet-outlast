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
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.NightHunter_EnterLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   NightHunter_EnterLight                                     (Parm, OutParm, NoDestructor)
	 */
	void Ugrunt_AnimBP_C::NightHunter_EnterLight(const struct FPoseLink& Input, struct FPoseLink* NightHunter_EnterLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.NightHunter_EnterLight");
		
		Ugrunt_AnimBP_C_NightHunter_EnterLight_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NightHunter_EnterLight != nullptr)
			*NightHunter_EnterLight = params.NightHunter_EnterLight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.NightHunter_InLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   NightHunter_InLight                                        (Parm, OutParm, NoDestructor)
	 */
	void Ugrunt_AnimBP_C::NightHunter_InLight(const struct FPoseLink& InPose, struct FPoseLink* NightHunter_InLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.NightHunter_InLight");
		
		Ugrunt_AnimBP_C_NightHunter_InLight_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NightHunter_InLight != nullptr)
			*NightHunter_InLight = params.NightHunter_InLight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void Ugrunt_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.AnimGraph");
		
		Ugrunt_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.ShouldReactToLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldReactToLight                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ugrunt_AnimBP_C::ShouldReactToLight(bool* ShouldReactToLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.ShouldReactToLight");
		
		Ugrunt_AnimBP_C_ShouldReactToLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldReactToLight != nullptr)
			*ShouldReactToLight = params.ShouldReactToLight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void Ugrunt_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.BlueprintBeginPlay");
		
		Ugrunt_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_HoldOn
	 * 		Flags  -> ()
	 */
	void Ugrunt_AnimBP_C::AnimNotify_HoldOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_HoldOn");
		
		Ugrunt_AnimBP_C_AnimNotify_HoldOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_LetGo
	 * 		Flags  -> ()
	 */
	void Ugrunt_AnimBP_C::AnimNotify_LetGo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_LetGo");
		
		Ugrunt_AnimBP_C_AnimNotify_LetGo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_InLight
	 * 		Flags  -> ()
	 */
	void Ugrunt_AnimBP_C::AnimNotify_InLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_InLight");
		
		Ugrunt_AnimBP_C_AnimNotify_InLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_InDark
	 * 		Flags  -> ()
	 */
	void Ugrunt_AnimBP_C::AnimNotify_InDark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_InDark");
		
		Ugrunt_AnimBP_C_AnimNotify_InDark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.Toogle Break from BlindedPose
	 * 		Flags  -> ()
	 */
	void Ugrunt_AnimBP_C::Toogle_Break_from_BlindedPose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.Toogle Break from BlindedPose");
		
		Ugrunt_AnimBP_C_Toogle_Break_from_BlindedPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.Event_OnInDarknessChanged
	 * 		Flags  -> ()
	 */
	void Ugrunt_AnimBP_C::Event_OnInDarknessChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.Event_OnInDarknessChanged");
		
		Ugrunt_AnimBP_C_Event_OnInDarknessChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ugrunt_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.BlueprintUpdateAnimation");
		
		Ugrunt_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_ResetEnterLight
	 * 		Flags  -> ()
	 */
	void Ugrunt_AnimBP_C::AnimNotify_ResetEnterLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_ResetEnterLight");
		
		Ugrunt_AnimBP_C_AnimNotify_ResetEnterLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function grunt_AnimBP.grunt_AnimBP_C.ExecuteUbergraph_grunt_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ugrunt_AnimBP_C::ExecuteUbergraph_grunt_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function grunt_AnimBP.grunt_AnimBP_C.ExecuteUbergraph_grunt_AnimBP");
		
		Ugrunt_AnimBP_C_ExecuteUbergraph_grunt_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Ugrunt_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Ugrunt_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass grunt_AnimBP.grunt_AnimBP_C");
		return ptr;
	}

}


