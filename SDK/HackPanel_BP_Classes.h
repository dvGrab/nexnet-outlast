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
	 * BlueprintGeneratedClass HackPanel_BP.HackPanel_BP_C
	 * Size -> 0x0192 (FullSize[0x03E2] - InheritedSize[0x0250])
	 */
	class AHackPanel_BP_C : public ARBActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            FlashSparks_PS;                                          // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       BoundBox;                                                // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_HurtPtc;                                             // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActiveSkillVisionComponent*                       LockFrameActiveSkillVision;                              // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                NumberRoll__BP;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHackPanelComponent_BP_C*                            RBHackPanel;                                             // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PadLock;                                                 // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Anchor;                                                  // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Light;                                                   // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActiveSkillVisionComponent*                       RBActiveSkillVision;                                     // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Light2;                                                  // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Light3;                                                  // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Light4;                                                  // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Light5;                                                  // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Light6;                                                  // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PsychosisGas_PS;                                         // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PadLockBar;                                              // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Needle;                                                  // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     NeedlePivot;                                             // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   RBSound;                                                 // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBPlayerCameraLocationComponent*                    Camera;                                                  // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBOutlineComponent*                                 RBOutline;                                               // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Unlocking_UnlockingBar_3669914F43EBD6D8B444ADAD39CA89B2; // 0x0318(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Unlocking__Direction_3669914F43EBD6D8B444ADAD39CA89B2;   // 0x031C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WCRP[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Unlocking;                                               // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ButtonReleaseSoundTimestamp;                             // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PRM9[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        QuadrantMeshes;                                          // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    NumberOfSlice;                                           // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BotDistractorMaxDistance;                                // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlarmDuration;                                           // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_45JC[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConfigurableBool                                   ShouldTriggerAlarm;                                      // 0x0350(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UStaticMeshComponent*>                        Lights;                                                  // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMaterialInstanceDynamic*>                    LightsMaterial;                                          // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bPauseRefresh;                                           // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SFD0[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANumberRoll__BP_C*                                   NumberRoll;                                              // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPhysicalized;                                           // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasBeenUnlocked;                                        // 0x03E1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool GetPingItemName(class FText* outName);
		bool GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled);
		bool GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData);
		bool GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation);
		int32_t GetTripLeft(bool bUseDefault);
		void RefreshTripLeft(bool bUseDefault);
		void ResetToDefault();
		class FText GetTripLeftString(bool bUseDefault);
		void RefreshStageLeft(bool bUseDefault);
		void ButtonSound(class URBPasscodeButtonComponent* Button);
		void UserConstructionScript();
		void Unlocking__FinishedFunc();
		void Unlocking__UpdateFunc();
		void Unlocking__Unlocked__EventFunc();
		void ReceiveTick(float DeltaSeconds);
		void RefreshQuadrantMaterials();
		void ReceiveBeginPlay();
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_12_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_14_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_18_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_20_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_22_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_24_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_26_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_28_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_30_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_32_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void Physicalize(const struct FVector& AdditionalImpulse);
		void Event_OnResetStage();
		void BndEvt__RBHackPanel_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void BndEvt__HackPanel_BP_RBActiveSkillVision_K2Node_ComponentBoundEvent_3_ActiveSkillChanged__DelegateSignature(bool Enabled);
		void BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void ExecuteUbergraph_HackPanel_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
