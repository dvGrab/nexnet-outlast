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
	 * BlueprintGeneratedClass Respawn_Consumable_BP.Respawn-Consumable_BP_C
	 * Size -> 0x0018 (FullSize[0x0A08] - InheritedSize[0x09F0])
	 */
	class ARespawn_Consumable_BP_C : public ASimpleMesh_Pickup_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Pill;                                                    // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ItemHandMesh;                                            // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ResetPill();
		void SwapHand();
		void UserConstructionScript();
		void OnPawnSpecialMoveCompleted(class ARBPawn* Pawn, ESpecialMove specialMove, bool bInterrupted);
		void OnPawnDoSpecialMoveAction(class ARBPawn* Pawn, ESpecialMove specialMove);
		void BP_OnConsumeItemAnimNotify(const class FName& ID);
		void ExecuteUbergraph_Respawn_Consumable_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
