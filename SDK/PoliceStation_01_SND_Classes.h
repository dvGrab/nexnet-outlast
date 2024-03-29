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
	 * BlueprintGeneratedClass PoliceStation_01_SND.PoliceStation-01_SND_C
	 * Size -> 0x00E8 (FullSize[0x0340] - InheritedSize[0x0258])
	 */
	class APoliceStation01_SND_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class AElectrocutionSwitch01_BP_C*>                 ElectrocutionSwitches;                                   // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      WitnessScreamingLevel;                                   // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WNLA[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BasementSoundVolumes[0x10];                              // 0x0278(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FSoundTriggerEvent                                  QuietStateEvents;                                        // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCoyleTalkPowerShutDown;                                // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SR2P[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARBAmbientSound*                                     SFX_Door_Rolling_large_ControlRoom_Open01_2_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientSound*                                     SFX_Objective_ExecutionMachine_Lights01_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorWitness_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntDickoff_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntRapist_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntRapistVictim_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntBloodPaint_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorWitnessGate_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientSound*                                     SFX_PrisonCell_NoSiren_Open_3_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientSound*                                     SFX_PrisonCell_NoSiren_Open_7_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientSound*                                     SFX_PrisonCell_NoSiren_Open_9_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientSound*                                     SFX_PrisonCell_NoSiren_Open_5_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x02F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientSound*                                     SFX_PrisonCell_Open_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntAsshole_0_ExecuteUbergraph_PoliceStation01_SND_RefProperty; // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorWitness_EdGraph_3_RefProperty;        // 0x0310(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntAsshole_0_EdGraph_4_RefProperty; // 0x0318(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntBloodPaint_EdGraph_4_RefProperty; // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntRapist_EdGraph_4_RefProperty;    // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntDickoff_EdGraph_4_RefProperty;   // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBNetworkSoundActor*                                RBNetworkSoundActorGruntRapistVictim_EdGraph_4_RefProperty; // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddOrRemoveBasementState(bool Remove);
		void PlaySE_Grunts();
		void UpdateWitnessScreamLoop();
		void SetSnitchBreathIntensity(float RTPC_Snitch_Breath_Intensity);
		void PlayVoOnCoyle(class UAkAudioEvent* akEvent, EVOPriority VOPriority);
		void PlayVoOnSnitch(class UAkAudioEvent* akEvent, EVOPriority VOPriority);
		void PST02B01_SND_JailDoorOpen();
		void PST02B01_SND_ElectricRoomLightOn();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void PST02B06_SND_ElectrocutionStart();
		void Event_OnResetStage();
		void PST02SE_SND_StopDickOffSFX();
		void PST02SE_SND_StopAssHoleSFX();
		void PST02SE_SND_StopBloodPaintSFX();
		void PST02SE_SND_StopRapistSFX();
		void StopSEGrunts();
		void PST02B01_SND_ControlRoomButtonPress();
		void PST02B02_SND_SpawnCoyle();
		void ClosePrisonCells();
		void PST02B01_SND_CloseAllCellDoors();
		void debugMusicSnitchStart();
		void DebugMusicSnitchStop();
		void DebugMusicFinaleStart();
		void debugMusicFinaleStop();
		void debugMusicBasementStop();
		void PST02B01_SND_StartingSetup();
		void PST02B01_SND_PowerShutDown();
		void BndEvt__PoliceStation01_SND_RBPlayerTriggerVolume_AmbientCellVOChange_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void debugVoStopRaping();
		void PST02B06_SND_ElectrocutionComplete();
		void BndEvt__PoliceStation01_SND_RBPlayerTriggerVolume_SND_CoylePowerOff_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void debugMusicBasementStart();
		void PST02B04_SND_SnitchInElectrocutionDevice();
		void PST02B04_SND_CoyleRespawn();
		void PST02B04_SND_PathOfGlory03();
		void PST02B04_SND_PathOfGlory02();
		void PST02B04_SND_PathOfGlory01();
		void PST02B03_SND_PlayerEnterSnitchCell();
		void PST02B04_SND_PlayerEnterCellBlock();
		void PST02B03_SND_PowerOn();
		void PST02B01_SND_PowerOff();
		void BndEvt__PoliceStation01_SND_RBPlayerTriggerVolumeMusicBasement_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void PST02B04_SND_EnterElectrocutionRoom();
		void ExecuteUbergraph_PoliceStation01_SND(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
