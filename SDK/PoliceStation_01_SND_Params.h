#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.AddOrRemoveBasementState
	 */
	struct APoliceStation01_SND_C_AddOrRemoveBasementState_Params
	{
	public:
		bool                                                       Remove;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5M29[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PlaySE_Grunts
	 */
	struct APoliceStation01_SND_C_PlaySE_Grunts_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.UpdateWitnessScreamLoop
	 */
	struct APoliceStation01_SND_C_UpdateWitnessScreamLoop_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.SetSnitchBreathIntensity
	 */
	struct APoliceStation01_SND_C_SetSnitchBreathIntensity_Params
	{
	public:
		float                                                      RTPC_Snitch_Breath_Intensity;                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PlayVoOnCoyle
	 */
	struct APoliceStation01_SND_C_PlayVoOnCoyle_Params
	{
	public:
		class UAkAudioEvent*                                       akEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EVOPriority                                                VOPriority;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4FJ4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PlayVoOnSnitch
	 */
	struct APoliceStation01_SND_C_PlayVoOnSnitch_Params
	{
	public:
		class UAkAudioEvent*                                       akEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EVOPriority                                                VOPriority;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G3RG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_JailDoorOpen
	 */
	struct APoliceStation01_SND_C_PST02B01_SND_JailDoorOpen_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_ElectricRoomLightOn
	 */
	struct APoliceStation01_SND_C_PST02B01_SND_ElectricRoomLightOn_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.ReceiveTick
	 */
	struct APoliceStation01_SND_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.ReceiveBeginPlay
	 */
	struct APoliceStation01_SND_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B06_SND_ElectrocutionStart
	 */
	struct APoliceStation01_SND_C_PST02B06_SND_ElectrocutionStart_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.Event_OnResetStage
	 */
	struct APoliceStation01_SND_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopDickOffSFX
	 */
	struct APoliceStation01_SND_C_PST02SE_SND_StopDickOffSFX_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopAssHoleSFX
	 */
	struct APoliceStation01_SND_C_PST02SE_SND_StopAssHoleSFX_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopBloodPaintSFX
	 */
	struct APoliceStation01_SND_C_PST02SE_SND_StopBloodPaintSFX_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02SE_SND_StopRapistSFX
	 */
	struct APoliceStation01_SND_C_PST02SE_SND_StopRapistSFX_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.StopSEGrunts
	 */
	struct APoliceStation01_SND_C_StopSEGrunts_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_ControlRoomButtonPress
	 */
	struct APoliceStation01_SND_C_PST02B01_SND_ControlRoomButtonPress_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B02_SND_SpawnCoyle
	 */
	struct APoliceStation01_SND_C_PST02B02_SND_SpawnCoyle_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.ClosePrisonCells
	 */
	struct APoliceStation01_SND_C_ClosePrisonCells_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_CloseAllCellDoors
	 */
	struct APoliceStation01_SND_C_PST02B01_SND_CloseAllCellDoors_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicSnitchStart
	 */
	struct APoliceStation01_SND_C_debugMusicSnitchStart_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.DebugMusicSnitchStop
	 */
	struct APoliceStation01_SND_C_DebugMusicSnitchStop_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.DebugMusicFinaleStart
	 */
	struct APoliceStation01_SND_C_DebugMusicFinaleStart_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicFinaleStop
	 */
	struct APoliceStation01_SND_C_debugMusicFinaleStop_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicBasementStop
	 */
	struct APoliceStation01_SND_C_debugMusicBasementStop_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_StartingSetup
	 */
	struct APoliceStation01_SND_C_PST02B01_SND_StartingSetup_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_PowerShutDown
	 */
	struct APoliceStation01_SND_C_PST02B01_SND_PowerShutDown_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.BndEvt__PoliceStation-01_SND_RBPlayerTriggerVolume_AmbientCellVOChange_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct APoliceStation01_SND_C_BndEvt__PoliceStation01_SND_RBPlayerTriggerVolume_AmbientCellVOChange_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugVoStopRaping
	 */
	struct APoliceStation01_SND_C_debugVoStopRaping_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B06_SND_ElectrocutionComplete
	 */
	struct APoliceStation01_SND_C_PST02B06_SND_ElectrocutionComplete_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.BndEvt__PoliceStation-01_SND_RBPlayerTriggerVolume_SND_CoylePowerOff_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct APoliceStation01_SND_C_BndEvt__PoliceStation01_SND_RBPlayerTriggerVolume_SND_CoylePowerOff_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.debugMusicBasementStart
	 */
	struct APoliceStation01_SND_C_debugMusicBasementStart_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_SnitchInElectrocutionDevice
	 */
	struct APoliceStation01_SND_C_PST02B04_SND_SnitchInElectrocutionDevice_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_CoyleRespawn
	 */
	struct APoliceStation01_SND_C_PST02B04_SND_CoyleRespawn_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PathOfGlory03
	 */
	struct APoliceStation01_SND_C_PST02B04_SND_PathOfGlory03_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PathOfGlory02
	 */
	struct APoliceStation01_SND_C_PST02B04_SND_PathOfGlory02_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PathOfGlory01
	 */
	struct APoliceStation01_SND_C_PST02B04_SND_PathOfGlory01_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B03_SND_PlayerEnterSnitchCell
	 */
	struct APoliceStation01_SND_C_PST02B03_SND_PlayerEnterSnitchCell_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_PlayerEnterCellBlock
	 */
	struct APoliceStation01_SND_C_PST02B04_SND_PlayerEnterCellBlock_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B03_SND_PowerOn
	 */
	struct APoliceStation01_SND_C_PST02B03_SND_PowerOn_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B01_SND_PowerOff
	 */
	struct APoliceStation01_SND_C_PST02B01_SND_PowerOff_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.BndEvt__PoliceStation-01_SND_RBPlayerTriggerVolumeMusicBasement_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct APoliceStation01_SND_C_BndEvt__PoliceStation01_SND_RBPlayerTriggerVolumeMusicBasement_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.PST02B04_SND_EnterElectrocutionRoom
	 */
	struct APoliceStation01_SND_C_PST02B04_SND_EnterElectrocutionRoom_Params
	{	};

	/**
	 * Function PoliceStation-01_SND.PoliceStation-01_SND_C.ExecuteUbergraph_PoliceStation-01_SND
	 */
	struct APoliceStation01_SND_C_ExecuteUbergraph_PoliceStation01_SND_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
