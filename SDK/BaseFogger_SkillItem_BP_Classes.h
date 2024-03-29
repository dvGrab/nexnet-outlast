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
	 * BlueprintGeneratedClass BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C
	 * Size -> 0x0050 (FullSize[0x0AF0] - InheritedSize[0x0AA0])
	 */
	class ABaseFogger_SkillItem_BP_C : public ARBDeployableSkillItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                Light_Marker;                                            // 0x0AA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_Marker;                                              // 0x0AB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   SoundComponent;                                          // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        PaintColor;                                              // 0x0AC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MineLightColor;                                          // 0x0AD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      SpawnedActors;                                           // 0x0AE0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance

	public:
		void SpawnAndExplodeBomb_Server(class AActor** BombActor);
		void Activate_Light(const struct FLinearColor& Color, bool On);
		void SpawnAndExplodeBomb_Client(class AActor** BombActor);
		void Event_OnActivate();
		void Event_OnExpiredUnactivated();
		void Event_OnDeployed();
		void Event_OnPlaced();
		void Event_EffectFinished();
		void DestroySpawnedActors();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BaseFogger_SkillItem_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
