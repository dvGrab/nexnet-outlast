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
	 * BlueprintGeneratedClass TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C
	 * Size -> 0x0079 (FullSize[0x0799] - InheritedSize[0x0720])
	 */
	class ATriggerTrap_BatteryPowered_Right_BP_C : public ARBWireTriggerTrap
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBActiveSkillVisionComponent*                       RBActiveSkillVision;                                     // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PingZone;                                                // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBPingComponent*                                    RBPing;                                                  // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DisarmAnimAnchorRef;                                     // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            BatterySpark;                                            // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             BatterySpawnerActor;                                     // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AnimationAnchorRef;                                      // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BatteryAnchor_SKM;                                       // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AS_WaveSphere;                                           // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   RBSound;                                                 // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ActiveDiode;                                             // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBOutlineComponent*                                 RBOutline;                                               // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorRef;                                                 // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bOpen;                                                   // 0x0798(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void GetLookAtLocation(struct FVector* outLookAtLocation);
		void DestroyedSpawnedBattery();
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		bool PlaySpecialMoveAnimation(class ARBPawn* interactorPawn, ESpecialMove specialMove);
		void OnRep_bOpen();
		void SetSpawnedItemsInteractible(bool IsInteractibe);
		void UserConstructionScript();
		void BP_OnArmed();
		void BP_OnDisarmed();
		void Event_OnCompletedOperation(TArray<class ARBPawn*> pawns);
		void OpenTrap();
		void OnRep_Open();
		void BndEvt__BatterySpawnerActor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature(class URBActorPrevisComponent* actorPrevis, class AActor* runtimeChildActor);
		void Event_SnapToState();
		void OnDisarmed_Internal(bool bSnapToState);
		void BP_OnTrapBatteryStateChanged();
		void ExecuteUbergraph_TriggerTrap_BatteryPowered_Right_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
