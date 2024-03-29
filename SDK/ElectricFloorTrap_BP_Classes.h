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
	 * BlueprintGeneratedClass ElectricFloorTrap_BP.ElectricFloorTrap_BP_C
	 * Size -> 0x01CF (FullSize[0x05E0] - InheritedSize[0x0411])
	 */
	class AElectricFloorTrap_BP_C : public AMeshPopulate_BP_C
	{
	public:
		unsigned char                                              UnknownData_P9LR[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBActiveSkillVisionComponent*                       RBActiveSkillVision1;                                    // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ActiveSkillWaveSphere;                                   // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNavModifierComponent*                               NavModifier;                                             // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   VFX_Lighting03;                                          // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRoomAssociationComponent*                         RBRoomAssociation;                                       // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBObstacleVariatorComponent*                        RBObstacleVariator;                                      // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                VFX_PointLight;                                          // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBDamageableComponent*                              RBDamageable;                                            // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ProjectileCollision;                                     // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBObjectiveProximityComponent*                      RBObjectiveProximity;                                    // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 EditorIcon;                                              // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBFloorMaterialBoxComponent*                        RBFloorMaterialBox;                                      // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   VFX_Lighting02;                                          // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   VFX_Lighting01;                                          // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRandomizableHelperComponent*                      RBRandomizableHelper;                                    // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBElectricFloorTrapComponent*                       RBElectricFloorTrap;                                     // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   Sound;                                                   // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_4952880C41E065960AF550B2914A2164;  // 0x04A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_4952880C41E065960AF550B2914A2164;  // 0x04AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0MZT[0x3];                                   // 0x04AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SppedFlash_NewTrack_0_D39E375F41061B2B97D3C0AC3E853BAD;  // 0x04B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SppedFlash__Direction_D39E375F41061B2B97D3C0AC3E853BAD;  // 0x04BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YH4U[0x3];                                   // 0x04BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SppedFlash;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ActiveOffTimerHandle;                                    // 0x04C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      LightIntensity;                                          // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseSpotLight;                                            // 0x04D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EElectricFloorTrapState                                    CurrentState;                                            // 0x04D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W8VN[0x2];                                   // 0x04D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentParticleSystemIdx;                                // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OIQC[0x4];                                   // 0x04DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UNiagaraComponent*>                           ElectricVFXList;                                         // 0x04E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UStaticMeshComponent*>                        AllStaticMeshes;                                         // 0x04F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UMaterialInstanceDynamic*                            LightningFloorMat;                                       // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 Target;                                                  // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleMeshData02>                           MeshesArray;                                             // 0x0510(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        AllBoxes;                                                // 0x0520(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FVector>                                     VFXLocation;                                             // 0x0530(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             VFXLocationScale;                                        // 0x0540(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_404M[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VFXRandomEnd;                                            // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class AElectricFloorTrap_BP_C*                             MasterTrap;                                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleMeshData02>                           WireMeshes;                                              // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FStaticmeshArray_Stuc>                       AllGridStactimeshes;                                     // 0x0578(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FModuleMeshData>                             MeshArray;                                               // 0x0588(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        AllBrokenBoxes;                                          // 0x0598(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FVector                                             VFXMedianLocation;                                       // 0x05A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MGNY[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class URBSpotLightComponent*>                       SpotLights;                                              // 0x05B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FVector>                                     SpotlightPosition;                                       // 0x05C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      LesserDistance;                                          // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ActualSpotlight;                                         // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		bool ShouldBeIgnoredForLots();
		void ShouldVFXPlay(bool* ShouldPlay);
		void GetVFXposition();
		void SetVisualState(EElectricFloorTrapState State);
		void SetElectricVFXAsset(class UNiagaraSystem* NiagaraAsset);
		void PlayElectricVFXAtRandomLocation(class UAkAudioEvent* AssociatedSound);
		struct FVector GetRandomLocationOnFloor();
		EElectricFloorTrapState GetTrapState();
		void OnTrapStateChanged();
		void UserConstructionScript();
		void SppedFlash__FinishedFunc();
		void SppedFlash__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void PrepareState(bool bStateA, class AActor* randomOwner);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Event_OnResetStage();
		void BndEvt__RBElectricFloorTrap_K2Node_ComponentBoundEvent_1_OnElectricFloorTrapEvent__DelegateSignature(class URBElectricFloorTrapComponent* trap);
		void OnStateChange_ActiveOff();
		void OnStateChange_ActiveOn();
		void OnStateChange_Inactive();
		void SetState(bool bStateA);
		void SetShouldBeIgnoredForLots(bool bValue);
		void OnStageChange_ActiveTriggered();
		void OnStateChange_Broken();
		void BndEvt__RBDamageable_K2Node_ComponentBoundEvent_2_OnDamageableDestroyed__DelegateSignature(class URBDamageableComponent* DamageableComponent);
		void OnStageChange_ActiveWarning();
		void SpeedSlash();
		void LightFlash();
		void SetBrokenMesh(bool IsBroken);
		void ExecuteUbergraph_ElectricFloorTrap_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
