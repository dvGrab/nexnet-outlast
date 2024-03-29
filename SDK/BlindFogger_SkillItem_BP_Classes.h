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
	 * BlueprintGeneratedClass BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C
	 * Size -> 0x0010 (FullSize[0x0B00] - InheritedSize[0x0AF0])
	 */
	class ABlindFogger_SkillItem_BP_C : public ABaseFogger_SkillItem_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Ngr_SkillDeactivate;                                     // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnAndExplodeBomb_Server(class AActor** BombActor);
		void SpawnAndExplodeBomb_Client(class AActor** BombActor);
		void Event_OnDeployed();
		void Event_OnActivate();
		void Event_AudioDistractionTriggered();
		void On_Skill_Deactivate_FX(bool IsInZone);
		void ExecuteUbergraph_BlindFogger_SkillItem_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
