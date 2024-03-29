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
	 * BlueprintGeneratedClass Base_AcidBottle_BP.Base_AcidBottle_BP_C
	 * Size -> 0x0358 (FullSize[0x0CC0] - InheritedSize[0x0968])
	 */
	class ABase_AcidBottle_BP_C : public ABase_LargePickup_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0968(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Ngr_AcidSmoke_FP;                                        // 0x0970(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_AcidSmoke;                                           // 0x0978(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight;                                             // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              WaterMesh;                                               // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FX_DummyPosRef;                                          // 0x0990(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      FadeFakeLightTimeline_NewTrack_0_746F07B643B60233012091941408C2F8; // 0x0998(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeFakeLightTimeline__Direction_746F07B643B60233012091941408C2F8; // 0x099C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7WIU[0x3];                                   // 0x099D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeFakeLightTimeline;                                   // 0x09A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutLiquidTimeline_NewTrack_0_89AC79AB440115F37D771B8EF793FF40; // 0x09A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeOutLiquidTimeline__Direction_89AC79AB440115F37D771B8EF793FF40; // 0x09AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1MIM[0x3];                                   // 0x09AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeOutLiquidTimeline;                                   // 0x09B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Dither_DitherRatio_F500BB3D43F19472491EDBA18F1BD9CC;     // 0x09B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Dither__Direction_F500BB3D43F19472491EDBA18F1BD9CC;      // 0x09BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U0D3[0x3];                                   // 0x09BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Dither;                                                  // 0x09C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_2_B59AA5A74A822FEF6BCC23BB177C3F29;  // 0x09C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_1_B59AA5A74A822FEF6BCC23BB177C3F29;  // 0x09CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_B59AA5A74A822FEF6BCC23BB177C3F29;  // 0x09D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_B59AA5A74A822FEF6BCC23BB177C3F29;  // 0x09D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4P0Z[0x3];                                   // 0x09D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x09D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPawn*                                             LastHoldingPawn;                                         // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RunningSpillTimerHandle;                                 // 0x09E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FConfigurableFloat                                  SmallSpillRadius;                                        // 0x09F0(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FConfigurableFloat                                  LargeSpillRadius;                                        // 0x0AB8(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FConfigurableFloat                                  VeryLargeSpillRadius;                                    // 0x0B80(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      RunningSpillTimer;                                       // 0x0C48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RunningSpillFrequency;                                   // 0x0C4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SectionIndex;                                            // 0x0C50(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinLandingHeightForVeryLargeSpill;                       // 0x0C54(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmallSpillDamage;                                        // 0x0C58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LargeSpillDamage;                                        // 0x0C5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VeryLargeSpillDamage;                                    // 0x0C60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccumulatedTime;                                         // 0x0C64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     LastVelocities;                                          // 0x0C68(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ImpulseTimestamp;                                        // 0x0C78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bImpulseActive;                                          // 0x0C7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DGDE[0x3];                                   // 0x0C7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaterWaveAmp;                                            // 0x0C80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterWaveAmpTarget;                                      // 0x0C84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterWaveAlpha;                                          // 0x0C88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterWaveAlphaTarget;                                    // 0x0C8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterWaveInterpSpeed;                                    // 0x0C90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaveWaveDir;                                             // 0x0C94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaveWaveDirTarget;                                       // 0x0C98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHiddenDithered;                                         // 0x0C9C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bUseSystemicMotion;                                      // 0x0C9D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B375[0x2];                                   // 0x0C9E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SystemicMotionAlpha;                                     // 0x0CA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PouringProgress;                                         // 0x0CA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPawn*                                             Pawn;                                                    // 0x0CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFinishedPouring;                                        // 0x0CB8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_2IBY[0x3];                                   // 0x0CB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NoHoldingPawnStartTimestamp;                             // 0x0CBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool FixUp();
		int32_t GetObjectiveTypeIndex();
		void OnRep_bFinishedPouring();
		void StartPouring(class URBInteractiblePanelComponent* panel, class ARBPawn* Pawn);
		void ActiveAcidSplashVFX(EAcidBottleDamageType DamageType, class ARBPlayer* Player);
		void TriggerDither(bool bOn);
		void OnRep_bHiddenDithered();
		void UpdateMotionDetection(float DeltaTime);
		void ApplyMotionToWater(float DeltaTime);
		bool ShouldBPTick();
		void DamagePlayersInRadius(EAcidBottleDamageType DamageType, class ARBPlayer* Player);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Dither__FinishedFunc();
		void Dither__UpdateFunc();
		void FadeOutLiquidTimeline__FinishedFunc();
		void FadeOutLiquidTimeline__UpdateFunc();
		void FadeFakeLightTimeline__FinishedFunc();
		void FadeFakeLightTimeline__UpdateFunc();
		void OnEditorPostLoad();
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostAddedToLevel();
		void PostDuplicated(class AActor* duplicationParent);
		void PostEditChange(const class FName& PropertyName);
		void PostEditMove(bool bFinished);
		void TickSelected();
		void OnHoldingPlayerChangedEvent_Event_1(class ARBPawn* holdingPlayer, class ARBLargePickup* largePickup);
		void ReceiveBeginPlay();
		void OnPlayerLanded(class ARBPlayer* Player, float landingHeight);
		void OnPlayerTraversal(class ARBPlayer* Player, float landingHeight);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveTick(float DeltaSeconds);
		void BindEvents();
		void OnWorldPopulateFinished();
		void TriggerMaterialRipples(float WaterWaveAlphaTarget);
		void OnDither();
		void Event_OnResetStage();
		void OnPlayerBashed_Event_1(class ARBPlayer* Player);
		void FadeOutLiquid();
		void SetFadeFakeLight(bool bVisible);
		void Multicast_ActivateAcidSplashVFX(EAcidBottleDamageType DamageType, class ARBPlayer* Player);
		void BP_OnHoldingPawnChanged();
		void ExecuteUbergraph_Base_AcidBottle_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
