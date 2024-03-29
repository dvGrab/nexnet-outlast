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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass RollingDoor_Base_BP.RollingDoor-Base_BP_C
	 * Size -> 0x032C (FullSize[0x07BC] - InheritedSize[0x0490])
	 */
	class ARollingDoor_Base_BP_C : public ARBTriggerableGate
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBSoundComponent*                                   RBSound_Door;                                            // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ShadowCaster;                                            // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             SoundDetectorPrevis_Front;                               // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBObjectiveActorComponent*                          RBObjectiveActor;                                        // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBDeadRepulsionBoxComponent*                        RBDeadRepulsionBox;                                      // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBTutorialZoneComponent*                            RBTutorialZone;                                          // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BlockedGateMesh;                                         // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       CartOverlapCollision;                                    // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorClearanceCollisionBoxComponent*             SwitchClearance_Back;                                    // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorClearanceCollisionBoxComponent*             SwitchClearance_Front;                                   // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             TimerCountdownPrevis_Back;                               // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             TimerCountdownPrevis_Front;                              // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             ElectricalSwitchPrevis_Back;                             // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             ElectricalSwitchPrevis_Front;                            // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             LightSelectorPrevis_Back;                                // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             LightSelectorPrevis_Front;                               // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             ToasterDetectorPrevis_Front;                             // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             PassagesCounterPrevis_Back;                              // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             PassagesCounterPrevis_Front;                             // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_Front;                                           // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_Back;                                            // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBPlayerTriggerComponent*                           RBPlayerTrigger_Back;                                    // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBPlayerTriggerComponent*                           RBPlayerTrigger_Front;                                   // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBBoxNavMeshBlockingComponent*                      RBBoxNavMeshBlocking;                                    // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBNPCInterestPointComponent*                        RBNPCInterestPoint;                                      // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorFrame;                                               // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MainStaticMesh;                                          // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DestinationStaticMesh;                                   // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationTimeline_BlockNavMesh_E486C3F045836D4EE7E33AAB5B347A98; // 0x0580(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         AnimationTimeline__Direction_E486C3F045836D4EE7E33AAB5B347A98; // 0x0584(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0PN5[0x3];                                   // 0x0585(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  AnimationTimeline;                                       // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          BaseTransform;                                           // 0x0590(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          DestinationTransform;                                    // 0x05C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AnimationDurationSeconds;                                // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ProgressiveMovement;                                     // 0x05F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_43Z6[0x3];                                   // 0x05F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       TriggeredSequenceStartedAKEvent;                         // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       TriggeredSequenceStoppedAKEvent;                         // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       UntriggerSequenceStartedAKEvent;                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       UntriggerSequenceStoppedAKEvent;                         // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             AnimationCompletedForward;                               // 0x0618(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             AnimationCompletedBackward;                              // 0x0628(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bSoundPassthrough;                                       // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSoundConnector;                                         // 0x0639(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_55VK[0x2];                                   // 0x063A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SoundConnectorDimension;                                 // 0x063C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V76H[0x4];                                   // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   DestinationMaterial;                                     // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  MainMaterial;                                            // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInitialized;                                            // 0x0658(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ERollingDoorTypes                                          DoorSkeletalMesh;                                        // 0x0659(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_44VB[0x2];                                   // 0x065A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SoundConnectorLocation;                                  // 0x065C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldBeIgnoredForLot;                                  // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M0T6[0x3];                                   // 0x0669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumTriggerTime;                                      // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AdditionnalRandomTriggerTime;                            // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    iCurrentGateState;                                       // 0x0674(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UObject*>                                     PlayersInFrontTrigger;                                   // 0x0678(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance
		TArray<class UObject*>                                     PlayersInBackTrigger;                                    // 0x0688(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance
		class ARBPlayer*                                           Player;                                                  // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    amountOfPassagesAllowed;                                 // 0x06A0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    currentAmountOfPassages;                                 // 0x06A4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFlipCounter_BP_C*                                   passagesCounter_Front;                                   // 0x06A8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class AFlipCounter_BP_C*                                   passagesCounter_Back;                                    // 0x06B0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bDelayStarted;                                           // 0x06B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BJLE[0x7];                                   // 0x06B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AToasterDetector__BP_C*                              ToasterDetector_Front;                                   // 0x06C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		struct FAlertedStateActions                                ToasterAlertedStateActions;                              // 0x06C8(0x0020) Edit, BlueprintVisible, Net
		float                                                      InitialAnimationDurationSeconds;                         // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2MCF[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class A4LightSelector_BP_C*                                LightSelectorFront;                                      // 0x06F0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class A4LightSelector_BP_C*                                LightSelectorBack;                                       // 0x06F8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class AElectricalSwitch_RollingdoorVariator__BP_C*         ElectricalSwitch_Front;                                  // 0x0700(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class AElectricalSwitch_RollingdoorVariator__BP_C*         ElectricalSwitch_Back;                                   // 0x0708(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasSwitchInFront;                                       // 0x0710(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHasSwitchInBack;                                        // 0x0711(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JA23[0x2];                                   // 0x0712(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             cablePositionOnGate;                                     // 0x0714(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightSelectorState;                                      // 0x0720(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NZMH[0x4];                                   // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATimerCountdownRollingDoorVariator__BP_C*            TimerCountdown_Front;                                    // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATimerCountdownRollingDoorVariator__BP_C*            TimerCountdown_Back;                                     // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        lightsColor;                                             // 0x0738(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnlockableTime;                                          // 0x0748(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDoingUnlockSequence;                                   // 0x074C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5JKM[0x3];                                   // 0x074D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RailUnlockableTime;                                      // 0x0750(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_66U2[0x4];                                   // 0x0754(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARBDoor*                                             ReplacedDoor;                                            // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTutorialTextData                                   Item;                                                    // 0x0760(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTutorialTextData                                   Struct_Ref;                                              // 0x0780(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bCanUseBlockedMesh;                                      // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CloseInsteadOfOpen;                                      // 0x07A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VT22[0x2];                                   // 0x07A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      currentDelay;                                            // 0x07A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartingState;                                           // 0x07A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B40Y[0x4];                                   // 0x07AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASoundDetector_BP_C*                                 SoundDetector_Front;                                     // 0x07B0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		float                                                      SoundDetectorBack_Distance;                              // 0x07B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetShadowMode(bool UseRealDoorShadow);
		void OnRep_SoundDetector_Front();
		void SetCollisions();
		void SetSoundConnectors();
		void SetGateAnimations();
		void SetGateVisuals();
		void Set_Current_Delay();
		void GetMeshOffset(struct FVector* NewParam);
		void SetTutorials();
		void GetElectricalSwitchTransform(bool bIsFront, struct FTransform* OutTransform);
		void SetUnlockTimersFrozen(bool Value);
		void SetUnlockTimersEnabled(bool Enabled);
		void Get_Unlockable_Duration(float* duration);
		void StartUnlockTimers();
		void ResetUnlockSwitchCompletion();
		void UpdateUnlockSwitchInteractivity();
		void OnRep_LightSelectorState();
		void UpdateInteractiveSwitch(class AElectricalSwitch_RollingdoorVariator__BP_C* Instigator, class AElectricalSwitch_RollingdoorVariator__BP_C* Target);
		void OnRep_ElectricalSwitch_Back();
		void OnRep_ElectricalSwitch_Front();
		void OnRep_LightSelectorBack();
		void OnRep_LightSelectorFront();
		void OnRep_AnimationDurationSeconds();
		void OnRep_ToasterDetector_Front();
		void OnRep_PassagesCounter_Back();
		void OnRep_PassagesCounter_Front();
		void InitVariatorType();
		void ClearVariatorTypes();
		void IsOpen(bool* IsOpen);
		void Initialize();
		void TryRefreshSoundConnector();
		void OnTimelineUpdate(float ratio);
		void UserConstructionScript();
		void AnimationTimeline__FinishedFunc();
		void AnimationTimeline__UpdateFunc();
		void AnimationTimeline__AllowNavMesh__EventFunc();
		void AnimationTimeline__NewTrack_0__EventFunc();
		void ReceiveBeginPlay();
		void Event_OnOperatableProgressChanged(class UObject* operatable, float oldProgress, float currentProgress, bool bSnap);
		void ResetDoor();
		void Event_SnapToState();
		void Event_OnTriggerSequenceStarted();
		void Event_OnTriggered();
		void Event_OnUntriggered();
		void Event_OnUntriggerSequenceStarted();
		void Event_OnResetStage();
		void BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player);
		void BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_3_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player);
		void BndEvt__RBPlayerTrigger_Front_K2Node_ComponentBoundEvent_4_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player);
		void BndEvt__RBPlayerTrigger_Back_K2Node_ComponentBoundEvent_5_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player);
		void RandomTimedOpenClosed();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void StartDelay();
		void Event_OnCurrentVariatorTypeChanged();
		void OnInteractorChange();
		void BindSwitchEvents(class AElectricalSwitch_RollingdoorVariator__BP_C* SWITCH);
		void OnUnlockCompleted(bool bIsOn, class ARBOperatable* operatable);
		void Event_OnVariatorLogicEnabledChanged();
		void OnReplacedDoor(class ARBDoor* door);
		void Event_OnBlockableStateChanged();
		void Test();
		void newtimeTest(float NewTime);
		void Sound_Detected(EPlayerSoundDetectionState oldState, EPlayerSoundDetectionState newState);
		void ExecuteUbergraph_RollingDoor_Base_BP(int32_t EntryPoint);
		void AnimationCompletedBackward__DelegateSignature();
		void AnimationCompletedForward__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
