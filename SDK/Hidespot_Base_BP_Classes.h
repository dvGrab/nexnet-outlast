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
	 * BlueprintGeneratedClass Hidespot_Base_BP.Hidespot_Base_BP_C
	 * Size -> 0x006D (FullSize[0x02B5] - InheritedSize[0x0248])
	 */
	class AHidespot_Base_BP_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     EnabledRoot;                                             // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorClearanceCollisionBoxComponent*             ClearanceBox;                                            // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRandomizableHelperComponent*                      RBRandomizableHelper;                                    // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRoomAssociationComponent*                         RBRoomAssociation;                                       // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     disabledRoot;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBInvestigationComponent*                           HidespotInvestigation;                                   // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HidespotRandomSeed;                                      // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCustomDisableMeshes;                                    // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bShowDisabledVisuals;                                    // 0x028D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bForceDisabled;                                          // 0x028E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bToggledEnabled;                                         // 0x028F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanBeUsedByPouncer;                                     // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A304[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DenyInteractionText;                                     // 0x0298(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       RemoveDisabledMeshFromServer;                            // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWarnOnForceDisabled;                                    // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       DisableInsteadOfToggling;                                // 0x02B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bShowEnabledVisuals;                                     // 0x02B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bCustomEnableMeshes;                                     // 0x02B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool GetPingItemName(class FText* outName);
		bool GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled);
		bool GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData);
		bool GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation);
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		bool ShouldBeIgnoredForLots();
		bool FixUp();
		void RandomizeEnabledMeshes(class USceneComponent* RandomizationRoot, int32_t RandomSeedOffset);
		void UpdateInteractionIgnoreComponents(class URBHidespotComponent* hidespot);
		void Editor_RefreshEnabledMeshesVisibility(bool* bShowEnabledVisuals);
		void IntitializeClearanceBoxes();
		void DisabledAttachedComponentsFromServer(class USceneComponent* Parent);
		void DisableExtraComponentsFromServer();
		void SetupMasterPose();
		void GatherAvailableRandomizationSceneComp(class USceneComponent* Root, TArray<class USceneComponent*>* Availables, TArray<class USceneComponent*>* Discarded);
		void TrySetupRandomizedSkeletalMeshFromRoot(class USceneComponent* InComponent);
		void TrySetupRandomizedSkeletalMesh(class USceneComponent* InComponent);
		void WakeUpDisabledSkeletalMesh(class USceneComponent* OverrideDisableRoot);
		void Editor_RefreshDisabledMeshesVisibility(bool* bShowDisabledVisuals);
		void SetDisabledMeshesState(bool bDisabled, class USceneComponent* RandomizationRootOverride);
		void RandomizeDisabledMeshes(class USceneComponent* RandomizationRoot, int32_t RandomSeedOffset);
		void TryGenerateRandomSeed();
		void UserConstructionScript();
		void PrepareState(bool bStateA, class AActor* randomOwner);
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostAddedToLevel();
		void PostEditChange(const class FName& PropertyName);
		void PostEditMove(bool bFinished);
		void TickSelected();
		void PostDuplicated(class AActor* duplicationParent);
		void Event_OnResetStage();
		void PostToggled(bool bToggleEnabled);
		void SetShouldBeIgnoredForLots(bool bValue);
		void SetState(bool bStateA);
		void OnEditorPostLoad();
		void ExecuteUbergraph_Hidespot_Base_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
