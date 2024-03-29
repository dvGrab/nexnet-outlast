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
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.AddOrRemoveBasementState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Remove                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation01_SND_C::AddOrRemoveBasementState(bool Remove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.AddOrRemoveBasementState");
		
		APoliceStation01_SND_C_AddOrRemoveBasementState_Params params {};
		params.Remove = Remove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PlaySE_Grunts
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PlaySE_Grunts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PlaySE_Grunts");
		
		APoliceStation01_SND_C_PlaySE_Grunts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.UpdateWitnessScreamLoop
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::UpdateWitnessScreamLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.UpdateWitnessScreamLoop");
		
		APoliceStation01_SND_C_UpdateWitnessScreamLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.SetSnitchBreathIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RTPC_Snitch_Breath_Intensity                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation01_SND_C::SetSnitchBreathIntensity(float RTPC_Snitch_Breath_Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.SetSnitchBreathIntensity");
		
		APoliceStation01_SND_C_SetSnitchBreathIntensity_Params params {};
		params.RTPC_Snitch_Breath_Intensity = RTPC_Snitch_Breath_Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PlayVoOnCoyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               akEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EVOPriority                                        VOPriority                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation01_SND_C::PlayVoOnCoyle(class UAkAudioEvent* akEvent, EVOPriority VOPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PlayVoOnCoyle");
		
		APoliceStation01_SND_C_PlayVoOnCoyle_Params params {};
		params.akEvent = akEvent;
		params.VOPriority = VOPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PlayVoOnSnitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               akEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EVOPriority                                        VOPriority                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation01_SND_C::PlayVoOnSnitch(class UAkAudioEvent* akEvent, EVOPriority VOPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PlayVoOnSnitch");
		
		APoliceStation01_SND_C_PlayVoOnSnitch_Params params {};
		params.akEvent = akEvent;
		params.VOPriority = VOPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_JailDoorOpen
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B01_SND_JailDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_JailDoorOpen");
		
		APoliceStation01_SND_C_PST02B01_SND_JailDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_ElectricRoomLightOn
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B01_SND_ElectricRoomLightOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_ElectricRoomLightOn");
		
		APoliceStation01_SND_C_PST02B01_SND_ElectricRoomLightOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation01_SND_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.ReceiveTick");
		
		APoliceStation01_SND_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.ReceiveBeginPlay");
		
		APoliceStation01_SND_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B06_SND_ElectrocutionStart
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B06_SND_ElectrocutionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B06_SND_ElectrocutionStart");
		
		APoliceStation01_SND_C_PST02B06_SND_ElectrocutionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.Event_OnResetStage");
		
		APoliceStation01_SND_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopDickOffSFX
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02SE_SND_StopDickOffSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopDickOffSFX");
		
		APoliceStation01_SND_C_PST02SE_SND_StopDickOffSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopAssHoleSFX
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02SE_SND_StopAssHoleSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopAssHoleSFX");
		
		APoliceStation01_SND_C_PST02SE_SND_StopAssHoleSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopBloodPaintSFX
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02SE_SND_StopBloodPaintSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopBloodPaintSFX");
		
		APoliceStation01_SND_C_PST02SE_SND_StopBloodPaintSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopRapistSFX
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02SE_SND_StopRapistSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopRapistSFX");
		
		APoliceStation01_SND_C_PST02SE_SND_StopRapistSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.StopSEGrunts
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::StopSEGrunts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.StopSEGrunts");
		
		APoliceStation01_SND_C_StopSEGrunts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_ControlRoomButtonPress
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B01_SND_ControlRoomButtonPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_ControlRoomButtonPress");
		
		APoliceStation01_SND_C_PST02B01_SND_ControlRoomButtonPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B02_SND_SpawnCoyle
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B02_SND_SpawnCoyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B02_SND_SpawnCoyle");
		
		APoliceStation01_SND_C_PST02B02_SND_SpawnCoyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.ClosePrisonCells
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::ClosePrisonCells()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.ClosePrisonCells");
		
		APoliceStation01_SND_C_ClosePrisonCells_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_CloseAllCellDoors
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B01_SND_CloseAllCellDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_CloseAllCellDoors");
		
		APoliceStation01_SND_C_PST02B01_SND_CloseAllCellDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicSnitchStart
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::debugMusicSnitchStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicSnitchStart");
		
		APoliceStation01_SND_C_debugMusicSnitchStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.DebugMusicSnitchStop
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::DebugMusicSnitchStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.DebugMusicSnitchStop");
		
		APoliceStation01_SND_C_DebugMusicSnitchStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.DebugMusicFinaleStart
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::DebugMusicFinaleStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.DebugMusicFinaleStart");
		
		APoliceStation01_SND_C_DebugMusicFinaleStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicFinaleStop
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::debugMusicFinaleStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicFinaleStop");
		
		APoliceStation01_SND_C_debugMusicFinaleStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicBasementStop
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::debugMusicBasementStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicBasementStop");
		
		APoliceStation01_SND_C_debugMusicBasementStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_StartingSetup
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B01_SND_StartingSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_StartingSetup");
		
		APoliceStation01_SND_C_PST02B01_SND_StartingSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_PowerShutDown
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B01_SND_PowerShutDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_PowerShutDown");
		
		APoliceStation01_SND_C_PST02B01_SND_PowerShutDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.BndEvt__PoliceStation-01_SND_RBPlayerTriggerVolume_AmbientCellVOChange_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation01_SND_C::BndEvt__PoliceStation01_SND_RBPlayerTriggerVolume_AmbientCellVOChange_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.BndEvt__PoliceStation-01_SND_RBPlayerTriggerVolume_AmbientCellVOChange_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		APoliceStation01_SND_C_BndEvt__PoliceStation01_SND_RBPlayerTriggerVolume_AmbientCellVOChange_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugVoStopRaping
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::debugVoStopRaping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugVoStopRaping");
		
		APoliceStation01_SND_C_debugVoStopRaping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B06_SND_ElectrocutionComplete
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B06_SND_ElectrocutionComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B06_SND_ElectrocutionComplete");
		
		APoliceStation01_SND_C_PST02B06_SND_ElectrocutionComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.BndEvt__PoliceStation-01_SND_RBPlayerTriggerVolume_SND_CoylePowerOff_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation01_SND_C::BndEvt__PoliceStation01_SND_RBPlayerTriggerVolume_SND_CoylePowerOff_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.BndEvt__PoliceStation-01_SND_RBPlayerTriggerVolume_SND_CoylePowerOff_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		APoliceStation01_SND_C_BndEvt__PoliceStation01_SND_RBPlayerTriggerVolume_SND_CoylePowerOff_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicBasementStart
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::debugMusicBasementStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicBasementStart");
		
		APoliceStation01_SND_C_debugMusicBasementStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_SnitchInElectrocutionDevice
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B04_SND_SnitchInElectrocutionDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_SnitchInElectrocutionDevice");
		
		APoliceStation01_SND_C_PST02B04_SND_SnitchInElectrocutionDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_CoyleRespawn
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B04_SND_CoyleRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_CoyleRespawn");
		
		APoliceStation01_SND_C_PST02B04_SND_CoyleRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PathOfGlory03
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B04_SND_PathOfGlory03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PathOfGlory03");
		
		APoliceStation01_SND_C_PST02B04_SND_PathOfGlory03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PathOfGlory02
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B04_SND_PathOfGlory02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PathOfGlory02");
		
		APoliceStation01_SND_C_PST02B04_SND_PathOfGlory02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PathOfGlory01
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B04_SND_PathOfGlory01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PathOfGlory01");
		
		APoliceStation01_SND_C_PST02B04_SND_PathOfGlory01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B03_SND_PlayerEnterSnitchCell
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B03_SND_PlayerEnterSnitchCell()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B03_SND_PlayerEnterSnitchCell");
		
		APoliceStation01_SND_C_PST02B03_SND_PlayerEnterSnitchCell_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PlayerEnterCellBlock
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B04_SND_PlayerEnterCellBlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PlayerEnterCellBlock");
		
		APoliceStation01_SND_C_PST02B04_SND_PlayerEnterCellBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B03_SND_PowerOn
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B03_SND_PowerOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B03_SND_PowerOn");
		
		APoliceStation01_SND_C_PST02B03_SND_PowerOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_PowerOff
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B01_SND_PowerOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_PowerOff");
		
		APoliceStation01_SND_C_PST02B01_SND_PowerOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.BndEvt__PoliceStation-01_SND_RBPlayerTriggerVolumeMusicBasement_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation01_SND_C::BndEvt__PoliceStation01_SND_RBPlayerTriggerVolumeMusicBasement_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.BndEvt__PoliceStation-01_SND_RBPlayerTriggerVolumeMusicBasement_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		APoliceStation01_SND_C_BndEvt__PoliceStation01_SND_RBPlayerTriggerVolumeMusicBasement_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_EnterElectrocutionRoom
	 * 		Flags  -> ()
	 */
	void APoliceStation01_SND_C::PST02B04_SND_EnterElectrocutionRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_EnterElectrocutionRoom");
		
		APoliceStation01_SND_C_PST02B04_SND_EnterElectrocutionRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation-01_SND.PoliceStation-01_SND_C.ExecuteUbergraph_PoliceStation-01_SND
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation01_SND_C::ExecuteUbergraph_PoliceStation01_SND(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation-01_SND.PoliceStation-01_SND_C.ExecuteUbergraph_PoliceStation-01_SND");
		
		APoliceStation01_SND_C_ExecuteUbergraph_PoliceStation01_SND_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoliceStation01_SND_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation01_SND_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_01_SND.PoliceStation-01_SND_C");
		return ptr;
	}

}


