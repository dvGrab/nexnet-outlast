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
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.ToggleTvStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class ANarrativeScreenBase_BP_C*>           TVGroup                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ARBLight_BP_C*>                       TVLights                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void APoliceStation_T02_B01_C::ToggleTvStates(bool State, TArray<class ANarrativeScreenBase_BP_C*>* TVGroup, TArray<class ARBLight_BP_C*>* TVLights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.ToggleTvStates");
		
		APoliceStation_T02_B01_C_ToggleTvStates_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TVGroup != nullptr)
			*TVGroup = params.TVGroup;
		if (TVLights != nullptr)
			*TVLights = params.TVLights;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsCellLightsBlinking
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::OnRep_bIsCellLightsBlinking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsCellLightsBlinking");
		
		APoliceStation_T02_B01_C_OnRep_bIsCellLightsBlinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsCellGatesOpen
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::OnRep_bIsCellGatesOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsCellGatesOpen");
		
		APoliceStation_T02_B01_C_OnRep_bIsCellGatesOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsExecRoomLightActive
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::OnRep_bIsExecRoomLightActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsExecRoomLightActive");
		
		APoliceStation_T02_B01_C_OnRep_bIsExecRoomLightActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Get All Arrays from Tags
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::GetAllArraysfromTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Get All Arrays from Tags");
		
		APoliceStation_T02_B01_C_GetAllArraysfromTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsLightSetup2Active
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::OnRep_bIsLightSetup2Active()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsLightSetup2Active");
		
		APoliceStation_T02_B01_C_OnRep_bIsLightSetup2Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsLightSetup1Active
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::OnRep_bIsLightSetup1Active()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsLightSetup1Active");
		
		APoliceStation_T02_B01_C_OnRep_bIsLightSetup1Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Timeline_0__FinishedFunc");
		
		APoliceStation_T02_B01_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Timeline_0__UpdateFunc");
		
		APoliceStation_T02_B01_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_Simple_ObjCoord_BP_2_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsJIP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation_T02_B01_C::BndEvt__PoliceStation_T02_B01_Simple_ObjCoord_BP_2_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_Simple_ObjCoord_BP_2_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorCompleted__DelegateSignature");
		
		APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_Simple_ObjCoord_BP_2_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorCompleted__DelegateSignature_Params params {};
		params.bIsJIP = bIsJIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.UpdateBlinkingLights
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::UpdateBlinkingLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.UpdateBlinkingLights");
		
		APoliceStation_T02_B01_C_UpdateBlinkingLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Event_OnResetStage");
		
		APoliceStation_T02_B01_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.PST02B01_UpdateLightSetup1Activation
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::PST02B01_UpdateLightSetup1Activation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.PST02B01_UpdateLightSetup1Activation");
		
		APoliceStation_T02_B01_C_PST02B01_UpdateLightSetup1Activation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.debug_setLightPowerOn
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::debug_setLightPowerOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.debug_setLightPowerOn");
		
		APoliceStation_T02_B01_C_debug_setLightPowerOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetBlinkingLight_On
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetBlinkingLight_On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetBlinkingLight_On");
		
		APoliceStation_T02_B01_C_B01_SetBlinkingLight_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetBlinkingLight_Off
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetBlinkingLight_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetBlinkingLight_Off");
		
		APoliceStation_T02_B01_C_B01_SetBlinkingLight_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_UpdateCellDoorsState
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_UpdateCellDoorsState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_UpdateCellDoorsState");
		
		APoliceStation_T02_B01_C_B01_UpdateCellDoorsState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.manageCorridorJailGates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isGateOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation_T02_B01_C::manageCorridorJailGates(bool isGateOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.manageCorridorJailGates");
		
		APoliceStation_T02_B01_C_manageCorridorJailGates_Params params {};
		params.isGateOpen = isGateOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_UpdateExecRoomLightSetupActivation
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_UpdateExecRoomLightSetupActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_UpdateExecRoomLightSetupActivation");
		
		APoliceStation_T02_B01_C_B01_UpdateExecRoomLightSetupActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.ElectricTension
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::ElectricTension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.ElectricTension");
		
		APoliceStation_T02_B01_C_ElectricTension_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.PST02B01_TurnOffControlRoomSurveillanceTV
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::PST02B01_TurnOffControlRoomSurveillanceTV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.PST02B01_TurnOffControlRoomSurveillanceTV");
		
		APoliceStation_T02_B01_C_PST02B01_TurnOffControlRoomSurveillanceTV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_PS_T02_B01_ObjCoord_02_Delay_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsJIP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation_T02_B01_C::BndEvt__PoliceStation_T02_B01_PS_T02_B01_ObjCoord_02_Delay_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_PS_T02_B01_ObjCoord_02_Delay_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorCompleted__DelegateSignature");
		
		APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_PS_T02_B01_ObjCoord_02_Delay_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorCompleted__DelegateSignature_Params params {};
		params.bIsJIP = bIsJIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.debug_setLightPowerOff
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::debug_setLightPowerOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.debug_setLightPowerOff");
		
		APoliceStation_T02_B01_C_debug_setLightPowerOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup1_On
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::setLightSetup1_On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup1_On");
		
		APoliceStation_T02_B01_C_setLightSetup1_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup1_Off
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::setLightSetup1_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup1_Off");
		
		APoliceStation_T02_B01_C_setLightSetup1_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup2_On
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::setLightSetup2_On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup2_On");
		
		APoliceStation_T02_B01_C_setLightSetup2_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup2_Off
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::setLightSetup2_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup2_Off");
		
		APoliceStation_T02_B01_C_setLightSetup2_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.PST02B01_UpdateLightSetup2Activation
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::PST02B01_UpdateLightSetup2Activation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.PST02B01_UpdateLightSetup2Activation");
		
		APoliceStation_T02_B01_C_PST02B01_UpdateLightSetup2Activation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetExecRoomLight_On
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetExecRoomLight_On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetExecRoomLight_On");
		
		APoliceStation_T02_B01_C_B01_SetExecRoomLight_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetExecRoomLight_Off
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetExecRoomLight_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetExecRoomLight_Off");
		
		APoliceStation_T02_B01_C_B01_SetExecRoomLight_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetCellGates_Open
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetCellGates_Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetCellGates_Open");
		
		APoliceStation_T02_B01_C_B01_SetCellGates_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetCellGates_Close
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetCellGates_Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetCellGates_Close");
		
		APoliceStation_T02_B01_C_B01_SetCellGates_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnStageReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBStageID                                  StageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FRBMissionID                                MissionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void APoliceStation_T02_B01_C::OnStageReady(const struct FRBStageID& StageID, const struct FRBMissionID& MissionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnStageReady");
		
		APoliceStation_T02_B01_C_OnStageReady_Params params {};
		params.StageID = StageID;
		params.MissionID = MissionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetControlRoomObjTV_On
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetControlRoomObjTV_On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetControlRoomObjTV_On");
		
		APoliceStation_T02_B01_C_B01_SetControlRoomObjTV_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetControlRoomObjTV_Off
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetControlRoomObjTV_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetControlRoomObjTV_Off");
		
		APoliceStation_T02_B01_C_B01_SetControlRoomObjTV_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetJailCorridorObjTV_On
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetJailCorridorObjTV_On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetJailCorridorObjTV_On");
		
		APoliceStation_T02_B01_C_B01_SetJailCorridorObjTV_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetJailCorridorObjTV_Off
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_SetJailCorridorObjTV_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetJailCorridorObjTV_Off");
		
		APoliceStation_T02_B01_C_B01_SetJailCorridorObjTV_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.CloseLeftJailCellDoor
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::CloseLeftJailCellDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.CloseLeftJailCellDoor");
		
		APoliceStation_T02_B01_C_CloseLeftJailCellDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.RemoveJailGatesTutorial
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::RemoveJailGatesTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.RemoveJailGatesTutorial");
		
		APoliceStation_T02_B01_C_RemoveJailGatesTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_CoyleCutsceneLightManagement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isLightActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation_T02_B01_C::B01_CoyleCutsceneLightManagement(bool isLightActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_CoyleCutsceneLightManagement");
		
		APoliceStation_T02_B01_C_B01_CoyleCutsceneLightManagement_Params params {};
		params.isLightActive = isLightActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_2_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B01_C::BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_2_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_2_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_2_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B01_C::BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_StartTVSnitch
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_StartTVSnitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_StartTVSnitch");
		
		APoliceStation_T02_B01_C_B01_StartTVSnitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBGameplayTriggerVolume_PushSnitch_PowerDown_K2Node_ActorBoundEvent_6_OnGameplayTriggerEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBGameplayTriggerComponent*                 Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B01_C::BndEvt__PoliceStation_T02_B01_RBGameplayTriggerVolume_PushSnitch_PowerDown_K2Node_ActorBoundEvent_6_OnGameplayTriggerEvent__DelegateSignature(class URBGameplayTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBGameplayTriggerVolume_PushSnitch_PowerDown_K2Node_ActorBoundEvent_6_OnGameplayTriggerEvent__DelegateSignature");
		
		APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBGameplayTriggerVolume_PushSnitch_PowerDown_K2Node_ActorBoundEvent_6_OnGameplayTriggerEvent__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToogleSASTV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation_T02_B01_C::B01_ToogleSASTV(bool SetOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToogleSASTV");
		
		APoliceStation_T02_B01_C_B01_ToogleSASTV_Params params {};
		params.SetOn = SetOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_OpenExecutionRoomLight_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_OpenExecutionRoomLight_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_OpenExecutionRoomLight_Remote");
		
		APoliceStation_T02_B01_C_B01_OpenExecutionRoomLight_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToogleSnitchTVLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation_T02_B01_C::B01_ToogleSnitchTVLights(bool SetOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToogleSnitchTVLights");
		
		APoliceStation_T02_B01_C_B01_ToogleSnitchTVLights_Params params {};
		params.SetOn = SetOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_SASTVs_K2Node_ActorBoundEvent_5_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B01_C::BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_SASTVs_K2Node_ActorBoundEvent_5_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_SASTVs_K2Node_ActorBoundEvent_5_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_SASTVs_K2Node_ActorBoundEvent_5_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToggleSASTV_SoundLinks
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_ToggleSASTV_SoundLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToggleSASTV_SoundLinks");
		
		APoliceStation_T02_B01_C_B01_ToggleSASTV_SoundLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_PingTuto_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B01_C::BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_PingTuto_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_PingTuto_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeActorEvent__DelegateSignature");
		
		APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_PingTuto_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_IntroAvellanosExit
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_IntroAvellanosExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_IntroAvellanosExit");
		
		APoliceStation_T02_B01_C_B01_IntroAvellanosExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToggleSASTV_Off_SoundLinks
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B01_C::B01_ToggleSASTV_Off_SoundLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToggleSASTV_Off_SoundLinks");
		
		APoliceStation_T02_B01_C_B01_ToggleSASTV_Off_SoundLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.ExecuteUbergraph_PoliceStation_T02_B01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B01_C::ExecuteUbergraph_PoliceStation_T02_B01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.ExecuteUbergraph_PoliceStation_T02_B01");
		
		APoliceStation_T02_B01_C_ExecuteUbergraph_PoliceStation_T02_B01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoliceStation_T02_B01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_T02_B01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_T02_B01.PoliceStation_T02_B01_C");
		return ptr;
	}

}


