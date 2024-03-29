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
	 * BlueprintGeneratedClass RBPlayer_BP.RBPlayer_BP_C
	 * Size -> 0x0258 (FullSize[0x77B8] - InheritedSize[0x7560])
	 */
	class ARBPlayer_BP_C : public ARBPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x7560(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Ngr_Temp_Sys_PlayerDamaged_Electric;                     // 0x7568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_AcidCamSplash;                                       // 0x7570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            UnderwaterBubbles;                                       // 0x7578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Watch;                                                   // 0x7580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_UnderwaterBubble;                                    // 0x7588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_TraproomGas;                                         // 0x7590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Lens_R;                                                  // 0x7598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Lens_L;                                                  // 0x75A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              NightVision1P;                                           // 0x75A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     ProxyLightDir;                                           // 0x75B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ShadowPickupStatic;                                      // 0x75B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ShadowPickupSkeletal;                                    // 0x75C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_ElectricHit;                                         // 0x75C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_BloodDripping;                                       // 0x75D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBPlayerSkelMeshComponent*                          ESOP;                                                    // 0x75D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ESOP_Battery;                                            // 0x75E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ESOP_Apparatus;                                          // 0x75E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HeadCap1P;                                               // 0x75F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HairMesh3P;                                              // 0x75F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GloveMesh3P;                                             // 0x7600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 ProxyLight;                                              // 0x7608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Straps;                                                  // 0x7610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              NightVision;                                             // 0x7618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              LegsMesh3P;                                              // 0x7620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              TorsoMesh3P;                                             // 0x7628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HeadMesh3P;                                              // 0x7630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentLobbyCameraIndex;                                 // 0x7638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YN5W[0x4];                                   // 0x763C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACameraIntercom__BP_C*                               CurrentCameraIntercom;                                   // 0x7640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentHitCount;                                         // 0x7648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C9FH[0x4];                                   // 0x764C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    DamageMaterials;                                         // 0x7650(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FPlayerVisualDamageStruct>                   DamagedBones;                                            // 0x7660(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             Deleteme;                                                // 0x7670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class USceneComponent*>                             ShadowMesh_Visual;                                       // 0x7680(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UPrimitiveComponent*>                         ShadowMesh_Shadow;                                       // 0x7690(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      ConstantDamageBias;                                      // 0x76A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XKJK[0x4];                                   // 0x76A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkeletalMeshComponent*>                      ExtraCustomizationMeshes;                                // 0x76A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       CreatedShadowMesh;                                       // 0x76B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasInitReplicated;                                       // 0x76B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasReceivedInitialCustomization;                         // 0x76BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZG76[0x1];                                   // 0x76BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageRadius1;                                           // 0x76BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageRadius2;                                           // 0x76C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageRadius3;                                           // 0x76C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ShadowMeshCompleted;                                     // 0x76C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      CorpseSearchBloodHandStartTime;                          // 0x76D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredRightHandBloodIntensity;                          // 0x76DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CorpseSearchBloodDuration;                               // 0x76E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentRightHandBloodIntensity;                          // 0x76E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandBloodInterpSpeed;                                    // 0x76E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BQTM[0x4];                                   // 0x76EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultNV1PMesh[0x28];                                   // 0x76F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      NextBloodDripDelay;                                      // 0x7718(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastBloodDripTimestamp;                                  // 0x771C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastDownedStateSmearTimestamp;                           // 0x7720(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AII3[0x4];                                   // 0x7724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceConstant*>                   DynamicBloodSplatterMaterials;                           // 0x7728(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMaterialInstanceConstant*>                   DynamicBloodSplatterMaterials_Shuffled;                  // 0x7738(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      NextDownedStateSmearDelay;                               // 0x7748(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MEHS[0x4];                                   // 0x774C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceConstant*>                   DynamicStraightBloodSmearMaterials;                      // 0x7750(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TravelledDist;                                           // 0x7760(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DamageVisualPreviousLocation;                            // 0x7764(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            DamageVisualPreviousRotation;                            // 0x7770(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ANB2[0x4];                                   // 0x777C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceConstant*>                   DynamicRoundBloodSmearMaterials;                         // 0x7780(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UPoseAsset*                                          FacePoseAsset;                                           // 0x7790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastLocationDataTimestamp;                               // 0x7798(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NextLongBloodDripDelay;                                  // 0x779C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastLongBloodDripTimestamp;                              // 0x77A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0HFB[0x4];                                   // 0x77A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                ApparatusShadowMesh;                                     // 0x77A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              MainShadowMesh;                                          // 0x77B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class USkeletalMeshComponent* GetMainParentSkeletalMesh();
		class UStaticMeshComponent* GetWatchComponent();
		struct FRBPlayerCustomizationInfo GetPlayerCustomizationInfo();
		class USkeletalMeshComponent* GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot);
		TArray<class UPrimitiveComponent*> GetAllShadowMeshes();
		class USkeletalMeshComponent* GetMainShadowMesh();
		void DebugShadowMesh();
		void UpdateUnderwaterFX();
		void CopyMaterialsToShadowMesh(class UMeshComponent* PlayerMesh, class UMeshComponent* ShadowMesh);
		void UpdateShadowActiveSkill();
		void UpdateESOPVisibility();
		void UpdateVisualDamage(float DeltaTime);
		void UpdateBloodSmearInDownedState();
		void GetNextShuffledMaterial(class UMaterialInstanceConstant** NewParam);
		void ApplyBloodDecal(class UMaterialInstanceConstant* MatDecal, float Scale, bool Rotate);
		void ApplyDamageVFX(EDamageType InfoType, ENPCWeapon NPCWeapon, float DmdAmount, const struct FVector& DmgLocation, const struct FVector& DmgDirection, class AActor* SourceActor, bool bBloodParticles);
		void GetRelevantForDamageExtraMeshes(TArray<class USkeletalMeshComponent*>* SkeletalMeshes_);
		bool TryPlayFacialAnim(const class FString& lineId);
		void ApplyBloodOnRightHand();
		void UpdateBloodHand(float DeltaTime);
		class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent();
		class UPoseAsset* GetFacePoseAsset();
		void UpdateShadowPickup(class ARBPickup* Old, class ARBPickup* New);
		void UpdateBloodDrippingParticle();
		void DebugVisualDamage();
		void ReduceVisualDamage(bool Increased, float newHealth);
		void ApplyVisualDamageToSkelMeshes();
		void RefreshHeadCapVisibility();
		void UpdateHeadCapMesh();
		void Should_Hide_Customization_Slot_in_P(EPlayerCustomizationSlot Slot, bool* ShouldHide);
		void ClearExtraCustomizationMeshes();
		void CreateShadowmeshCopyOfStaticMesh(class UStaticMeshComponent** InVisualMesh, class USkeletalMeshComponent** Parent, class UStaticMeshComponent** OutNewComponent);
		void CreateSkeletalMeshForShadow(class USkeletalMeshComponent* InVisibleMesh, class USceneComponent* InParent, bool bKeepRelativeTransform, class USkeletalMeshComponent** Out);
		void Remove_Shadow_Meshes();
		void CreateShadowmeshCopyOfSkeletalMesh(class USkeletalMeshComponent** InVisibleMesh, class USceneComponent** InParent, class UClass* InAnimInstance, class USkeletalMeshComponent** OutShadowMeshComponent);
		void Update_Shadow_Mesh(bool ForceClean);
		void UpdateESOPBatteryType();
		void ResetDamageMaterials();
		void ApplyVisualDamageToCharacter(const struct FVector& Location, float damageAmount, class AActor* SrcActor);
		void CustomizeCharacterModel(class URBCustomizationOutfit* OutfitOverride);
		void Event_PlayHitReactionEffects(const struct FPlayerHitReactionParams& hitReaction, const struct FVector& attackLoc, float hitRelativeAngle);
		void SetInitialPlayerSettings();
		void UserConstructionScript();
		void OnLoaded_E32B3EA245CB7B65286791842D20B97F(class UObject* Loaded);
		void Event_OnPlayerPerspectiveChanged();
		void Event_OnDie();
		void Event_OnTakeDamage(const struct FDamageInfo& Info);
		void BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature(bool bOn);
		void Event_OnCustomizationChanged();
		void Event_StartSpectatingLocally();
		void Event_StopSpectatingLocally();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SetRemoteCameraIntercomInteractibilitty(class ARemoteCameraIntercom__BP_C* RemoteCameraIntercom, bool bInteractibleValue);
		void Server_SetCameraIntercomActive(bool Active, class ACameraIntercom__BP_C* CameraIntercom);
		void Server_SetCameraIntercomPitchYaw(float Pitch, float Yaw, class ACameraIntercom__BP_C* CameraIntercom, bool IsTalking);
		void Multicast_SetCameraIntercomPitchYaw(float Pitch, float Yaw, class ACameraIntercom__BP_C* CameraIntercom, bool IsTalking);
		void Multicast_SetCameraIntercomActive(bool Active, class ACameraIntercom__BP_C* CameraIntercom);
		void Multicast_CameraIntercomInteractibility(class ARemoteCameraIntercom__BP_C* RemoteCameraIntercom, bool bInteractibleValue);
		void Event_InitReplicated();
		void PlaySoundOnPlayer(class UAkAudioEvent* akEvent);
		void ReceiveBeginPlay();
		void BP_OnTrapRoomFailed();
		void Event_OnLastConsumedBatteryTypeChanged(EItemType batteryType);
		void Event_OnFootstep(const struct FFootstepData& FootstepData);
		void UpdatePerspective();
		void UpdateCustomization();
		void OnHealthUpdated_Event(float newHealth, bool bIncreased);
		void OnExtraCustomizationMeshesAddedForSlot(TArray<class USkeletalMeshComponent*> addedExtraMeshes, EPlayerCustomizationSlot Slot);
		void OnAffectedByPsychosisGas_BP();
		void UpdateShadowPickupEvent(class ARBPickup* oldItem, class ARBPickup* newItem);
		void ReceiveTick(float DeltaSeconds);
		void ShowProxyLight();
		void Broadcast2DSound(class UAkAudioEvent* Event);
		void OnNVAnimationDone_Event(bool isNvActive);
		void NVAnimationDone();
		void Event_OnNVAnimationNotify(bool bWantsNvOn, ENightVisionAnimNotifyType Type);
		void SetProxylightEnabled(bool Enabled);
		void ApplyDefaultNV();
		void UnderwaterStateChanged(bool bIsUnderwater);
		void Event_OnHealthRestored();
		void Event_OnActiveSkillActorChanged(class AActor* activeSkillActor);
		void Event_OnEnterActiveSkillLimiterZone(class ARBActiveSkillLimiterZone* zoneEntered);
		void Event_OnExitActiveSkillLimiterZone(class ARBActiveSkillLimiterZone* zoneExited);
		void Event_OnRemainingRespawnIncreased();
		void ExecuteUbergraph_RBPlayer_BP(int32_t EntryPoint);
		void ShadowMeshCompleted__DelegateSignature();
		void Deleteme__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
