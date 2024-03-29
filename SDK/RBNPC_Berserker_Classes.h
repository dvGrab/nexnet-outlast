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
	 * BlueprintGeneratedClass RBNPC_Berserker.RBNPC_Berserker_C
	 * Size -> 0x0080 (FullSize[0x56E8] - InheritedSize[0x5668])
	 */
	class ARBNPC_Berserker_C : public ARBNPC_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              GauntletsMesh;                                           // 0x5670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HeadMesh;                                                // 0x5678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   ThrowablesExtraCollision;                                // 0x5680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                HeadCollision;                                           // 0x5688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FullBody_Mesh;                                           // 0x5690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<ENPCWeapon, struct FVector>                           LargeWeaponScales;                                       // 0x5698(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UPoseAsset* GetFacePoseAsset();
		class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent();
		void UserConstructionScript();
		void Event_OnWeaponVisible(ENPCWeapon weaponType, class ARBNPCWeapon* weaponActor);
		void ExecuteUbergraph_RBNPC_Berserker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
