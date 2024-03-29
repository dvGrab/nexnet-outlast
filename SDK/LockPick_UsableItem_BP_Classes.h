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
	 * BlueprintGeneratedClass LockPick_UsableItem_BP.LockPick-UsableItem_BP_C
	 * Size -> 0x0010 (FullSize[0x09F0] - InheritedSize[0x09E0])
	 */
	class ALockPick_UsableItem_BP_C : public ABase_RBPickup_BP_C
	{
	public:
		class USkeletalMeshComponent*                              InHandMesh;                                              // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                InWorldMesh;                                             // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
