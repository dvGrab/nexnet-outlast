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
	 * BlueprintGeneratedClass CollectibleDocument_BP.CollectibleDocument_BP_C
	 * Size -> 0x0018 (FullSize[0x0A28] - InheritedSize[0x0A10])
	 */
	class ACollectibleDocument_BP_C : public ARBCollectibleDocumentPickup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A10(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                InWorldMesh;                                             // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AActor*                                              SpawnedActor;                                            // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void OnPawnSpecialMoveStarted(class ARBPawn* Pawn, ESpecialMove specialMove);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Event_OnWorldPopulateFinished();
		void ExecuteUbergraph_CollectibleDocument_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
