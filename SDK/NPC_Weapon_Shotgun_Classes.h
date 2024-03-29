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
	 * BlueprintGeneratedClass NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C
	 * Size -> 0x0030 (FullSize[0x02C8] - InheritedSize[0x0298])
	 */
	class ANPC_Weapon_Shotgun_C : public ARBNPCWeapon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                MuzzleLight;                                             // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Muzzle__PS;                                              // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Shotgun;                                                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Fire_04AA25AF4FC2E7795C7E888D31E189BE;        // 0x02B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_04AA25AF4FC2E7795C7E888D31E189BE;  // 0x02BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LWY3[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void NewFunction_1();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Special_Move_Notify(ESpecialMoveNotifyType Notify, ESpecialMove specialMove);
		void ReceiveBeginPlay();
		void EquippedBy(class ARBNPC* NPC);
		void PlayWeaponAnimation(class UAnimSequence* AnimSequence);
		void OnSpecialMoveNotify(class USkeletalMeshComponent* meshComp, class URBAnimNotify_SpecialMove* AnimNotify);
		void ExecuteUbergraph_NPC_Weapon_Shotgun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
