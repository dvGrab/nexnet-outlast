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
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.ToggleTvStates
	 */
	struct APoliceStation_T02_B01_C_ToggleTvStates_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8M6O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ANarrativeScreenBase_BP_C*>                   TVGroup;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class ARBLight_BP_C*>                               TVLights;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsCellLightsBlinking
	 */
	struct APoliceStation_T02_B01_C_OnRep_bIsCellLightsBlinking_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsCellGatesOpen
	 */
	struct APoliceStation_T02_B01_C_OnRep_bIsCellGatesOpen_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsExecRoomLightActive
	 */
	struct APoliceStation_T02_B01_C_OnRep_bIsExecRoomLightActive_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Get All Arrays from Tags
	 */
	struct APoliceStation_T02_B01_C_GetAllArraysfromTags_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsLightSetup2Active
	 */
	struct APoliceStation_T02_B01_C_OnRep_bIsLightSetup2Active_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnRep_bIsLightSetup1Active
	 */
	struct APoliceStation_T02_B01_C_OnRep_bIsLightSetup1Active_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Timeline_0__FinishedFunc
	 */
	struct APoliceStation_T02_B01_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Timeline_0__UpdateFunc
	 */
	struct APoliceStation_T02_B01_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_Simple_ObjCoord_BP_2_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorCompleted__DelegateSignature
	 */
	struct APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_Simple_ObjCoord_BP_2_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       bIsJIP;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.UpdateBlinkingLights
	 */
	struct APoliceStation_T02_B01_C_UpdateBlinkingLights_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.Event_OnResetStage
	 */
	struct APoliceStation_T02_B01_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.PST02B01_UpdateLightSetup1Activation
	 */
	struct APoliceStation_T02_B01_C_PST02B01_UpdateLightSetup1Activation_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.debug_setLightPowerOn
	 */
	struct APoliceStation_T02_B01_C_debug_setLightPowerOn_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetBlinkingLight_On
	 */
	struct APoliceStation_T02_B01_C_B01_SetBlinkingLight_On_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetBlinkingLight_Off
	 */
	struct APoliceStation_T02_B01_C_B01_SetBlinkingLight_Off_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_UpdateCellDoorsState
	 */
	struct APoliceStation_T02_B01_C_B01_UpdateCellDoorsState_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.manageCorridorJailGates
	 */
	struct APoliceStation_T02_B01_C_manageCorridorJailGates_Params
	{
	public:
		bool                                                       isGateOpen;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_UpdateExecRoomLightSetupActivation
	 */
	struct APoliceStation_T02_B01_C_B01_UpdateExecRoomLightSetupActivation_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.ElectricTension
	 */
	struct APoliceStation_T02_B01_C_ElectricTension_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.PST02B01_TurnOffControlRoomSurveillanceTV
	 */
	struct APoliceStation_T02_B01_C_PST02B01_TurnOffControlRoomSurveillanceTV_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_PS_T02_B01_ObjCoord_02_Delay_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorCompleted__DelegateSignature
	 */
	struct APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_PS_T02_B01_ObjCoord_02_Delay_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       bIsJIP;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.debug_setLightPowerOff
	 */
	struct APoliceStation_T02_B01_C_debug_setLightPowerOff_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup1_On
	 */
	struct APoliceStation_T02_B01_C_setLightSetup1_On_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup1_Off
	 */
	struct APoliceStation_T02_B01_C_setLightSetup1_Off_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup2_On
	 */
	struct APoliceStation_T02_B01_C_setLightSetup2_On_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.setLightSetup2_Off
	 */
	struct APoliceStation_T02_B01_C_setLightSetup2_Off_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.PST02B01_UpdateLightSetup2Activation
	 */
	struct APoliceStation_T02_B01_C_PST02B01_UpdateLightSetup2Activation_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetExecRoomLight_On
	 */
	struct APoliceStation_T02_B01_C_B01_SetExecRoomLight_On_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetExecRoomLight_Off
	 */
	struct APoliceStation_T02_B01_C_B01_SetExecRoomLight_Off_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetCellGates_Open
	 */
	struct APoliceStation_T02_B01_C_B01_SetCellGates_Open_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetCellGates_Close
	 */
	struct APoliceStation_T02_B01_C_B01_SetCellGates_Close_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.OnStageReady
	 */
	struct APoliceStation_T02_B01_C_OnStageReady_Params
	{
	public:
		struct FRBStageID                                          StageID;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FRBMissionID                                        MissionID;                                               // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetControlRoomObjTV_On
	 */
	struct APoliceStation_T02_B01_C_B01_SetControlRoomObjTV_On_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetControlRoomObjTV_Off
	 */
	struct APoliceStation_T02_B01_C_B01_SetControlRoomObjTV_Off_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetJailCorridorObjTV_On
	 */
	struct APoliceStation_T02_B01_C_B01_SetJailCorridorObjTV_On_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_SetJailCorridorObjTV_Off
	 */
	struct APoliceStation_T02_B01_C_B01_SetJailCorridorObjTV_Off_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.CloseLeftJailCellDoor
	 */
	struct APoliceStation_T02_B01_C_CloseLeftJailCellDoor_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.RemoveJailGatesTutorial
	 */
	struct APoliceStation_T02_B01_C_RemoveJailGatesTutorial_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_CoyleCutsceneLightManagement
	 */
	struct APoliceStation_T02_B01_C_B01_CoyleCutsceneLightManagement_Params
	{
	public:
		bool                                                       isLightActive;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_2_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_2_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_StartTVSnitch
	 */
	struct APoliceStation_T02_B01_C_B01_StartTVSnitch_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBGameplayTriggerVolume_PushSnitch_PowerDown_K2Node_ActorBoundEvent_6_OnGameplayTriggerEvent__DelegateSignature
	 */
	struct APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBGameplayTriggerVolume_PushSnitch_PowerDown_K2Node_ActorBoundEvent_6_OnGameplayTriggerEvent__DelegateSignature_Params
	{
	public:
		class URBGameplayTriggerComponent*                         Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToogleSASTV
	 */
	struct APoliceStation_T02_B01_C_B01_ToogleSASTV_Params
	{
	public:
		bool                                                       SetOn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_OpenExecutionRoomLight_Remote
	 */
	struct APoliceStation_T02_B01_C_B01_OpenExecutionRoomLight_Remote_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToogleSnitchTVLights
	 */
	struct APoliceStation_T02_B01_C_B01_ToogleSnitchTVLights_Params
	{
	public:
		bool                                                       SetOn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_SASTVs_K2Node_ActorBoundEvent_5_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_SASTVs_K2Node_ActorBoundEvent_5_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToggleSASTV_SoundLinks
	 */
	struct APoliceStation_T02_B01_C_B01_ToggleSASTV_SoundLinks_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_PingTuto_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 */
	struct APoliceStation_T02_B01_C_BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_PingTuto_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_IntroAvellanosExit
	 */
	struct APoliceStation_T02_B01_C_B01_IntroAvellanosExit_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.B01_ToggleSASTV_Off_SoundLinks
	 */
	struct APoliceStation_T02_B01_C_B01_ToggleSASTV_Off_SoundLinks_Params
	{	};

	/**
	 * Function PoliceStation_T02_B01.PoliceStation_T02_B01_C.ExecuteUbergraph_PoliceStation_T02_B01
	 */
	struct APoliceStation_T02_B01_C_ExecuteUbergraph_PoliceStation_T02_B01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
