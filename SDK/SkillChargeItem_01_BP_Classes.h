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
	 * BlueprintGeneratedClass SkillChargeItem_01_BP.SkillChargeItem-01_BP_C
	 * Size -> 0x0010 (FullSize[0x0A00] - InheritedSize[0x09F0])
	 */
	class ASkillChargeItem__BP_C : public ASimpleMesh_Pickup_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              ItemHandMesh;                                            // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void OnConsumeItemCancelledNotify(class ARBPawn* Pawn);
		void ExecuteUbergraph_SkillChargeItem__BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
