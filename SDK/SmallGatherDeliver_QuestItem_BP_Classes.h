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
	 * BlueprintGeneratedClass SmallGatherDeliver_QuestItem_BP.SmallGatherDeliver_QuestItem_BP_C
	 * Size -> 0x01B8 (FullSize[0x0B88] - InheritedSize[0x09D0])
	 */
	class ASmallGatherDeliver_QuestItem_BP_C : public ARBPickup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBObjectiveActorComponent*                          RBObjectiveActor;                                        // 0x09D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                InWorldMesh;                                             // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRandomizableHelperComponent*                      RBRandomizableHelper;                                    // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FConfigurableFloat                                  AlarmIntervalMin;                                        // 0x09F0(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FConfigurableFloat                                  AlarmIntervalMax;                                        // 0x0AB8(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    TriggerCount;                                            // 0x0B80(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      delay;                                                   // 0x0B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		bool ShouldBeIgnoredForLots();
		void UserConstructionScript();
		void PrepareState(bool bStateA, class AActor* randomOwner);
		void SetShouldBeIgnoredForLots(bool bValue);
		void SetState(bool bStateA);
		void ExecuteUbergraph_SmallGatherDeliver_QuestItem_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
