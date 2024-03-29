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
	 * BlueprintGeneratedClass BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C
	 * Size -> 0x0018 (FullSize[0x0B98] - InheritedSize[0x0B80])
	 */
	class ABaseAmp_SkillItem_BP_C : public ARBThrowableSkillItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Ngr_SkillDeactivate;                                     // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   PostProcess;                                             // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RefreshCooldown(class ARBActiveSkill* ActiveSkill);
		void Event_OnActivate();
		void Event_OnDeployed();
		void PlayerAssigned(class ARBPawn* Pawn, class ARBPickup* Item);
		void ReceiveBeginPlay();
		void CooldownChanged(class ARBActiveSkill* ActiveSkill, bool bIsInCooldown);
		void On_Skill_Deactivate_FX();
		void ExecuteUbergraph_BaseAmp_SkillItem_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
