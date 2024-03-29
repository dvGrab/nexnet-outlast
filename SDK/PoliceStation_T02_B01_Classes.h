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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PoliceStation_T02_B01.PoliceStation_T02_B01_C
	 * Size -> 0x0690 (FullSize[0x08E8] - InheritedSize[0x0258])
	 */
	class APoliceStation_T02_B01_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Timeline_0_NewTrack_0_16CCAEBE4E703E662D0A0284F7553F0A;  // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_16CCAEBE4E703E662D0A0284F7553F0A;  // 0x0264(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7J0F[0x3];                                   // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsCellLightsBlinking;                                   // 0x0270(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       isCellGatesOpen_Local;                                   // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y2FC[0x6];                                   // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              JailMurkoffGate_Left1[0x28];                             // 0x0278(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              JailMurkoffGate_Right1[0x28];                            // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      emergencyLightDelay_Local;                               // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WVVA[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EmergencyLight01[0x28];                                  // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              JailMurkoffGate_Corridor1[0x28];                         // 0x02F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Light_ControlRoomTV[0x28];                               // 0x0320(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      PrisonCorridorGatesDelay_Local;                          // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LOPI[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SpotLight_Coyle[0x28];                                   // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              JailMurkoffGate_Left2[0x28];                             // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              JailMurkoffGate_Right2[0x28];                            // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              JailMurkoffGate_Corridor2[0x28];                         // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class ARBLight_BP_C*>                               ExecutionLighting;                                       // 0x03F0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              Light_JailBlockTv[0x28];                                 // 0x0400(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Shutter_ControlRoom[0x28];                               // 0x0428(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MCloset_PatrolCorridor[0x28];                            // 0x0450(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ControlRoom_SAS[0x28];                                   // 0x0478(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EmergencyLight02[0x28];                                  // 0x04A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EmergencyLight03[0x28];                                  // 0x04C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EmergencyLight04[0x28];                                  // 0x04F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EmergencyLight04b[0x28];                                 // 0x0518(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EmergencyLight05[0x28];                                  // 0x0540(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EmergencyLight06[0x28];                                  // 0x0568(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EmergencyLight07[0x28];                                  // 0x0590(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EmergencyLight08[0x28];                                  // 0x05B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bIsLightSetup1Active;                                    // 0x05E0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bIsLightSetup2Active;                                    // 0x05E1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_0QH7[0x6];                                   // 0x05E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              B01LightCubeMaps[0x10];                                  // 0x05E8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bIsExecRoomLightActive;                                  // 0x05F8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_MSLC[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CellDoors[0x10];                                         // 0x0600(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bIsCellGatesOpen;                                        // 0x0610(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_LMU0[0x7];                                   // 0x0611(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ARBLight_BP_C*>                               B01_RegularLights;                                       // 0x0618(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ARBLight_BP_C*>                               B01_EmergencyLights;                                     // 0x0628(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ANarrativeScreenBase_BP_C*>                   B01_TVsControlRoom;                                      // 0x0638(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ANarrativeScreenBase_BP_C*>                   B01_TVsJailCorridor;                                     // 0x0648(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ARBLight_BP_C*>                               B01_CellIndicators;                                      // 0x0658(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              SpotLight_ShutterControlRoom[0x28];                      // 0x0668(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MCloset_Jail[0x28];                                      // 0x0690(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Snitch_CellLightIndicator[0x28];                         // 0x06B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Light_IntroSASTV_01[0x28];                               // 0x06E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class ANarrativeScreenBase_BP_C*>                   B01_TVsIntroSAS;                                         // 0x0708(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              Light_SnitchTV[0x10];                                    // 0x0718(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Light_JailBlockTv_3[0x28];                               // 0x0728(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Execution_Light_ON[0x28];                                // 0x0750(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Execution_ON_Indicator[0x28];                            // 0x0778(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Execution_Standby_Indicator[0x28];                       // 0x07A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FHUDTutorialTextData                                Text_CoopHint;                                           // 0x07C8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              dummy;                                                   // 0x0800(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5NVC[0x7];                                   // 0x0801(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Connector_JailMurkoffGate_Corridor[0x28];                // 0x0808(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Connector_JailMurkoffGate_Left[0x28];                    // 0x0830(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Connector_JailMurkoffGate_Right[0x28];                   // 0x0858(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume_ReachPolice_2_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x0880(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume_ReachPolice_1_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x0888(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGoto_ObjCoord_BP_C*                                 PS_T02_B01_ObjCoord_00a_GotoPolice_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x0890(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APushCart_ObjCoord_BP_C*                             PS_T02_B01_ObjCoord_04_PushCart_Snitch_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x0898(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_FX_Trial_01_PS_01_SparkBurst_C*                  BP_FX_Trial_01_PS_01_SparkBurst_2_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x08A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_FX_Trial_01_PS_01_SparkBurst_C*                  BP_FX_Trial_01_PS_01_SparkBurst2_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x08A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoundLinkedToTv_BP_C*                               SoundLinkedToTv_BP_2_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x08B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoundLinkedToTv_BP_C*                               SoundLinkedToTv_BP2_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x08B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBDarknessVolume*                                   RBDarknessVolume_Execution_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x08C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBlockingVolume*                                   RBBlockingVolume_SecurityShuttle_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x08C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume_B01_PingTuto_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x08D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AtvChannel_BP_C*                                     tvChannel_TortureSnitch_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x08D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAvellanos01_BP_C*                                   Avellanos01_BP_2_ExecuteUbergraph_PoliceStation_T02_B01_RefProperty; // 0x08E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ToggleTvStates(bool State, TArray<class ANarrativeScreenBase_BP_C*>* TVGroup, TArray<class ARBLight_BP_C*>* TVLights);
		void OnRep_bIsCellLightsBlinking();
		void OnRep_bIsCellGatesOpen();
		void OnRep_bIsExecRoomLightActive();
		void GetAllArraysfromTags();
		void OnRep_bIsLightSetup2Active();
		void OnRep_bIsLightSetup1Active();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void BndEvt__PoliceStation_T02_B01_Simple_ObjCoord_BP_2_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP);
		void UpdateBlinkingLights();
		void Event_OnResetStage();
		void PST02B01_UpdateLightSetup1Activation();
		void debug_setLightPowerOn();
		void B01_SetBlinkingLight_On();
		void B01_SetBlinkingLight_Off();
		void B01_UpdateCellDoorsState();
		void manageCorridorJailGates(bool isGateOpen);
		void B01_UpdateExecRoomLightSetupActivation();
		void ElectricTension();
		void PST02B01_TurnOffControlRoomSurveillanceTV();
		void BndEvt__PoliceStation_T02_B01_PS_T02_B01_ObjCoord_02_Delay_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP);
		void debug_setLightPowerOff();
		void setLightSetup1_On();
		void setLightSetup1_Off();
		void setLightSetup2_On();
		void setLightSetup2_Off();
		void PST02B01_UpdateLightSetup2Activation();
		void B01_SetExecRoomLight_On();
		void B01_SetExecRoomLight_Off();
		void B01_SetCellGates_Open();
		void B01_SetCellGates_Close();
		void OnStageReady(const struct FRBStageID& StageID, const struct FRBMissionID& MissionID);
		void B01_SetControlRoomObjTV_On();
		void B01_SetControlRoomObjTV_Off();
		void B01_SetJailCorridorObjTV_On();
		void B01_SetJailCorridorObjTV_Off();
		void CloseLeftJailCellDoor();
		void RemoveJailGatesTutorial();
		void B01_CoyleCutsceneLightManagement(bool isLightActive);
		void BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_2_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_ReachPolice_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void B01_StartTVSnitch();
		void BndEvt__PoliceStation_T02_B01_RBGameplayTriggerVolume_PushSnitch_PowerDown_K2Node_ActorBoundEvent_6_OnGameplayTriggerEvent__DelegateSignature(class URBGameplayTriggerComponent* Trigger);
		void B01_ToogleSASTV(bool SetOn);
		void B01_OpenExecutionRoomLight_Remote();
		void B01_ToogleSnitchTVLights(bool SetOn);
		void BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_SASTVs_K2Node_ActorBoundEvent_5_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void B01_ToggleSASTV_SoundLinks();
		void BndEvt__PoliceStation_T02_B01_RBPlayerTriggerVolume_B01_PingTuto_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player);
		void B01_IntroAvellanosExit();
		void B01_ToggleSASTV_Off_SoundLinks();
		void ExecuteUbergraph_PoliceStation_T02_B01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
