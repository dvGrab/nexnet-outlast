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
	 * BlueprintGeneratedClass HallucinationManager_BP.HallucinationManager_BP_C
	 * Size -> 0x0010 (FullSize[0x0380] - InheritedSize[0x0370])
	 */
	class AHallucinationManager_BP_C : public ARBHallucinationManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void Event_HallucinationStarted(const struct FHallucinationData& halluData);
		void Event_HallucinationStopped(const struct FHallucinationData& halluData);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_HallucinationManager_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
