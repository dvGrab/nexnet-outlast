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
	 * 		Name   -> Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_MovingAnimation
	 * 		Flags  -> ()
	 */
	void AMansionGuideMannequin__BP_C::OnRep_MovingAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_MovingAnimation");
		
		AMansionGuideMannequin__BP_C_OnRep_MovingAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.PlayStationAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWelcome                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPointing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMansionGuideMannequin__BP_C::PlayStationAnimation(bool bWelcome, bool bPointing, float Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.PlayStationAnimation");
		
		AMansionGuideMannequin__BP_C_PlayStationAnimation_Params params {};
		params.bWelcome = bWelcome;
		params.bPointing = bPointing;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_MannequinRotation
	 * 		Flags  -> ()
	 */
	void AMansionGuideMannequin__BP_C::OnRep_MannequinRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_MannequinRotation");
		
		AMansionGuideMannequin__BP_C_OnRep_MannequinRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_PlayPointingAnimation
	 * 		Flags  -> ()
	 */
	void AMansionGuideMannequin__BP_C::OnRep_PlayPointingAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_PlayPointingAnimation");
		
		AMansionGuideMannequin__BP_C_OnRep_PlayPointingAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_PlayWelcomeAnimation
	 * 		Flags  -> ()
	 */
	void AMansionGuideMannequin__BP_C::OnRep_PlayWelcomeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_PlayWelcomeAnimation");
		
		AMansionGuideMannequin__BP_C_OnRep_PlayWelcomeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.SetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DesiredRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMansionGuideMannequin__BP_C::SetRotation(float DesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.SetRotation");
		
		AMansionGuideMannequin__BP_C_SetRotation_Params params {};
		params.DesiredRotation = DesiredRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.GoNeutral
	 * 		Flags  -> ()
	 */
	void AMansionGuideMannequin__BP_C::GoNeutral()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.GoNeutral");
		
		AMansionGuideMannequin__BP_C_GoNeutral_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMansionGuideMannequin__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMansionGuideMannequin__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MansionGuideMannequin_01_BP.MansionGuideMannequin-01_BP_C");
		return ptr;
	}

}


