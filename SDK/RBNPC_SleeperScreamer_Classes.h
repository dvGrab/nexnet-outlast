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
	 * BlueprintGeneratedClass RBNPC_SleeperScreamer.RBNPC_SleeperScreamer_C
	 * Size -> 0x0020 (FullSize[0x5688] - InheritedSize[0x5668])
	 */
	class ARBNPC_SleeperScreamer_C : public ARBNPC_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            Ptc_SoundWave;                                           // 0x5670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head_Mesh;                                               // 0x5678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Body_Mesh;                                               // 0x5680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Event_OnScreamerSonicStun(const struct FVector& headLocation);
		void ExecuteUbergraph_RBNPC_SleeperScreamer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
