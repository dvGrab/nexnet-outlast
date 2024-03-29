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
	 * BlueprintGeneratedClass RBNPC_BP.RBNPC_BP_C
	 * Size -> 0x0050 (FullSize[0x5668] - InheritedSize[0x5618])
	 */
	class ARBNPC_BP_C : public ARBNPC
	{
	public:
		unsigned char                                              UnknownData_QLCO[0x8];                                   // 0x5618(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBActiveSkillVisionComponent*                       RBActiveSkillVision;                                     // 0x5628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AS_WaveSphere;                                           // 0x5630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBAimAssistComponent*                               Head_Aim_Assist;                                         // 0x5638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BroadcastWeaponAnimation;                                // 0x5640(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UNiagaraComponent*                                   RageEyeFX_R;                                             // 0x5650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   RageEyeFX_L;                                             // 0x5658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   BloodDripsParticles;                                     // 0x5660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnVariatorEffects();
		void SetNormalMeshVisibility(bool bVisible);
		void UserConstructionScript();
		void Event_PlayHitReactionEffects(const struct FVector& attackLoc, const struct FRotator& effectRotation);
		void Event_OnFootstep(const struct FFootstepData& FootstepData);
		void Event_OnDealtWeaponDamage(class ARBPawn* otherPawn, const struct FVector& DamageLocation);
		void Event_OnDealtUnarmedDamage(class ARBPawn* otherPawn, const class FName& damageSourceBone);
		void ReceiveBeginPlay();
		void TestFakeBlurHead();
		void TestFakeBlurComplete();
		void ExecuteUbergraph_RBNPC_BP(int32_t EntryPoint);
		void BroadcastWeaponAnimation__DelegateSignature(class UAnimSequence* Sequence);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
