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
	 * BlueprintGeneratedClass MedPharma_SkillController_BP.MedPharma_SkillController_BP_C
	 * Size -> 0x0018 (FullSize[0x0A08] - InheritedSize[0x09F0])
	 */
	class AMedPharma_SkillController_BP_C : public ARBActiveSkillController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Ngr_SkillDeactivate;                                     // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ptc_Thrust;                                              // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateParticleEmitter(bool IsActive);
		void Event_OnItemHeldInHandChanged(bool bHeldInHand);
		void On_Skill_Deactivate_FX(bool IsInZone);
		void ExecuteUbergraph_MedPharma_SkillController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
