#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
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
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetShadowMode
	 */
	struct ARollingDoor_Base_BP_C_SetShadowMode_Params
	{
	public:
		bool                                                       UseRealDoorShadow;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_SoundDetector_Front
	 */
	struct ARollingDoor_Base_BP_C_OnRep_SoundDetector_Front_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetCollisions
	 */
	struct ARollingDoor_Base_BP_C_SetCollisions_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetSoundConnectors
	 */
	struct ARollingDoor_Base_BP_C_SetSoundConnectors_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetGateAnimations
	 */
	struct ARollingDoor_Base_BP_C_SetGateAnimations_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetGateVisuals
	 */
	struct ARollingDoor_Base_BP_C_SetGateVisuals_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Set Current Delay
	 */
	struct ARollingDoor_Base_BP_C_Set_Current_Delay_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.GetMeshOffset
	 */
	struct ARollingDoor_Base_BP_C_GetMeshOffset_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetTutorials
	 */
	struct ARollingDoor_Base_BP_C_SetTutorials_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.GetElectricalSwitchTransform
	 */
	struct ARollingDoor_Base_BP_C_GetElectricalSwitchTransform_Params
	{
	public:
		bool                                                       bIsFront;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2QEM[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          OutTransform;                                            // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetUnlockTimersFrozen
	 */
	struct ARollingDoor_Base_BP_C_SetUnlockTimersFrozen_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.SetUnlockTimersEnabled
	 */
	struct ARollingDoor_Base_BP_C_SetUnlockTimersEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Get Unlockable Duration
	 */
	struct ARollingDoor_Base_BP_C_Get_Unlockable_Duration_Params
	{
	public:
		float                                                      duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.StartUnlockTimers
	 */
	struct ARollingDoor_Base_BP_C_StartUnlockTimers_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ResetUnlockSwitchCompletion
	 */
	struct ARollingDoor_Base_BP_C_ResetUnlockSwitchCompletion_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.UpdateUnlockSwitchInteractivity
	 */
	struct ARollingDoor_Base_BP_C_UpdateUnlockSwitchInteractivity_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_LightSelectorState
	 */
	struct ARollingDoor_Base_BP_C_OnRep_LightSelectorState_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.UpdateInteractiveSwitch
	 */
	struct ARollingDoor_Base_BP_C_UpdateInteractiveSwitch_Params
	{
	public:
		class AElectricalSwitch_RollingdoorVariator__BP_C*         Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AElectricalSwitch_RollingdoorVariator__BP_C*         Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_ElectricalSwitch_Back
	 */
	struct ARollingDoor_Base_BP_C_OnRep_ElectricalSwitch_Back_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_ElectricalSwitch_Front
	 */
	struct ARollingDoor_Base_BP_C_OnRep_ElectricalSwitch_Front_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_LightSelectorBack
	 */
	struct ARollingDoor_Base_BP_C_OnRep_LightSelectorBack_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_LightSelectorFront
	 */
	struct ARollingDoor_Base_BP_C_OnRep_LightSelectorFront_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_AnimationDurationSeconds
	 */
	struct ARollingDoor_Base_BP_C_OnRep_AnimationDurationSeconds_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_ToasterDetector_Front
	 */
	struct ARollingDoor_Base_BP_C_OnRep_ToasterDetector_Front_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_PassagesCounter_Back
	 */
	struct ARollingDoor_Base_BP_C_OnRep_PassagesCounter_Back_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnRep_PassagesCounter_Front
	 */
	struct ARollingDoor_Base_BP_C_OnRep_PassagesCounter_Front_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.InitVariatorType
	 */
	struct ARollingDoor_Base_BP_C_InitVariatorType_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ClearVariatorTypes
	 */
	struct ARollingDoor_Base_BP_C_ClearVariatorTypes_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.IsOpen
	 */
	struct ARollingDoor_Base_BP_C_IsOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Initialize
	 */
	struct ARollingDoor_Base_BP_C_Initialize_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.TryRefreshSoundConnector
	 */
	struct ARollingDoor_Base_BP_C_TryRefreshSoundConnector_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnTimelineUpdate
	 */
	struct ARollingDoor_Base_BP_C_OnTimelineUpdate_Params
	{
	public:
		float                                                      ratio;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.UserConstructionScript
	 */
	struct ARollingDoor_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__FinishedFunc
	 */
	struct ARollingDoor_Base_BP_C_AnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__UpdateFunc
	 */
	struct ARollingDoor_Base_BP_C_AnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__AllowNavMesh__EventFunc
	 */
	struct ARollingDoor_Base_BP_C_AnimationTimeline__AllowNavMesh__EventFunc_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationTimeline__NewTrack_0__EventFunc
	 */
	struct ARollingDoor_Base_BP_C_AnimationTimeline__NewTrack_0__EventFunc_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ReceiveBeginPlay
	 */
	struct ARollingDoor_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnOperatableProgressChanged
	 */
	struct ARollingDoor_Base_BP_C_Event_OnOperatableProgressChanged_Params
	{
	public:
		class UObject*                                             operatable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      oldProgress;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      currentProgress;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSnap;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ResetDoor
	 */
	struct ARollingDoor_Base_BP_C_ResetDoor_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_SnapToState
	 */
	struct ARollingDoor_Base_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnTriggerSequenceStarted
	 */
	struct ARollingDoor_Base_BP_C_Event_OnTriggerSequenceStarted_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnTriggered
	 */
	struct ARollingDoor_Base_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnUntriggered
	 */
	struct ARollingDoor_Base_BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnUntriggerSequenceStarted
	 */
	struct ARollingDoor_Base_BP_C_Event_OnUntriggerSequenceStarted_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnResetStage
	 */
	struct ARollingDoor_Base_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 */
	struct ARollingDoor_Base_BP_C_BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_3_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 */
	struct ARollingDoor_Base_BP_C_BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_3_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_4_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 */
	struct ARollingDoor_Base_BP_C_BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_4_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_5_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 */
	struct ARollingDoor_Base_BP_C_BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_5_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.RandomTimedOpenClosed
	 */
	struct ARollingDoor_Base_BP_C_RandomTimedOpenClosed_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ReceiveEndPlay
	 */
	struct ARollingDoor_Base_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.StartDelay
	 */
	struct ARollingDoor_Base_BP_C_StartDelay_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnCurrentVariatorTypeChanged
	 */
	struct ARollingDoor_Base_BP_C_Event_OnCurrentVariatorTypeChanged_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnInteractorChange
	 */
	struct ARollingDoor_Base_BP_C_OnInteractorChange_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.BindSwitchEvents
	 */
	struct ARollingDoor_Base_BP_C_BindSwitchEvents_Params
	{
	public:
		class AElectricalSwitch_RollingdoorVariator__BP_C*         SWITCH;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnUnlockCompleted
	 */
	struct ARollingDoor_Base_BP_C_OnUnlockCompleted_Params
	{
	public:
		bool                                                       bIsOn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MUCN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBOperatable*                                       operatable;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnVariatorLogicEnabledChanged
	 */
	struct ARollingDoor_Base_BP_C_Event_OnVariatorLogicEnabledChanged_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.OnReplacedDoor
	 */
	struct ARollingDoor_Base_BP_C_OnReplacedDoor_Params
	{
	public:
		class ARBDoor*                                             door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Event_OnBlockableStateChanged
	 */
	struct ARollingDoor_Base_BP_C_Event_OnBlockableStateChanged_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Test
	 */
	struct ARollingDoor_Base_BP_C_Test_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.newtimeTest
	 */
	struct ARollingDoor_Base_BP_C_newtimeTest_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.Sound Detected
	 */
	struct ARollingDoor_Base_BP_C_Sound_Detected_Params
	{
	public:
		EPlayerSoundDetectionState                                 oldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPlayerSoundDetectionState                                 newState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.ExecuteUbergraph_RollingDoor-Base_BP
	 */
	struct ARollingDoor_Base_BP_C_ExecuteUbergraph_RollingDoor_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationCompletedBackward__DelegateSignature
	 */
	struct ARollingDoor_Base_BP_C_AnimationCompletedBackward__DelegateSignature_Params
	{	};

	/**
	 * Function RollingDoor-Base_BP.RollingDoor-Base_BP_C.AnimationCompletedForward__DelegateSignature
	 */
	struct ARollingDoor_Base_BP_C_AnimationCompletedForward__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
