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
	 * BlueprintGeneratedClass BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C
	 * Size -> 0x0010 (FullSize[0x0BA8] - InheritedSize[0x0B98])
	 */
	class ABrainAmp_SkillItem_BP_C : public ABaseAmp_SkillItem_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B98(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            Ptc_AmpExplo;                                            // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void Event_OnActivate();
		void Event_OnDeployed();
		void ExecuteUbergraph_BrainAmp_SkillItem_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
