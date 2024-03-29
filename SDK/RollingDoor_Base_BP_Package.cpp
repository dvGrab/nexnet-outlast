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
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetShadowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseRealDoorShadow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARollingDoor_Base_BP_C::SetShadowMode(bool UseRealDoorShadow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetShadowMode");
		
		ARollingDoor_Base_BP_C_SetShadowMode_Params params {};
		params.UseRealDoorShadow = UseRealDoorShadow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_SoundDetector_Front
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_SoundDetector_Front()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_SoundDetector_Front");
		
		ARollingDoor_Base_BP_C_OnRep_SoundDetector_Front_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetCollisions
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::SetCollisions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetCollisions");
		
		ARollingDoor_Base_BP_C_SetCollisions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetSoundConnectors
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::SetSoundConnectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetSoundConnectors");
		
		ARollingDoor_Base_BP_C_SetSoundConnectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetGateAnimations
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::SetGateAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetGateAnimations");
		
		ARollingDoor_Base_BP_C_SetGateAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetGateVisuals
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::SetGateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetGateVisuals");
		
		ARollingDoor_Base_BP_C_SetGateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Set Current Delay
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Set_Current_Delay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Set Current Delay");
		
		ARollingDoor_Base_BP_C_Set_Current_Delay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.GetMeshOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::GetMeshOffset(struct FVector* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.GetMeshOffset");
		
		ARollingDoor_Base_BP_C_GetMeshOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetTutorials
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::SetTutorials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetTutorials");
		
		ARollingDoor_Base_BP_C_SetTutorials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.GetElectricalSwitchTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFront                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ARollingDoor_Base_BP_C::GetElectricalSwitchTransform(bool bIsFront, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.GetElectricalSwitchTransform");
		
		ARollingDoor_Base_BP_C_GetElectricalSwitchTransform_Params params {};
		params.bIsFront = bIsFront;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetUnlockTimersFrozen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARollingDoor_Base_BP_C::SetUnlockTimersFrozen(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetUnlockTimersFrozen");
		
		ARollingDoor_Base_BP_C_SetUnlockTimersFrozen_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetUnlockTimersEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARollingDoor_Base_BP_C::SetUnlockTimersEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetUnlockTimersEnabled");
		
		ARollingDoor_Base_BP_C_SetUnlockTimersEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Get Unlockable Duration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::Get_Unlockable_Duration(float* duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Get Unlockable Duration");
		
		ARollingDoor_Base_BP_C_Get_Unlockable_Duration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (duration != nullptr)
			*duration = params.duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.StartUnlockTimers
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::StartUnlockTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.StartUnlockTimers");
		
		ARollingDoor_Base_BP_C_StartUnlockTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ResetUnlockSwitchCompletion
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::ResetUnlockSwitchCompletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ResetUnlockSwitchCompletion");
		
		ARollingDoor_Base_BP_C_ResetUnlockSwitchCompletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.UpdateUnlockSwitchInteractivity
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::UpdateUnlockSwitchInteractivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.UpdateUnlockSwitchInteractivity");
		
		ARollingDoor_Base_BP_C_UpdateUnlockSwitchInteractivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_LightSelectorState
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_LightSelectorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_LightSelectorState");
		
		ARollingDoor_Base_BP_C_OnRep_LightSelectorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.UpdateInteractiveSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AElectricalSwitch_RollingdoorVariator__BP_C* Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AElectricalSwitch_RollingdoorVariator__BP_C* Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::UpdateInteractiveSwitch(class AElectricalSwitch_RollingdoorVariator__BP_C* Instigator, class AElectricalSwitch_RollingdoorVariator__BP_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.UpdateInteractiveSwitch");
		
		ARollingDoor_Base_BP_C_UpdateInteractiveSwitch_Params params {};
		params.Instigator = Instigator;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_ElectricalSwitch_Back
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_ElectricalSwitch_Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_ElectricalSwitch_Back");
		
		ARollingDoor_Base_BP_C_OnRep_ElectricalSwitch_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_ElectricalSwitch_Front
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_ElectricalSwitch_Front()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_ElectricalSwitch_Front");
		
		ARollingDoor_Base_BP_C_OnRep_ElectricalSwitch_Front_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_LightSelectorBack
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_LightSelectorBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_LightSelectorBack");
		
		ARollingDoor_Base_BP_C_OnRep_LightSelectorBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_LightSelectorFront
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_LightSelectorFront()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_LightSelectorFront");
		
		ARollingDoor_Base_BP_C_OnRep_LightSelectorFront_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_AnimationDurationSeconds
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_AnimationDurationSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_AnimationDurationSeconds");
		
		ARollingDoor_Base_BP_C_OnRep_AnimationDurationSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_ToasterDetector_Front
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_ToasterDetector_Front()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_ToasterDetector_Front");
		
		ARollingDoor_Base_BP_C_OnRep_ToasterDetector_Front_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_PassagesCounter_Back
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_PassagesCounter_Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_PassagesCounter_Back");
		
		ARollingDoor_Base_BP_C_OnRep_PassagesCounter_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_PassagesCounter_Front
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnRep_PassagesCounter_Front()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_PassagesCounter_Front");
		
		ARollingDoor_Base_BP_C_OnRep_PassagesCounter_Front_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.InitVariatorType
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::InitVariatorType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.InitVariatorType");
		
		ARollingDoor_Base_BP_C_InitVariatorType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ClearVariatorTypes
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::ClearVariatorTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ClearVariatorTypes");
		
		ARollingDoor_Base_BP_C_ClearVariatorTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.IsOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARollingDoor_Base_BP_C::IsOpen(bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.IsOpen");
		
		ARollingDoor_Base_BP_C_IsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Initialize
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Initialize");
		
		ARollingDoor_Base_BP_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.TryRefreshSoundConnector
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::TryRefreshSoundConnector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.TryRefreshSoundConnector");
		
		ARollingDoor_Base_BP_C_TryRefreshSoundConnector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnTimelineUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::OnTimelineUpdate(float ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnTimelineUpdate");
		
		ARollingDoor_Base_BP_C_OnTimelineUpdate_Params params {};
		params.ratio = ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.UserConstructionScript");
		
		ARollingDoor_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::AnimationTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__FinishedFunc");
		
		ARollingDoor_Base_BP_C_AnimationTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::AnimationTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__UpdateFunc");
		
		ARollingDoor_Base_BP_C_AnimationTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__AllowNavMesh__EventFunc
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::AnimationTimeline__AllowNavMesh__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__AllowNavMesh__EventFunc");
		
		ARollingDoor_Base_BP_C_AnimationTimeline__AllowNavMesh__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__NewTrack_0__EventFunc
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::AnimationTimeline__NewTrack_0__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__NewTrack_0__EventFunc");
		
		ARollingDoor_Base_BP_C_AnimationTimeline__NewTrack_0__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ReceiveBeginPlay");
		
		ARollingDoor_Base_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnOperatableProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     operatable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              oldProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              currentProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSnap                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARollingDoor_Base_BP_C::Event_OnOperatableProgressChanged(class UObject* operatable, float oldProgress, float currentProgress, bool bSnap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnOperatableProgressChanged");
		
		ARollingDoor_Base_BP_C_Event_OnOperatableProgressChanged_Params params {};
		params.operatable = operatable;
		params.oldProgress = oldProgress;
		params.currentProgress = currentProgress;
		params.bSnap = bSnap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ResetDoor
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::ResetDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ResetDoor");
		
		ARollingDoor_Base_BP_C_ResetDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_SnapToState");
		
		ARollingDoor_Base_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnTriggerSequenceStarted
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Event_OnTriggerSequenceStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnTriggerSequenceStarted");
		
		ARollingDoor_Base_BP_C_Event_OnTriggerSequenceStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnTriggered");
		
		ARollingDoor_Base_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnUntriggered");
		
		ARollingDoor_Base_BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnUntriggerSequenceStarted
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Event_OnUntriggerSequenceStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnUntriggerSequenceStarted");
		
		ARollingDoor_Base_BP_C_Event_OnUntriggerSequenceStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnResetStage");
		
		ARollingDoor_Base_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature");
		
		ARollingDoor_Base_BP_C_BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_3_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_3_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_3_OnPlayerTriggerVolumeActorEvent__DelegateSignature");
		
		ARollingDoor_Base_BP_C_BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_3_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_4_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_4_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_4_OnPlayerTriggerVolumeActorEvent__DelegateSignature");
		
		ARollingDoor_Base_BP_C_BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_4_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_5_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_5_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_5_OnPlayerTriggerVolumeActorEvent__DelegateSignature");
		
		ARollingDoor_Base_BP_C_BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_5_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.RandomTimedOpenClosed
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::RandomTimedOpenClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.RandomTimedOpenClosed");
		
		ARollingDoor_Base_BP_C_RandomTimedOpenClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ReceiveEndPlay");
		
		ARollingDoor_Base_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.StartDelay
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::StartDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.StartDelay");
		
		ARollingDoor_Base_BP_C_StartDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnCurrentVariatorTypeChanged
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Event_OnCurrentVariatorTypeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnCurrentVariatorTypeChanged");
		
		ARollingDoor_Base_BP_C_Event_OnCurrentVariatorTypeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnInteractorChange
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::OnInteractorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnInteractorChange");
		
		ARollingDoor_Base_BP_C_OnInteractorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BindSwitchEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AElectricalSwitch_RollingdoorVariator__BP_C* SWITCH                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::BindSwitchEvents(class AElectricalSwitch_RollingdoorVariator__BP_C* SWITCH)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BindSwitchEvents");
		
		ARollingDoor_Base_BP_C_BindSwitchEvents_Params params {};
		params.SWITCH = SWITCH;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnUnlockCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ARBOperatable*                               operatable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::OnUnlockCompleted(bool bIsOn, class ARBOperatable* operatable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnUnlockCompleted");
		
		ARollingDoor_Base_BP_C_OnUnlockCompleted_Params params {};
		params.bIsOn = bIsOn;
		params.operatable = operatable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnVariatorLogicEnabledChanged
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Event_OnVariatorLogicEnabledChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnVariatorLogicEnabledChanged");
		
		ARollingDoor_Base_BP_C_Event_OnVariatorLogicEnabledChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnReplacedDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBDoor*                                     door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::OnReplacedDoor(class ARBDoor* door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnReplacedDoor");
		
		ARollingDoor_Base_BP_C_OnReplacedDoor_Params params {};
		params.door = door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnBlockableStateChanged
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Event_OnBlockableStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnBlockableStateChanged");
		
		ARollingDoor_Base_BP_C_Event_OnBlockableStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Test
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::Test()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Test");
		
		ARollingDoor_Base_BP_C_Test_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.newtimeTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::newtimeTest(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.newtimeTest");
		
		ARollingDoor_Base_BP_C_newtimeTest_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Sound Detected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerSoundDetectionState                         oldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPlayerSoundDetectionState                         newState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::Sound_Detected(EPlayerSoundDetectionState oldState, EPlayerSoundDetectionState newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Sound Detected");
		
		ARollingDoor_Base_BP_C_Sound_Detected_Params params {};
		params.oldState = oldState;
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ExecuteUbergraph_RollingDoor-Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARollingDoor_Base_BP_C::ExecuteUbergraph_RollingDoor_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ExecuteUbergraph_RollingDoor-Base_BP");
		
		ARollingDoor_Base_BP_C_ExecuteUbergraph_RollingDoor_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationCompletedBackward__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::AnimationCompletedBackward__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationCompletedBackward__DelegateSignature");
		
		ARollingDoor_Base_BP_C_AnimationCompletedBackward__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationCompletedForward__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARollingDoor_Base_BP_C::AnimationCompletedForward__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationCompletedForward__DelegateSignature");
		
		ARollingDoor_Base_BP_C_AnimationCompletedForward__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARollingDoor_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARollingDoor_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RollingDoor_Base_BP.RollingDoor-Base_BP_C");
		return ptr;
	}

}


