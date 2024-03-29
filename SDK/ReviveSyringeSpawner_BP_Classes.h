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
	 * BlueprintGeneratedClass ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C
	 * Size -> 0x0065 (FullSize[0x0555] - InheritedSize[0x04F0])
	 */
	class AReviveSyringeSpawner_BP_C : public ARBInteractibleContainer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Ngr_GlassBreak;                                          // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PingRef;                                                 // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             RBActorPrevis1;                                          // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  SpawnLocationRespawn;                                    // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight;                                             // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AnimAnchor;                                              // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BrokenWindow;                                            // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Window;                                                  // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActorPrevisComponent*                             RBActorPrevis;                                           // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  SpawnLocationSeringe;                                    // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorClearanceCollisionBoxComponent*             RBEditorClearanceCollisionBox;                           // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBroken_Server;                                         // 0x0550(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       IsBroken_Local;                                          // 0x0551(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NeedInsideLight;                                         // 0x0552(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		ELightClipPlaneMode                                        Clip_Plane;                                              // 0x0553(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowSoloPills;                                         // 0x0554(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetLookAtLocation(struct FVector* outLookAtLocation);
		void DisableLightOnServer();
		bool ShouldSpawnPill();
		bool GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled);
		bool GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation);
		bool GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData);
		void OnRep_IsBroken_Server();
		void OnRep_NeedInsideLight();
		void UpdateLights();
		bool IsOpen();
		void UpdateBrokenState();
		bool PlaySpecialMoveAnimation(class ARBPawn* interactorPawn, ESpecialMove specialMove);
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void UserConstructionScript();
		void OnWorldPopulateFinished();
		void ForceBreak_Server();
		void ReceiveBeginPlay();
		void Break(class AActor* Damager);
		void Event_OnResetStage();
		void PostToggled(bool bToggleEnabled);
		void OnPawnDoSpecialMoveAction(class ARBPawn* Pawn, ESpecialMove specialMove);
		void Event_ItemPickedUp(class ARBPawn* Pawn, class ARBPickup* Item);
		void ValidateBroken();
		void BndEvt__ReviveSyringeSpawner_BP_DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableEvent__DelegateSignature(class URBDamageableComponent* DamageableComponent);
		void ExecuteUbergraph_ReviveSyringeSpawner_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
