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
	 * BlueprintGeneratedClass GoreDispenser_Container_BP.GoreDispenser_Container_BP_C
	 * Size -> 0x0108 (FullSize[0x0748] - InheritedSize[0x0640])
	 */
	class AGoreDispenser_Container_BP_C : public ARBAutoRespawnContainer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0640(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       InteractionBlocker;                                      // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Collision;                                               // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBOutlineComponent*                                 RBOutline;                                               // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerInteractibleZoneComponent*               RBContainerInteractibleZone;                             // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBObjectiveActorComponent*                          RBObjectiveActor;                                        // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_Gel;                                                 // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Pipe_02_9001;                                            // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   RBSound;                                                 // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  SpawnLocation01;                                         // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  SpawnLocation06;                                         // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  SpawnLocation05;                                         // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  SpawnLocation04;                                         // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  SpawnLocation03;                                         // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  SpawnLocation02;                                         // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     WaterRoot;                                               // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRandomizableHelperComponent*                      RandomHelper;                                            // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorSelectedPreviewComponent*                   RBEditorSelectedPreview6;                                // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorSelectedPreviewComponent*                   RBEditorSelectedPreview5;                                // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorSelectedPreviewComponent*                   RBEditorSelectedPreview4;                                // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorSelectedPreviewComponent*                   RBEditorSelectedPreview3;                                // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorSelectedPreviewComponent*                   RBEditorSelectedPreview2;                                // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorSelectedPreviewComponent*                   RBEditorSelectedPreview1;                                // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DrainTimeline_DrainRatio_2D6410B74B67DBD6935F0FA2D2D1D91C; // 0x06F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DrainTimeline__Direction_2D6410B74B67DBD6935F0FA2D2D1D91C; // 0x06FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VKG3[0x3];                                   // 0x06FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DrainTimeline;                                           // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              DesiredSpawnLocationZ;                                   // 0x0708(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		TArray<float>                                              CurrentSpawnLocationZ;                                   // 0x0718(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bFilling;                                                // 0x0728(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C6VN[0x7];                                   // 0x0729(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       RunningStartSound;                                       // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       RunningStopSound;                                        // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWaterMovement_BP_C*                                 WaterPlaneBP;                                            // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool FixUp();
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		bool ShouldBeIgnoredForLots();
		void SetAllItemsEnabledBySpawnLocation(bool bEnabled);
		void SetItemEnabledBySpawnLocation(class URBContainerSpawnLocationComponent* spawnLocationComponent, bool bEnabled);
		void ReinitSpawnLocationZ(class URBContainerSpawnLocationComponent* SpawnLocation, int32_t SpawnLocationIndex);
		void ReinitAllSpawnLocationZ();
		void OnDesiredSpawnLocationZChanged();
		void TickFloating(float DeltaTime, bool* bDone);
		void OnRep_DesiredSpawnLocationZ();
		void SetSpawnLocationRelativeZ(class URBContainerSpawnLocationComponent* SpawnLocation, float Z);
		void UserConstructionScript();
		void DrainTimeline__FinishedFunc();
		void DrainTimeline__UpdateFunc();
		void OnEditorPostLoad();
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostAddedToLevel();
		void PostDuplicated(class AActor* duplicationParent);
		void PostEditChange(const class FName& PropertyName);
		void PostEditMove(bool bFinished);
		void TickSelected();
		void Event_OnResetStage();
		void SetState(bool bStateA);
		void SetShouldBeIgnoredForLots(bool bValue);
		void Drain();
		void Fill();
		void Event_ItemRemoved(class ARBPickup* Item, int32_t Index, class URBContainerSpawnLocationComponent* Location);
		void ReceiveTick(float DeltaSeconds);
		void Event_ItemAdded(class ARBPickup* Item, int32_t Index, class URBContainerSpawnLocationComponent* Location);
		void Event_OnAutoRespawnItemsEnabledChanged(bool bEnabled);
		void TestFill();
		void OnSpawnedItemInfosChanged();
		void PostToggled(bool bToggleEnabled);
		void BndEvt__GoreDispenser_Container_BP_SpawnLocation02_K2Node_ComponentBoundEvent_0_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup);
		void BndEvt__GoreDispenser_Container_BP_SpawnLocation03_K2Node_ComponentBoundEvent_1_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup);
		void BndEvt__GoreDispenser_Container_BP_SpawnLocation04_K2Node_ComponentBoundEvent_2_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup);
		void BndEvt__GoreDispenser_Container_BP_SpawnLocation05_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup);
		void BndEvt__GoreDispenser_Container_BP_SpawnLocation06_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup);
		void BndEvt__GoreDispenser_Container_BP_SpawnLocation01_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_GoreDispenser_Container_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
