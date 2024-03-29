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
	 * BlueprintGeneratedClass Base_LargePickup_BP.Base_LargePickup_BP_C
	 * Size -> 0x001C (FullSize[0x0968] - InheritedSize[0x094C])
	 */
	class ABase_LargePickup_BP_C : public ARBLargePickup
	{
	public:
		unsigned char                                              UnknownData_B47D[0x4];                                   // 0x094C(0x0004) Fix Super Size
		class URBActiveSkillVisionComponent*                       RBActiveSkillVision;                                     // 0x0950(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ActiveSkillWaveSphere;                                   // 0x0958(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       LargePickupDetection;                                    // 0x0960(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
