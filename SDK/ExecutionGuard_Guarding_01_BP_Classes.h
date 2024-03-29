#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * BlueprintGeneratedClass ExecutionGuard_Guarding_01_BP.ExecutionGuard_Guarding_01_BP_C
	 * Size -> 0x001F (FullSize[0x02D0] - InheritedSize[0x02B1])
	 */
	class AExecutionGuard_Guarding_01_BP_C : public AExecutionActorBase_BP_C
	{
	public:
		unsigned char                                              UnknownData_WZZ1[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              G_Head;                                                  // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              G_Body;                                                  // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Guard;                                                   // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetLoopAnim(class USkeletalMeshComponent* Mesh, class UAnimSequence** Anim);
		void GetIntroAnim(class USkeletalMeshComponent* Mesh, class UAnimSequence** Anim);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
