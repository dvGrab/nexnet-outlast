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
	 * BlueprintGeneratedClass HumanSpectral_SkillController_BP.HumanSpectral_SkillController_BP_C
	 * Size -> 0x0010 (FullSize[0x0A00] - InheritedSize[0x09F0])
	 */
	class AHumanSpectral_SkillController_BP_C : public ARBActiveSkillController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Ngr_SkillDeactivate;                                     // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void On_Skill_Deactivate_FX(bool IsInZone);
		void ExecuteUbergraph_HumanSpectral_SkillController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
