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
	 * BlueprintGeneratedClass TrapDart_BP.TrapDart_BP_C
	 * Size -> 0x0022 (FullSize[0x02DA] - InheritedSize[0x02B8])
	 */
	class ATrapDart_BP_C : public ARBTrapDart
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            PsychosisGas_PS;                                         // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ConstantSparks;                                          // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            InitialSparks;                                           // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bThrown;                                                 // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDetached;                                               // 0x02D9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_bDetached();
		void SimulatePhysics(bool bAddImpulse);
		void ReachEndOfCable();
		void BP_OnLaunchEvent();
		void Electrify();
		void BP_OnHitPlayer(class ARBPlayer* Player);
		void BP_OnDetachFromPlayer(class ARBPlayer* Player);
		void BP_OnReachedMaxLimitServer();
		void BP_OnPlayerDamage();
		void BP_OnPlayerPsychosis();
		void ExecuteUbergraph_TrapDart_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
